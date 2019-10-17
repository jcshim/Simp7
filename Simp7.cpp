#include<afxwin.h>
class CMyFrm : public CFrameWnd {
public:
	CMyFrm() {
		Create(NULL, L"Hi !");
	}
};
class CMy : public CWinApp {
	BOOL InitInstance() {
		CMyFrm* Frm = new CMyFrm();
		m_pMainWnd = Frm;
		Frm->ShowWindow(1);
		return TRUE;
	}
};
CMy theApp;