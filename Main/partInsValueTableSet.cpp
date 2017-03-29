// partInsValueTableSet.h : CpartInsValueTableSet 类的实现



// CpartInsValueTableSet 实现

// 代码生成在 2005年6月20日, 10:44

#include "stdafx.h"
#include "partInsValueTableSet.h"
//extern CString dbLinkInfo;
IMPLEMENT_DYNAMIC(CpartInsValueTableSet, CRecordset)

CpartInsValueTableSet::CpartInsValueTableSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_PrtNum = 0;
	m_Num = 0;
	m_Value = "";
	m_nFields = 3;
	m_nDefaultType = dynaset;
}
//#error Security Issue: The connection string may contain a password
// 此连接字符串中可能包含密码
// 下面的连接字符串中可能包含明文密码和/或
// 其他重要信息。请在查看完
// 此连接字符串并找到所有与安全有关的问题后移除 #error。可能需要
// 将此密码存储为其他格式或使用其他的用户身份验证。
CString CpartInsValueTableSet::GetDefaultConnect()
{
	return _T(dbLinkInfo);
}

CString CpartInsValueTableSet::GetDefaultSQL()
{
	return _T("[dbo].[NPartInsVariantTable]");
}

void CpartInsValueTableSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[PrtNum]"), m_PrtNum);
	RFX_Long(pFX, _T("[Num]"), m_Num);
	RFX_Text(pFX, _T("[Value]"), m_Value);

}
/////////////////////////////////////////////////////////////////////////////
// CpartInsValueTableSet 诊断

#ifdef _DEBUG
void CpartInsValueTableSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CpartInsValueTableSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


