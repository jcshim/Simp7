#include<afxwin.h>
class CMainFrame : public CFrameWnd {
public:
	CMainFrame() {
		Create(NULL, L"Hi !");
	}
	DECLARE_MESSAGE_MAP()
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	afx_msg void OnPaint();
};
class CMyWin : public CWinApp {
	BOOL InitInstance() {
		CMainFrame* m_Frame = new CMainFrame();
		m_pMainWnd = m_Frame;
		m_Frame->ShowWindow(1);
		return TRUE;
	}
};
CMyWin theApp;
BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	cs.cx = 320;
	cs.cy = 240;
	return CFrameWnd::PreCreateWindow(cs);
}


void CMainFrame::OnPaint()
{
	CPaintDC dc(this);
	CBrush b;
	b.CreateSolidBrush(RGB(0, 255, 0));
	dc.SelectObject(&b);
	dc.Rectangle(10, 10, 290, 185);
}
