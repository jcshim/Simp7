#include<afxwin.h>
class CMyFrame : public CFrameWnd {
public:
	CMyFrame() {
		Create(NULL, L"ANU Happy!");
	}
};
class CExample : public CWinApp {
	BOOL InitInstance() {
		CMyFrame* Frame = new CMyFrame();
		m_pMainWnd = Frame;

		Frame->ShowWindow(SW_NORMAL);
		Frame->UpdateWindow();

		return TRUE;
	}
};
CExample theApp;