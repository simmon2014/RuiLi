// PartMdlRecordSet.h : CPartMdlRecordSet 类的实现
//零件目录数据库表的记录集


// CPartMdlRecordSet 实现

// 代码生成在 2005年5月31日, 9:39

#include "stdafx.h"
#include "PartMdlRecordSet.h"
//extern CString dbLinkInfo;
IMPLEMENT_DYNAMIC(CPartMdlRecordSet, CRecordset)

CPartMdlRecordSet::CPartMdlRecordSet(CDatabase* pdb)
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
	m_Material="";
	m_Note="";
	m_Designer="";

	m_nFields = 12;
	m_nDefaultType = dynaset;
}
//#error Security Issue: The connection string may contain a password
// 此连接字符串中可能包含密码
// 下面的连接字符串中可能包含明文密码和/或
// 其他重要信息。请在查看完
// 此连接字符串并找到所有与安全有关的问题后移除 #error。可能需要
// 将此密码存储为其他格式或使用其他的用户身份验证。
//原始值：DSN=ruili;UID=cbs;PWD=cbs;APP=Microsoft\x00ae Visual Studio .NET;WSID=CHENBO;DATABASE=RuiLiMdlDb;Network=DBMSSOCN"

CString CPartMdlRecordSet::GetDefaultConnect()
{
	return _T(dbLinkInfo);
	
}
CString CPartMdlRecordSet::GetDefaultSQL()
{
	return _T("[dbo].[NPartManageTable]");
}

void CPartMdlRecordSet::DoFieldExchange(CFieldExchange* pFX)
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
	RFX_Text(pFX, _T("[Material]"), m_Material);



}
/////////////////////////////////////////////////////////////////////////////
// CPartMdlRecordSet 诊断

#ifdef _DEBUG
void CPartMdlRecordSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CPartMdlRecordSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG




