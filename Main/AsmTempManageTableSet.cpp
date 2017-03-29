// AsmTempManageTableSet.h : CAsmTempManageTableSet 类的实现



// CAsmTempManageTableSet 实现

// 代码生成在 2005年7月25日, 9:58

#include "stdafx.h"
#include "AsmTempManageTableSet.h"
//extern CString	dbLinkInfo;
IMPLEMENT_DYNAMIC(CAsmTempManageTableSet, CRecordset)

CAsmTempManageTableSet::CAsmTempManageTableSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_Number = 0;
	m_FatherNumber = 0;
	m_Name = "";
	m_Type = "";
	m_MdlCode = "";
	m_Datatime;
	m_FileName = "";
	m_FileDirectory = "";
	m_MdlerName = "";
	m_MdlerDepartment = "";
	m_Note = "";
	m_MdlTypeNum = 0;
	m_MdlTypeName = "";
	m_DrawFileName="";
	m_DrawFileDirectory="";
	m_nFields = 15;
	m_nDefaultType = dynaset;
}
//#error Security Issue: The connection string may contain a password
// 此连接字符串中可能包含密码
// 下面的连接字符串中可能包含明文密码和/或
// 其他重要信息。请在查看完
// 此连接字符串并找到所有与安全有关的问题后移除 #error。可能需要
// 将此密码存储为其他格式或使用其他的用户身份验证。
CString CAsmTempManageTableSet::GetDefaultConnect()
{
	return _T(dbLinkInfo);
}

CString CAsmTempManageTableSet::GetDefaultSQL()
{
	return _T("[dbo].[AsmTempManageTable]");
}

void CAsmTempManageTableSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[Number]"), m_Number);
	RFX_Long(pFX, _T("[FatherNumber]"), m_FatherNumber);
	RFX_Text(pFX, _T("[Name]"), m_Name);
	RFX_Text(pFX, _T("[Type]"), m_Type);
	RFX_Text(pFX, _T("[MdlCode]"), m_MdlCode);
	RFX_Date(pFX, _T("[Datatime]"), m_Datatime);
	RFX_Text(pFX, _T("[FileName]"), m_FileName);
	RFX_Text(pFX, _T("[FileDirectory]"), m_FileDirectory);
	RFX_Text(pFX, _T("[DrawFileName]"), m_DrawFileName);
	RFX_Text(pFX, _T("[DrawFileDirectory]"), m_DrawFileDirectory);
	RFX_Text(pFX, _T("[MdlerName]"), m_MdlerName);
	RFX_Text(pFX, _T("[MdlerDepartment]"), m_MdlerDepartment);
	RFX_Text(pFX, _T("[Note]"), m_Note);
	RFX_Long(pFX, _T("[MdlTypeNum]"), m_MdlTypeNum);
	RFX_Text(pFX, _T("[MdlTypeName]"), m_MdlTypeName);

}
/////////////////////////////////////////////////////////////////////////////
// CAsmTempManageTableSet 诊断

#ifdef _DEBUG
void CAsmTempManageTableSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CAsmTempManageTableSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


