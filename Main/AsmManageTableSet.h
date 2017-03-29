// AsmManageTableSet.h : CAsmManageTableSet ������

#pragma once

// ���������� 2005��7��5��, 15:46

class CAsmManageTableSet : public CRecordset
{
public:
	CAsmManageTableSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CAsmManageTableSet)

// �ֶ�/��������

// �����ַ������ͣ�������ڣ���ӳ���ݿ��ֶΣ�ANSI �������͵� CStringA �� Unicode
// �������͵� CStringW����ʵ���������͡�
//  ����Ϊ��ֹ ODBC ��������ִ�п���
// ����Ҫ��ת�������ϣ�������Խ���Щ��Ա����Ϊ
// CString ���ͣ�ODBC ��������ִ�����б�Ҫ��ת����
// ��ע�⣺����ʹ�� 3.5 �����߰汾�� ODBC ��������
// ��ͬʱ֧�� Unicode ����Щת������

	long	m_Number;
	CStringA	m_Name;
	CStringA	m_Code;
	long        m_TypeNum;
	CStringA    m_SolidFileName;
	CStringA    m_SolidFilePlace;
	CStringA    m_DrawingFileName;
	CStringA    m_DrawingFilePlace;
	CTime	m_Datatime;
	CStringA	m_Note;
	CStringA	m_Designer;

// ��д
	// �����ɵ��麯����д
	public:
	virtual CString GetDefaultConnect();	// Ĭ�������ַ���

	virtual CString GetDefaultSQL(); 	// ��¼����Ĭ�� SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX ֧��

// ʵ��
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

