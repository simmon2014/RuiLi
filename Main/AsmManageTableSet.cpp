// AsmManageTableSet.h : CAsmManageTableSet 类的实现



// CAsmManageTableSet 实现

// 代码生成在 2005年7月5日, 15:46

#include "stdafx.h"
#include "AsmManageTableSet.h"
//extern CString	dbLinkInfo;
IMPLEMENT_DYNAMIC(CAsmManageTableSet, CRecordset)

CAsmManageTableSet::CAsmManageTableSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_Number=0;
	m_Name="";
	m_Code="";
	m_TypeNum=0;
	m_SolidFileName="";
	m_SolidFilePlace="";
	m_DrawingFileName="";
	m_DrawingFilePlace="";
	m_Datatime;
	m_Note="";
	m_Designer="";
	m_nFields = 11;
	m_nDefaultType = dynaset;
}
//#error Security Issue: The connection string may contain a password
// 此连接字符串中可能包含密码
// 下面的连接字符串中可能包含明文密码和/或
// 其他重要信息。请在查看完
// 此连接字符串并找到所有与安全有关的问题后移除 #error。可能需要
// 将此密码存储为其他格式或使用其他的用户身份验证。
CString CAsmManageTableSet::GetDefaultConnect()
{
	return _T(dbLinkInfo);
}

CString CAsmManageTableSet::GetDefaultSQL()
{
	return _T("[dbo].[NAsmManageTable]");
}

void CAsmManageTableSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[Number]"), m_Number);
	RFX_Text(pFX, _T("[Name]"), m_Name);
	RFX_Long(pFX, _T("[TypeNum]"), m_TypeNum);
	RFX_Date(pFX, _T("[Datatime]"), m_Datatime);
	RFX_Text(pFX, _T("[Code]"), m_Code);
	RFX_Text(pFX, _T("[Note]"), m_Note);
	RFX_Text(pFX, _T("[SolidFileName]"), m_SolidFileName);
	RFX_Text(pFX, _T("[SolidFilePlace]"), m_SolidFilePlace);
	RFX_Text(pFX, _T("[DrawingFileName]"), m_DrawingFileName);
	RFX_Text(pFX, _T("[DrawingFilePlace]"), m_DrawingFilePlace);
	RFX_Text(pFX, _T("[Designer]"), m_Designer);
}
/////////////////////////////////////////////////////////////////////////////
// CAsmManageTableSet 诊断

#ifdef _DEBUG
void CAsmManageTableSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CAsmManageTableSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


