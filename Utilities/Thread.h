#pragma once

static std::thread::id main_thread;

class NamedThreadBase
{
	std::string m_name;

	std::condition_variable m_signal_cv;
	std::mutex m_signal_mtx;

public:
	NamedThreadBase(const std::string& name) : m_name(name)
	{
	}

	NamedThreadBase()
	{
	}

	virtual std::string GetThreadName() const;
	virtual void SetThreadName(const std::string& name);

	void WaitForAnySignal();

	void Notify();
};

NamedThreadBase* GetCurrentNamedThread();
void SetCurrentNamedThread(NamedThreadBase* value);

class ThreadBase : public NamedThreadBase
{
protected:
	std::atomic<bool> m_destroy;
	std::atomic<bool> m_alive;
	std::thread* m_executor;

	mutable std::mutex m_main_mutex;

	ThreadBase(const std::string& name);
	~ThreadBase();

public:
	void Start();
	void Stop(bool wait = true, bool send_destroy = true);

	bool Join() const;
	bool IsAlive() const;
	bool TestDestroy() const;

	virtual void Task() = 0;
};

class thread
{
	std::string m_name;
	std::thread m_thr;

public:
	thread(const std::string& name, std::function<void()> func);
	thread(const std::string& name);
	thread();


public:
	void start(std::function<void()> func);
	void detach();
	void join();
	bool joinable() const;
};