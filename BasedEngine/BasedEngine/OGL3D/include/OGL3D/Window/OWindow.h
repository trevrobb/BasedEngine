#pragma once
class OWindow
{


public:

	OWindow();
	~OWindow();

	void OnDestroy();
	bool isClosed();

private:
	void* m_handle = nullptr;
};

