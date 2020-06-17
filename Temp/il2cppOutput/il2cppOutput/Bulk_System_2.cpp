#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.ArgumentNullException
struct ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4;
// System.Byte
struct Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.ArrayList
struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t862850E7A796A22A359C413FF4367484A404CAD2;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD;
// System.Collections.Hashtable
struct Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82;
// System.Collections.Hashtable/HashKeys
struct HashKeys_tC0AD18956662FA650EC70292126A2FFD6C996C41;
// System.Collections.Hashtable/HashValues
struct HashValues_tE0B367870FD8AFF8500C60AFE3DF980C1BC009C0;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t4A387B27FACEEEE91ED4F28B53A1FA07B6CB1B64;
// System.Collections.IComparer
struct IComparer_t971EE8726C43A8A086B35A11585E2AEFF2F7C2EB;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tFBE0A1A09BAE01058D6DE65DD4FE16C50CB8E781;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t2302C769B9686FD002965B00B8A3704D828517D5;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t32A93DB202121A2609B7AEF1D8B2E5196325C99C;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5801C9F7100E1D849000ED0914E01E4CB2541B71;
// System.DefaultUriParser
struct DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C;
// System.Double
struct Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592;
// System.Globalization.Calendar
struct Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E;
// System.Globalization.CompareInfo
struct CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B;
// System.Globalization.CultureInfo
struct CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4;
// System.Globalization.TextInfo
struct TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A;
// System.IFormatProvider
struct IFormatProvider_t3BAF59CC620257B8C99F911BC233EF7CC5480D67;
// System.Int32
struct Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.InvalidOperationException
struct InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07;
// System.Net.IPAddress
struct IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4;
// System.Net.IPv6Address
struct IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618;
// System.NotSupportedException
struct NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberFilter
struct MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t60655AFF5E0E6F26B4B3C7391AD4D098F6246770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.Text.DecoderFallback
struct DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5;
// System.Text.EncoderFallback
struct EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2;
// System.Text.Encoding
struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t44F4CC962A53B1F37D93579205124A16FD0B1471;
// System.Text.RegularExpressions.Regex
struct Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7;
// System.Text.RegularExpressions.Syntax.CompositeExpression
struct CompositeExpression_t750AF90954FAB323F201EA628A6123FCAC3A46EC;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A;
// System.Text.RegularExpressions.Syntax.Group
struct Group_t9EAAD4F220F411990E6DA025C34483FDC8CF905D;
// System.Text.RegularExpressions.Syntax.PositionAssertion
struct PositionAssertion_t3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E;
// System.Text.RegularExpressions.Syntax.Reference
struct Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6;
// System.Text.RegularExpressions.Syntax.RegularExpression
struct RegularExpression_t7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E;
// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t60545A1C9349248736914B4A126F1919F346D4B7;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532;
// System.UInt16
struct UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B;
// System.UInt16[]
struct UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC;
// System.Uri
struct Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6;
// System.UriFormatException
struct UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4;
// System.UriParser
struct UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A;
// System.UriTypeConverter
struct UriTypeConverter_tA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;

extern RuntimeClass* AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var;
extern RuntimeClass* DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var;
extern RuntimeClass* GenericUriParser_t9AF82F0F6023AE6A6F272759CB591FB82B4CFEE4_il2cpp_TypeInfo_var;
extern RuntimeClass* Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82_il2cpp_TypeInfo_var;
extern RuntimeClass* ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var;
extern RuntimeClass* IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_il2cpp_TypeInfo_var;
extern RuntimeClass* IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4_il2cpp_TypeInfo_var;
extern RuntimeClass* UriKind_t602575BB5018420CCE336A35E0D95B1E18F13069_il2cpp_TypeInfo_var;
extern RuntimeClass* UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var;
extern RuntimeClass* UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
extern String_t* _stringLiteral0765DEEFD5C1509444309BD8D09E7ACA927165F8;
extern String_t* _stringLiteral08534F33C201A45017B502E90A800F1B708EBCB3;
extern String_t* _stringLiteral0EE6C175FF20D4C6D0A780956AB8CF342DBC520B;
extern String_t* _stringLiteral0F028D1B7BE7310FF86008FE572D82F8778E472C;
extern String_t* _stringLiteral11C5773832E60D2F376C6E197271A225FD74EE27;
extern String_t* _stringLiteral12B6FF7C47BB4C2C973EF6E38B06B1AD0DACA96F;
extern String_t* _stringLiteral140386E76465A7584F540C5E525161A28CF7DDB9;
extern String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
extern String_t* _stringLiteral1F4720FAD79F872C31915A9E641A32E766A2357D;
extern String_t* _stringLiteral1F8A1C4B94F61170B94E9FD827F36A60174238C7;
extern String_t* _stringLiteral29E1A7EF9EE675914AA98F9B5BF128C3E91CCB6B;
extern String_t* _stringLiteral2E0BECBCAE1D61359E07C21D53B187CD25DCC4B1;
extern String_t* _stringLiteral334389048B872A533002B34D73F8C29FD09EFC50;
extern String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
extern String_t* _stringLiteral3C6BDCDDC94F64BF77DEB306AAE490A90A6FC300;
extern String_t* _stringLiteral3C7ECD7A063AD7AE0D2B9AB87B11F63CCC96C8F7;
extern String_t* _stringLiteral3F2F1FDE70B574C51BEE96783D4BC620A37A26F8;
extern String_t* _stringLiteral4188736A00FBFB506ACA06281ACF338290455C21;
extern String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
extern String_t* _stringLiteral422C2FC455DA8AB1CCF099E014DADE733913E48A;
extern String_t* _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B;
extern String_t* _stringLiteral491250A42D9C426A51B2E0B368ED13A8852DA792;
extern String_t* _stringLiteral4C44B2AF1B92AB60120242108B3B6F58A3040E35;
extern String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
extern String_t* _stringLiteral532F3DF1AE9CD949217C4F27091386C725DD7AA0;
extern String_t* _stringLiteral54C2C38D88D2E354696E8C57A3D0EF59BC811C43;
extern String_t* _stringLiteral56B058078ECF7CC679B5E9242FD167EB30B117B8;
extern String_t* _stringLiteral61A135089EAC561A2FF7CEDEEFB03975BED000F8;
extern String_t* _stringLiteral666948CC54CBC3FC2C70107A835E27C872F476E6;
extern String_t* _stringLiteral6ABF563E8335FCAA5CA55811FECE36F4B0D6DC07;
extern String_t* _stringLiteral6F5F3B70042BBF8D3F132C688226BF733767673B;
extern String_t* _stringLiteral708F6643054B8FB8CE28A3B8F79FA57543BA520C;
extern String_t* _stringLiteral7616BB87BD05F6439E3672BA1B2BE55D5BEB68B3;
extern String_t* _stringLiteral77B5F8E343A90F6F597751021FB8B7A08FE83083;
extern String_t* _stringLiteral7F3FCF1A5013858257C1B9FA458921FE236B6E21;
extern String_t* _stringLiteral8F77E4EFE6A7A430F2E573E88BC566FF93C94EBD;
extern String_t* _stringLiteral91CC2E927B3BFB1D4477B744F7C70221DDB86EF1;
extern String_t* _stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2;
extern String_t* _stringLiteral9D891E731F75DEAE56884D79E9816736B7488080;
extern String_t* _stringLiteralA344EB862EDAF46575E15EE2886B9096722B09BB;
extern String_t* _stringLiteralB065B52DF30CBB8255A32015597FC9DECB4800CB;
extern String_t* _stringLiteralB0E48174DA6012A8C5CCF7ED06379FAF0EF9F2B0;
extern String_t* _stringLiteralB19571A6BE364AB2FD5A2398D02C830659C23A55;
extern String_t* _stringLiteralB6C585545C2754DC9A082AAE2EBC239398A613C3;
extern String_t* _stringLiteralB9F98D22A9121E9E6347B01F8C6646D72D21239A;
extern String_t* _stringLiteralBB2521CBAC0ADD35F6FE074ADA144F86CC088479;
extern String_t* _stringLiteralC3437DBC7C1255D3A21D444D86EBF2E9234C22BD;
extern String_t* _stringLiteralC70F179C2B536A394271A74735D82658C61B296C;
extern String_t* _stringLiteralCE27CB141098FEB00714E758646BE3E99C185B71;
extern String_t* _stringLiteralCE99D95F1E4BAA4F4417D18FD42F407DA2C676F5;
extern String_t* _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841;
extern String_t* _stringLiteralD7C85A9579B23EF7037B724BBD18AD19370C0014;
extern String_t* _stringLiteralDCB93BD72059500C1226AD16FDD58FFE25C9E0EA;
extern String_t* _stringLiteralDF58248C414F342C81E056B40BEE12D17A08BF61;
extern String_t* _stringLiteralE50080AF9DEC68DFE76AF92C7B4C242A884C94B1;
extern String_t* _stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346;
extern String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
extern String_t* _stringLiteralEBBFFB7D7EA5362A22BFA1BAB0BFDEB1617CD610;
extern String_t* _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC;
extern String_t* _stringLiteralF0DB3FA401AEA04B711D6F1F3630552EAAEE8E59;
extern String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
extern String_t* _stringLiteralF96334EC4A63785C72E2AC5126A9A037CF461D8B;
extern String_t* _stringLiteralFE710CD089CB0BA74F588270FE079A392B5E9810;
extern const RuntimeMethod* Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var;
extern const RuntimeMethod* UriTypeConverter_CanConvertFrom_m59971D9B9F5591A23885B2C8E428016C3EDDC278_RuntimeMethod_var;
extern const RuntimeMethod* UriTypeConverter_ConvertFrom_mA2A800AF43DA5F9DCEF293E55A275076B981FC96_RuntimeMethod_var;
extern const RuntimeMethod* UriTypeConverter_ConvertTo_m2FB9E3673F0F9A86C583AD7278916F134D37D463_RuntimeMethod_var;
extern const RuntimeMethod* Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0_RuntimeMethod_var;
extern const RuntimeMethod* Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC_RuntimeMethod_var;
extern const RuntimeMethod* Uri_HexEscape_mC0E62F8B4655BA6F27AE9CCFE683810D58B9E047_RuntimeMethod_var;
extern const RuntimeMethod* Uri_HexUnescapeMultiByte_m73131CB46572E5B039C1D5995D31843F8F666104_RuntimeMethod_var;
extern const RuntimeMethod* Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD_RuntimeMethod_var;
extern const RuntimeMethod* Uri_Parse_m17C7D7554D04AF47A000D1A9731C2867E2F131D2_RuntimeMethod_var;
extern const RuntimeMethod* Uri__ctor_m94993D2B7E81FCD4A980C36F246A01A4614950A0_RuntimeMethod_var;
extern const RuntimeMethod* Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5_RuntimeMethod_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_0_0_0_var;
extern const uint32_t PositionAssertion_Compile_mD84833FBEA4C6A7B88A44CD103CA57FCADBD2E68_MetadataUsageId;
extern const uint32_t PositionAssertion_GetAnchorInfo_m8DA697B7D679C77E1C8EF1663112555C429A0CC9_MetadataUsageId;
extern const uint32_t Reference_Compile_mC5AB9A6F8E9F564241EE52E57873453D96BC9ED3_MetadataUsageId;
extern const uint32_t RegularExpression_Compile_mDE15545298F26AFE901861AC772E029FAF5FC584_MetadataUsageId;
extern const uint32_t Repetition_Compile_m282B230D6BB467CE23FED329633BE4D1C1F95271_MetadataUsageId;
extern const uint32_t Repetition_GetAnchorInfo_m629BB958910E82AAC6FD94EFA014D5697ED497A2_MetadataUsageId;
extern const uint32_t UriFormatException__ctor_mBF0582CA35A83644A2215E198756B8EB08CB79BA_MetadataUsageId;
extern const uint32_t UriParser_CreateDefaults_m2CABED1E4723143115406B5EA352A313325CCB04_MetadataUsageId;
extern const uint32_t UriParser_GetParser_m7AE4073658832797A3FA98F337B52EEF28AA1696_MetadataUsageId;
extern const uint32_t UriParser_InitializeAndValidate_m41C02DFC43E9BF80593BEB001BE47112BB0F2C95_MetadataUsageId;
extern const uint32_t UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080_MetadataUsageId;
extern const uint32_t UriParser__cctor_m3B66E08E72DE8FF17B1C732941B453F7826F8F86_MetadataUsageId;
extern const uint32_t UriTypeConverter_CanConvertFrom_m59971D9B9F5591A23885B2C8E428016C3EDDC278_MetadataUsageId;
extern const uint32_t UriTypeConverter_CanConvert_m976D97EF4991BCE64D71D471B71FE9DD227ED404_MetadataUsageId;
extern const uint32_t UriTypeConverter_ConvertFrom_mA2A800AF43DA5F9DCEF293E55A275076B981FC96_MetadataUsageId;
extern const uint32_t UriTypeConverter_ConvertTo_m2FB9E3673F0F9A86C583AD7278916F134D37D463_MetadataUsageId;
extern const uint32_t Uri_AppendQueryAndFragment_mC4DA381930B43CB56B1EABF561EBF10915D24BAB_MetadataUsageId;
extern const uint32_t Uri_CheckHostName_mA0ADC3FD6C87A7BF545E975A9F77255453433EC9_MetadataUsageId;
extern const uint32_t Uri_CheckSchemeName_m0236F13E252237A7834FBF250101AE8EE62FBB5E_MetadataUsageId;
extern const uint32_t Uri_CompactEscaped_m33BD25DDB850060AA07417820FB81ED68180F271_MetadataUsageId;
extern const uint32_t Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0_MetadataUsageId;
extern const uint32_t Uri_Equals_mD0D5690B4C9A783C17A92FC9DC1F55EBEBE47379_MetadataUsageId;
extern const uint32_t Uri_EscapeString_m5ED2E2609B29C064B8CC6E04D33E29DD849D65B2_MetadataUsageId;
extern const uint32_t Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994_MetadataUsageId;
extern const uint32_t Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC_MetadataUsageId;
extern const uint32_t Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024_MetadataUsageId;
extern const uint32_t Uri_GetHashCode_mBEC005B5F7AC842D6791AF4C15B26C6B460E9BAD_MetadataUsageId;
extern const uint32_t Uri_GetLeftPart_m553664DEDE7E131904A6A9EB9DD3C005BE41661C_MetadataUsageId;
extern const uint32_t Uri_GetOpaqueWiseSchemeDelimiter_mA5F7CDD38ECF7B333BFC220727E0B628595B7FED_MetadataUsageId;
extern const uint32_t Uri_GetSchemeDelimiter_mFAE7BAA0DBD699319611B29B1BE4D5EFF452D527_MetadataUsageId;
extern const uint32_t Uri_HexEscape_mC0E62F8B4655BA6F27AE9CCFE683810D58B9E047_MetadataUsageId;
extern const uint32_t Uri_HexUnescapeMultiByte_m73131CB46572E5B039C1D5995D31843F8F666104_MetadataUsageId;
extern const uint32_t Uri_InternalEquals_mAC1DC6C549899943D34AC8DD48A3B098D3A650DA_MetadataUsageId;
extern const uint32_t Uri_IsDomainAddress_m488D5642C2C83385D8536AEFBE1431010B59E463_MetadataUsageId;
extern const uint32_t Uri_IsHexEncoding_m8490687F97773ED8AA8134E10B82741673EDF3E6_MetadataUsageId;
extern const uint32_t Uri_IsIPv4Address_mD7AC4D29C10CFD253D49C84A5B379964B1776A2A_MetadataUsageId;
extern const uint32_t Uri_IsPredefinedScheme_m44BBB3DFC5E743BC6645A5AF0ACEC94FD408D529_MetadataUsageId;
extern const uint32_t Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD_MetadataUsageId;
extern const uint32_t Uri_ParseAsUnixAbsoluteFilePath_mAF808B2FB6ADE510143CB4ECFD81BCC654A866E5_MetadataUsageId;
extern const uint32_t Uri_ParseAsWindowsAbsoluteFilePath_m083C87912CF5C124EBBA97F12801251BDD993548_MetadataUsageId;
extern const uint32_t Uri_ParseAsWindowsUNC_mFC057DEC89ECCCD98D77E80742AE38BD1068C695_MetadataUsageId;
extern const uint32_t Uri_ParseNoExceptions_m73BE7C445B69BD04762298CE1DDED154034D33A5_MetadataUsageId;
extern const uint32_t Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9_MetadataUsageId;
extern const uint32_t Uri_Parse_m17C7D7554D04AF47A000D1A9731C2867E2F131D2_MetadataUsageId;
extern const uint32_t Uri_Reduce_m47AB24CD60A069202994F361E3F2ACF218D358A1_MetadataUsageId;
extern const uint32_t Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m45D2151C8088914EF10A64A1A0DA3B89FBD67794_MetadataUsageId;
extern const uint32_t Uri_ToString_m10EE6A7943637E08F409E245D5680FE6D65CA8F4_MetadataUsageId;
extern const uint32_t Uri_Unescape_mB85752844CB7ABFA81F17C85695AA10DE7E209CC_MetadataUsageId;
extern const uint32_t Uri_Unescape_mD61168C7FD8597DE9B7F2FF7F8C201E6B8B4CDB2_MetadataUsageId;
extern const uint32_t Uri__cctor_m04530D19C293EABDAB2B9F0F1DEFF4F9D7E9681E_MetadataUsageId;
extern const uint32_t Uri__ctor_m3AABEF0738DC076FE671066AC082050D8E70BD0E_MetadataUsageId;
extern const uint32_t Uri__ctor_m752167B92927984AED6685EDDB6813E333217B74_MetadataUsageId;
extern const uint32_t Uri__ctor_m94993D2B7E81FCD4A980C36F246A01A4614950A0_MetadataUsageId;
extern const uint32_t Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5_MetadataUsageId;
extern const uint32_t Uri__ctor_mED09ABAB55190847530996718779205FFDE3BAD1_MetadataUsageId;
extern const uint32_t Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE_MetadataUsageId;
extern const uint32_t Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6_MetadataUsageId;
extern const uint32_t Uri_get_Authority_mC5B27A1EB5241CB23789862E185A2809BD40E9BD_MetadataUsageId;
extern const uint32_t Uri_get_IsFile_m11FE138565770145768236C351BE0038291E2660_MetadataUsageId;
extern const uint32_t Uri_get_IsLoopback_m6FD6098F90BF88C72D722ED78E08419CED0BCFC8_MetadataUsageId;
extern const uint32_t Uri_get_Parser_mC06CE2AA97C8199255386B10743B78CDC31D53CC_MetadataUsageId;
extern const uint32_t Uri_get_PathAndQuery_m30CFB76360DC78FCF7B2B5792B8F3EB4B0565B21_MetadataUsageId;
extern const uint32_t Uri_op_Inequality_m130BFB261037E354E5E08022C5BA8C8A777B388B_MetadataUsageId;

struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
struct UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#define ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____items_2)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#ifndef COLLECTIONBASE_TC3F24120B23471E7FDEE72107D1D541E6456744F_H
#define COLLECTIONBASE_TC3F24120B23471E7FDEE72107D1D541E6456744F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F, ___list_0)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_list_0() const { return ___list_0; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_TC3F24120B23471E7FDEE72107D1D541E6456744F_H
#ifndef DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
#define DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___keySlots_6)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___valueSlots_7)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2_Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__amU24cacheB
	Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
#ifndef HASHTABLE_TA746260C9064A8C1FC071FF85C11C8EBAEB51B82_H
#define HASHTABLE_TA746260C9064A8C1FC071FF85C11C8EBAEB51B82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable_Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t4A387B27FACEEEE91ED4F28B53A1FA07B6CB1B64* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable_HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_tC0AD18956662FA650EC70292126A2FFD6C996C41 * ___hashKeys_7;
	// System.Collections.Hashtable_HashValues System.Collections.Hashtable::hashValues
	HashValues_tE0B367870FD8AFF8500C60AFE3DF980C1BC009C0 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___table_4)); }
	inline SlotU5BU5D_t4A387B27FACEEEE91ED4F28B53A1FA07B6CB1B64* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t4A387B27FACEEEE91ED4F28B53A1FA07B6CB1B64** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t4A387B27FACEEEE91ED4F28B53A1FA07B6CB1B64* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___hashes_5)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___hashKeys_7)); }
	inline HashKeys_tC0AD18956662FA650EC70292126A2FFD6C996C41 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_tC0AD18956662FA650EC70292126A2FFD6C996C41 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_tC0AD18956662FA650EC70292126A2FFD6C996C41 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___hashValues_8)); }
	inline HashValues_tE0B367870FD8AFF8500C60AFE3DF980C1BC009C0 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_tE0B367870FD8AFF8500C60AFE3DF980C1BC009C0 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_tE0B367870FD8AFF8500C60AFE3DF980C1BC009C0 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___serializationInfo_11)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_TA746260C9064A8C1FC071FF85C11C8EBAEB51B82_H
#ifndef TYPECONVERTER_T5801C9F7100E1D849000ED0914E01E4CB2541B71_H
#define TYPECONVERTER_T5801C9F7100E1D849000ED0914E01E4CB2541B71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t5801C9F7100E1D849000ED0914E01E4CB2541B71  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T5801C9F7100E1D849000ED0914E01E4CB2541B71_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#define CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___numInfo_14)); }
	inline NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___textInfo_16)); }
	inline TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___compareInfo_26)); }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___parent_culture_30)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___calendar_32)); }
	inline Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switchU24map19
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switchU24map1A
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#ifndef PATH_T27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_H
#define PATH_T27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Path
struct  Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55  : public RuntimeObject
{
public:

public:
};

struct Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidPathChars_0), value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___DirectorySeparatorStr_4), value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___PathSeparatorChars_6), value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATH_T27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_H
#ifndef IPV6ADDRESS_T87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_H
#define IPV6ADDRESS_T87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPv6Address
struct  IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618  : public RuntimeObject
{
public:
	// System.UInt16[] System.Net.IPv6Address::address
	UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC* ___address_0;
	// System.Int32 System.Net.IPv6Address::prefixLength
	int32_t ___prefixLength_1;
	// System.Int64 System.Net.IPv6Address::scopeId
	int64_t ___scopeId_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618, ___address_0)); }
	inline UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC* get_address_0() const { return ___address_0; }
	inline UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_prefixLength_1() { return static_cast<int32_t>(offsetof(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618, ___prefixLength_1)); }
	inline int32_t get_prefixLength_1() const { return ___prefixLength_1; }
	inline int32_t* get_address_of_prefixLength_1() { return &___prefixLength_1; }
	inline void set_prefixLength_1(int32_t value)
	{
		___prefixLength_1 = value;
	}

	inline static int32_t get_offset_of_scopeId_2() { return static_cast<int32_t>(offsetof(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618, ___scopeId_2)); }
	inline int64_t get_scopeId_2() const { return ___scopeId_2; }
	inline int64_t* get_address_of_scopeId_2() { return &___scopeId_2; }
	inline void set_scopeId_2(int64_t value)
	{
		___scopeId_2 = value;
	}
};

struct IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_StaticFields
{
public:
	// System.Net.IPv6Address System.Net.IPv6Address::Loopback
	IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * ___Loopback_3;
	// System.Net.IPv6Address System.Net.IPv6Address::Unspecified
	IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * ___Unspecified_4;

public:
	inline static int32_t get_offset_of_Loopback_3() { return static_cast<int32_t>(offsetof(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_StaticFields, ___Loopback_3)); }
	inline IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * get_Loopback_3() const { return ___Loopback_3; }
	inline IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 ** get_address_of_Loopback_3() { return &___Loopback_3; }
	inline void set_Loopback_3(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * value)
	{
		___Loopback_3 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_3), value);
	}

	inline static int32_t get_offset_of_Unspecified_4() { return static_cast<int32_t>(offsetof(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_StaticFields, ___Unspecified_4)); }
	inline IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * get_Unspecified_4() const { return ___Unspecified_4; }
	inline IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 ** get_address_of_Unspecified_4() { return &___Unspecified_4; }
	inline void set_Unspecified_4(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * value)
	{
		___Unspecified_4 = value;
		Il2CppCodeGenWriteBarrier((&___Unspecified_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ADDRESS_T87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#define SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___serialized_0)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___values_1)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_values_1() const { return ___values_1; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#define ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___decoder_fallback_3)); }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoder_fallback_4)); }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifndef LINKREF_T4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB_H
#define LINKREF_T4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkRef
struct  LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKREF_T4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB_H
#ifndef EXPRESSION_T6A43E18B89A25A32D44C3FD396F6139A8AA73F94_H
#define EXPRESSION_T6A43E18B89A25A32D44C3FD396F6139A8AA73F94_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Expression
struct  Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T6A43E18B89A25A32D44C3FD396F6139A8AA73F94_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#define URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_15;
	// System.UriParser System.Uri::parser
	UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * ___parser_29;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_15() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedHashCode_15)); }
	inline int32_t get_cachedHashCode_15() const { return ___cachedHashCode_15; }
	inline int32_t* get_address_of_cachedHashCode_15() { return &___cachedHashCode_15; }
	inline void set_cachedHashCode_15(int32_t value)
	{
		___cachedHashCode_15 = value;
	}

	inline static int32_t get_offset_of_parser_29() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___parser_29)); }
	inline UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * get_parser_29() const { return ___parser_29; }
	inline UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A ** get_address_of_parser_29() { return &___parser_29; }
	inline void set_parser_29(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * value)
	{
		___parser_29 = value;
		Il2CppCodeGenWriteBarrier((&___parser_29), value);
	}
};

struct Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_26;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_27;
	// System.Uri_UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* ___schemes_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map12
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map12_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map14
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map14_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map15
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map15_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switchU24map16
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map16_33;

public:
	inline static int32_t get_offset_of_hexUpperChars_16() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___hexUpperChars_16)); }
	inline String_t* get_hexUpperChars_16() const { return ___hexUpperChars_16; }
	inline String_t** get_address_of_hexUpperChars_16() { return &___hexUpperChars_16; }
	inline void set_hexUpperChars_16(String_t* value)
	{
		___hexUpperChars_16 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_16), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_17() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___SchemeDelimiter_17)); }
	inline String_t* get_SchemeDelimiter_17() const { return ___SchemeDelimiter_17; }
	inline String_t** get_address_of_SchemeDelimiter_17() { return &___SchemeDelimiter_17; }
	inline void set_SchemeDelimiter_17(String_t* value)
	{
		___SchemeDelimiter_17 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_17), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_18() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeFile_18)); }
	inline String_t* get_UriSchemeFile_18() const { return ___UriSchemeFile_18; }
	inline String_t** get_address_of_UriSchemeFile_18() { return &___UriSchemeFile_18; }
	inline void set_UriSchemeFile_18(String_t* value)
	{
		___UriSchemeFile_18 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_19() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeFtp_19)); }
	inline String_t* get_UriSchemeFtp_19() const { return ___UriSchemeFtp_19; }
	inline String_t** get_address_of_UriSchemeFtp_19() { return &___UriSchemeFtp_19; }
	inline void set_UriSchemeFtp_19(String_t* value)
	{
		___UriSchemeFtp_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_20() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeGopher_20)); }
	inline String_t* get_UriSchemeGopher_20() const { return ___UriSchemeGopher_20; }
	inline String_t** get_address_of_UriSchemeGopher_20() { return &___UriSchemeGopher_20; }
	inline void set_UriSchemeGopher_20(String_t* value)
	{
		___UriSchemeGopher_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_21() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeHttp_21)); }
	inline String_t* get_UriSchemeHttp_21() const { return ___UriSchemeHttp_21; }
	inline String_t** get_address_of_UriSchemeHttp_21() { return &___UriSchemeHttp_21; }
	inline void set_UriSchemeHttp_21(String_t* value)
	{
		___UriSchemeHttp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_22() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeHttps_22)); }
	inline String_t* get_UriSchemeHttps_22() const { return ___UriSchemeHttps_22; }
	inline String_t** get_address_of_UriSchemeHttps_22() { return &___UriSchemeHttps_22; }
	inline void set_UriSchemeHttps_22(String_t* value)
	{
		___UriSchemeHttps_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_23() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeMailto_23)); }
	inline String_t* get_UriSchemeMailto_23() const { return ___UriSchemeMailto_23; }
	inline String_t** get_address_of_UriSchemeMailto_23() { return &___UriSchemeMailto_23; }
	inline void set_UriSchemeMailto_23(String_t* value)
	{
		___UriSchemeMailto_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_24() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNews_24)); }
	inline String_t* get_UriSchemeNews_24() const { return ___UriSchemeNews_24; }
	inline String_t** get_address_of_UriSchemeNews_24() { return &___UriSchemeNews_24; }
	inline void set_UriSchemeNews_24(String_t* value)
	{
		___UriSchemeNews_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_25() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNntp_25)); }
	inline String_t* get_UriSchemeNntp_25() const { return ___UriSchemeNntp_25; }
	inline String_t** get_address_of_UriSchemeNntp_25() { return &___UriSchemeNntp_25; }
	inline void set_UriSchemeNntp_25(String_t* value)
	{
		___UriSchemeNntp_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_26() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNetPipe_26)); }
	inline String_t* get_UriSchemeNetPipe_26() const { return ___UriSchemeNetPipe_26; }
	inline String_t** get_address_of_UriSchemeNetPipe_26() { return &___UriSchemeNetPipe_26; }
	inline void set_UriSchemeNetPipe_26(String_t* value)
	{
		___UriSchemeNetPipe_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_27() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNetTcp_27)); }
	inline String_t* get_UriSchemeNetTcp_27() const { return ___UriSchemeNetTcp_27; }
	inline String_t** get_address_of_UriSchemeNetTcp_27() { return &___UriSchemeNetTcp_27; }
	inline void set_UriSchemeNetTcp_27(String_t* value)
	{
		___UriSchemeNetTcp_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_27), value);
	}

	inline static int32_t get_offset_of_schemes_28() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___schemes_28)); }
	inline UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* get_schemes_28() const { return ___schemes_28; }
	inline UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6** get_address_of_schemes_28() { return &___schemes_28; }
	inline void set_schemes_28(UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* value)
	{
		___schemes_28 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_30() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map12_30)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map12_30() const { return ___U3CU3Ef__switchU24map12_30; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map12_30() { return &___U3CU3Ef__switchU24map12_30; }
	inline void set_U3CU3Ef__switchU24map12_30(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map12_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_31() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map14_31)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map14_31() const { return ___U3CU3Ef__switchU24map14_31; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map14_31() { return &___U3CU3Ef__switchU24map14_31; }
	inline void set_U3CU3Ef__switchU24map14_31(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map14_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_32() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map15_32)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map15_32() const { return ___U3CU3Ef__switchU24map15_32; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map15_32() { return &___U3CU3Ef__switchU24map15_32; }
	inline void set_U3CU3Ef__switchU24map15_32(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map15_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_33() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map16_33)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map16_33() const { return ___U3CU3Ef__switchU24map16_33; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map16_33() { return &___U3CU3Ef__switchU24map16_33; }
	inline void set_U3CU3Ef__switchU24map16_33(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map16_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#ifndef URIPARSER_TD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_H
#define URIPARSER_TD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A  : public RuntimeObject
{
public:
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;

public:
	inline static int32_t get_offset_of_scheme_name_2() { return static_cast<int32_t>(offsetof(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A, ___scheme_name_2)); }
	inline String_t* get_scheme_name_2() const { return ___scheme_name_2; }
	inline String_t** get_address_of_scheme_name_2() { return &___scheme_name_2; }
	inline void set_scheme_name_2(String_t* value)
	{
		___scheme_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_name_2), value);
	}

	inline static int32_t get_offset_of_default_port_3() { return static_cast<int32_t>(offsetof(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A, ___default_port_3)); }
	inline int32_t get_default_port_3() const { return ___default_port_3; }
	inline int32_t* get_address_of_default_port_3() { return &___default_port_3; }
	inline void set_default_port_3(int32_t value)
	{
		___default_port_3 = value;
	}
};

struct UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields
{
public:
	// System.Object System.UriParser::lock_object
	RuntimeObject * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * ___auth_regex_5;

public:
	inline static int32_t get_offset_of_lock_object_0() { return static_cast<int32_t>(offsetof(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields, ___lock_object_0)); }
	inline RuntimeObject * get_lock_object_0() const { return ___lock_object_0; }
	inline RuntimeObject ** get_address_of_lock_object_0() { return &___lock_object_0; }
	inline void set_lock_object_0(RuntimeObject * value)
	{
		___lock_object_0 = value;
		Il2CppCodeGenWriteBarrier((&___lock_object_0), value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields, ___table_1)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_table_1() const { return ___table_1; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}

	inline static int32_t get_offset_of_uri_regex_4() { return static_cast<int32_t>(offsetof(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields, ___uri_regex_4)); }
	inline Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * get_uri_regex_4() const { return ___uri_regex_4; }
	inline Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B ** get_address_of_uri_regex_4() { return &___uri_regex_4; }
	inline void set_uri_regex_4(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * value)
	{
		___uri_regex_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_regex_4), value);
	}

	inline static int32_t get_offset_of_auth_regex_5() { return static_cast<int32_t>(offsetof(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields, ___auth_regex_5)); }
	inline Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * get_auth_regex_5() const { return ___auth_regex_5; }
	inline Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B ** get_address_of_auth_regex_5() { return &___auth_regex_5; }
	inline void set_auth_regex_5(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * value)
	{
		___auth_regex_5 = value;
		Il2CppCodeGenWriteBarrier((&___auth_regex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_TD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#define BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifndef CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#define CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifndef DEFAULTURIPARSER_T4FE27B8086A052E20AB5B8A35901A53088B4C38C_H
#define DEFAULTURIPARSER_T4FE27B8086A052E20AB5B8A35901A53088B4C38C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultUriParser
struct  DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C  : public UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTURIPARSER_T4FE27B8086A052E20AB5B8A35901A53088B4C38C_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef GENERICURIPARSER_T9AF82F0F6023AE6A6F272759CB591FB82B4CFEE4_H
#define GENERICURIPARSER_T9AF82F0F6023AE6A6F272759CB591FB82B4CFEE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GenericUriParser
struct  GenericUriParser_t9AF82F0F6023AE6A6F272759CB591FB82B4CFEE4  : public UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICURIPARSER_T9AF82F0F6023AE6A6F272759CB591FB82B4CFEE4_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#define SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifndef COMPOSITEEXPRESSION_T750AF90954FAB323F201EA628A6123FCAC3A46EC_H
#define COMPOSITEEXPRESSION_T750AF90954FAB323F201EA628A6123FCAC3A46EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t750AF90954FAB323F201EA628A6123FCAC3A46EC  : public Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t750AF90954FAB323F201EA628A6123FCAC3A46EC, ___expressions_0)); }
	inline ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITEEXPRESSION_T750AF90954FAB323F201EA628A6123FCAC3A46EC_H
#ifndef EXPRESSIONCOLLECTION_TCA7FC699936CBAE10FB637D8927714CD3AEA282A_H
#define EXPRESSIONCOLLECTION_TCA7FC699936CBAE10FB637D8927714CD3AEA282A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct  ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A  : public CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONCOLLECTION_TCA7FC699936CBAE10FB637D8927714CD3AEA282A_H
#ifndef REFERENCE_T683D20A9EF06251885F0ACC287F31F5B670F47A6_H
#define REFERENCE_T683D20A9EF06251885F0ACC287F31F5B670F47A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6  : public Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6, ___group_0)); }
	inline CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * get_group_0() const { return ___group_0; }
	inline CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCE_T683D20A9EF06251885F0ACC287F31F5B670F47A6_H
#ifndef UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#define UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifndef URISCHEME_TAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_H
#define URISCHEME_TAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri_UriScheme
struct  UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE 
{
public:
	// System.String System.Uri_UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri_UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri_UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_TAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_H
#ifndef URITYPECONVERTER_TA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64_H
#define URITYPECONVERTER_TA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriTypeConverter
struct  UriTypeConverter_tA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64  : public TypeConverter_t5801C9F7100E1D849000ED0914E01E4CB2541B71
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URITYPECONVERTER_TA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#define ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifndef FORMATEXCEPTION_T6148832BF22FDB9F1FB5BE067694E8326F42D592_H
#define FORMATEXCEPTION_T6148832BF22FDB9F1FB5BE067694E8326F42D592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T6148832BF22FDB9F1FB5BE067694E8326F42D592_H
#ifndef NUMBERSTYLES_TFAC1E79E7CB54B1C83E44967D68356FC558A6454_H
#define NUMBERSTYLES_TFAC1E79E7CB54B1C83E44967D68356FC558A6454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_tFAC1E79E7CB54B1C83E44967D68356FC558A6454 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_tFAC1E79E7CB54B1C83E44967D68356FC558A6454, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_TFAC1E79E7CB54B1C83E44967D68356FC558A6454_H
#ifndef INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#define INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#ifndef ADDRESSFAMILY_T56E41B784F73C1D53BE91A309AB9E5A35F947876_H
#define ADDRESSFAMILY_T56E41B784F73C1D53BE91A309AB9E5A35F947876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t56E41B784F73C1D53BE91A309AB9E5A35F947876 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t56E41B784F73C1D53BE91A309AB9E5A35F947876, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_T56E41B784F73C1D53BE91A309AB9E5A35F947876_H
#ifndef NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#define NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifndef BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#define BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifndef STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#define STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF8A83A38064A2CFF4FDEC6CD633A5509C596E397 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF8A83A38064A2CFF4FDEC6CD633A5509C596E397, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#ifndef RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#define RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifndef POSITION_T19E037E87BCB1E737603EA15C59A22D1C2E34C1C_H
#define POSITION_T19E037E87BCB1E737603EA15C59A22D1C2E34C1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Position
struct  Position_t19E037E87BCB1E737603EA15C59A22D1C2E34C1C 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Position::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Position_t19E037E87BCB1E737603EA15C59A22D1C2E34C1C, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T19E037E87BCB1E737603EA15C59A22D1C2E34C1C_H
#ifndef REGEXOPTIONS_T6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624_H
#define REGEXOPTIONS_T6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624_H
#ifndef GROUP_T9EAAD4F220F411990E6DA025C34483FDC8CF905D_H
#define GROUP_T9EAAD4F220F411990E6DA025C34483FDC8CF905D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Group
struct  Group_t9EAAD4F220F411990E6DA025C34483FDC8CF905D  : public CompositeExpression_t750AF90954FAB323F201EA628A6123FCAC3A46EC
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T9EAAD4F220F411990E6DA025C34483FDC8CF905D_H
#ifndef REPETITION_T60545A1C9349248736914B4A126F1919F346D4B7_H
#define REPETITION_T60545A1C9349248736914B4A126F1919F346D4B7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Repetition
struct  Repetition_t60545A1C9349248736914B4A126F1919F346D4B7  : public CompositeExpression_t750AF90954FAB323F201EA628A6123FCAC3A46EC
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.Repetition::lazy
	bool ___lazy_3;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(Repetition_t60545A1C9349248736914B4A126F1919F346D4B7, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(Repetition_t60545A1C9349248736914B4A126F1919F346D4B7, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(Repetition_t60545A1C9349248736914B4A126F1919F346D4B7, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPETITION_T60545A1C9349248736914B4A126F1919F346D4B7_H
#ifndef URIHOSTNAMETYPE_TD5C10F880C524C8028C474B23B619228AE144479_H
#define URIHOSTNAMETYPE_TD5C10F880C524C8028C474B23B619228AE144479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHostNameType
struct  UriHostNameType_tD5C10F880C524C8028C474B23B619228AE144479 
{
public:
	// System.Int32 System.UriHostNameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriHostNameType_tD5C10F880C524C8028C474B23B619228AE144479, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIHOSTNAMETYPE_TD5C10F880C524C8028C474B23B619228AE144479_H
#ifndef URIKIND_T602575BB5018420CCE336A35E0D95B1E18F13069_H
#define URIKIND_T602575BB5018420CCE336A35E0D95B1E18F13069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t602575BB5018420CCE336A35E0D95B1E18F13069 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t602575BB5018420CCE336A35E0D95B1E18F13069, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIKIND_T602575BB5018420CCE336A35E0D95B1E18F13069_H
#ifndef URIPARTIAL_TDD0004CFD64BC37CB615A5A3428BB2CC05CB5912_H
#define URIPARTIAL_TDD0004CFD64BC37CB615A5A3428BB2CC05CB5912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriPartial
struct  UriPartial_tDD0004CFD64BC37CB615A5A3428BB2CC05CB5912 
{
public:
	// System.Int32 System.UriPartial::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriPartial_tDD0004CFD64BC37CB615A5A3428BB2CC05CB5912, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARTIAL_TDD0004CFD64BC37CB615A5A3428BB2CC05CB5912_H
#ifndef ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#define ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4  : public ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4  : public ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#ifndef IPADDRESS_T620453DAA3165B1BFB11794B30FF82CE4D5026D4_H
#define IPADDRESS_T620453DAA3165B1BFB11794B30FF82CE4D5026D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_11;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4, ___m_Address_0)); }
	inline int64_t get_m_Address_0() const { return ___m_Address_0; }
	inline int64_t* get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(int64_t value)
	{
		___m_Address_0 = value;
	}

	inline static int32_t get_offset_of_m_Family_1() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4, ___m_Family_1)); }
	inline int32_t get_m_Family_1() const { return ___m_Family_1; }
	inline int32_t* get_address_of_m_Family_1() { return &___m_Family_1; }
	inline void set_m_Family_1(int32_t value)
	{
		___m_Family_1 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_2() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4, ___m_Numbers_2)); }
	inline UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC* get_m_Numbers_2() const { return ___m_Numbers_2; }
	inline UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC** get_address_of_m_Numbers_2() { return &___m_Numbers_2; }
	inline void set_m_Numbers_2(UInt16U5BU5D_tFACC39F5AB94FCCEAD5ED082922B0263437F9ABC* value)
	{
		___m_Numbers_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_2), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_3() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4, ___m_ScopeId_3)); }
	inline int64_t get_m_ScopeId_3() const { return ___m_ScopeId_3; }
	inline int64_t* get_address_of_m_ScopeId_3() { return &___m_ScopeId_3; }
	inline void set_m_ScopeId_3(int64_t value)
	{
		___m_ScopeId_3 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_11() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4, ___m_HashCode_11)); }
	inline int32_t get_m_HashCode_11() const { return ___m_HashCode_11; }
	inline int32_t* get_address_of_m_HashCode_11() { return &___m_HashCode_11; }
	inline void set_m_HashCode_11(int32_t value)
	{
		___m_HashCode_11 = value;
	}
};

struct IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * ___IPv6None_10;

public:
	inline static int32_t get_offset_of_Any_4() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields, ___Any_4)); }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * get_Any_4() const { return ___Any_4; }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 ** get_address_of_Any_4() { return &___Any_4; }
	inline void set_Any_4(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * value)
	{
		___Any_4 = value;
		Il2CppCodeGenWriteBarrier((&___Any_4), value);
	}

	inline static int32_t get_offset_of_Broadcast_5() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields, ___Broadcast_5)); }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * get_Broadcast_5() const { return ___Broadcast_5; }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 ** get_address_of_Broadcast_5() { return &___Broadcast_5; }
	inline void set_Broadcast_5(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * value)
	{
		___Broadcast_5 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_5), value);
	}

	inline static int32_t get_offset_of_Loopback_6() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields, ___Loopback_6)); }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * get_Loopback_6() const { return ___Loopback_6; }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 ** get_address_of_Loopback_6() { return &___Loopback_6; }
	inline void set_Loopback_6(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * value)
	{
		___Loopback_6 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_6), value);
	}

	inline static int32_t get_offset_of_None_7() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields, ___None_7)); }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * get_None_7() const { return ___None_7; }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 ** get_address_of_None_7() { return &___None_7; }
	inline void set_None_7(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * value)
	{
		___None_7 = value;
		Il2CppCodeGenWriteBarrier((&___None_7), value);
	}

	inline static int32_t get_offset_of_IPv6Any_8() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields, ___IPv6Any_8)); }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * get_IPv6Any_8() const { return ___IPv6Any_8; }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 ** get_address_of_IPv6Any_8() { return &___IPv6Any_8; }
	inline void set_IPv6Any_8(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * value)
	{
		___IPv6Any_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_8), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_9() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields, ___IPv6Loopback_9)); }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * get_IPv6Loopback_9() const { return ___IPv6Loopback_9; }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 ** get_address_of_IPv6Loopback_9() { return &___IPv6Loopback_9; }
	inline void set_IPv6Loopback_9(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * value)
	{
		___IPv6Loopback_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_9), value);
	}

	inline static int32_t get_offset_of_IPv6None_10() { return static_cast<int32_t>(offsetof(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields, ___IPv6None_10)); }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * get_IPv6None_10() const { return ___IPv6None_10; }
	inline IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 ** get_address_of_IPv6None_10() { return &___IPv6None_10; }
	inline void set_IPv6None_10(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * value)
	{
		___IPv6None_10 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T620453DAA3165B1BFB11794B30FF82CE4D5026D4_H
#ifndef STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#define STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#ifndef REGEX_T829CB33C547AB824BFEAFF320BB8F59B3A76620B_H
#define REGEX_T829CB33C547AB824BFEAFF320BB8F59B3A76620B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_group_names_5() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___group_names_5)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_group_names_5() const { return ___group_names_5; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_group_names_5() { return &___group_names_5; }
	inline void set_group_names_5(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___group_names_5 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_5), value);
	}

	inline static int32_t get_offset_of_group_numbers_6() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___group_numbers_6)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_group_numbers_6() const { return ___group_numbers_6; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_group_numbers_6() { return &___group_numbers_6; }
	inline void set_group_numbers_6(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___group_numbers_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_6), value);
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___pattern_7)); }
	inline String_t* get_pattern_7() const { return ___pattern_7; }
	inline String_t** get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(String_t* value)
	{
		___pattern_7 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_7), value);
	}

	inline static int32_t get_offset_of_roptions_8() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___roptions_8)); }
	inline int32_t get_roptions_8() const { return ___roptions_8; }
	inline int32_t* get_address_of_roptions_8() { return &___roptions_8; }
	inline void set_roptions_8(int32_t value)
	{
		___roptions_8 = value;
	}
};

struct Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_StaticFields, ___cache_0)); }
	inline FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T829CB33C547AB824BFEAFF320BB8F59B3A76620B_H
#ifndef ANCHORINFO_T82C2F6B32A20B889C741097F41349F0B8FE17213_H
#define ANCHORINFO_T82C2F6B32A20B889C741097F41349F0B8FE17213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct  AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.AnchorInfo::expr
	Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * ___expr_0;
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::pos
	uint16_t ___pos_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::offset
	int32_t ___offset_2;
	// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::str
	String_t* ___str_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::width
	int32_t ___width_4;
	// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::ignore
	bool ___ignore_5;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213, ___expr_0)); }
	inline Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * get_expr_0() const { return ___expr_0; }
	inline Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213, ___pos_1)); }
	inline uint16_t get_pos_1() const { return ___pos_1; }
	inline uint16_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(uint16_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((&___str_3), value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213, ___ignore_5)); }
	inline bool get_ignore_5() const { return ___ignore_5; }
	inline bool* get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(bool value)
	{
		___ignore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORINFO_T82C2F6B32A20B889C741097F41349F0B8FE17213_H
#ifndef CAPTURINGGROUP_TAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7_H
#define CAPTURINGGROUP_TAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct  CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7  : public Group_t9EAAD4F220F411990E6DA025C34483FDC8CF905D
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::gid
	int32_t ___gid_1;
	// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURINGGROUP_TAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7_H
#ifndef POSITIONASSERTION_T3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E_H
#define POSITIONASSERTION_T3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct  PositionAssertion_t3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E  : public Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94
{
public:
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.PositionAssertion::pos
	uint16_t ___pos_0;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(PositionAssertion_t3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E, ___pos_0)); }
	inline uint16_t get_pos_0() const { return ___pos_0; }
	inline uint16_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(uint16_t value)
	{
		___pos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASSERTION_T3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E_H
#ifndef REGULAREXPRESSION_T7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E_H
#define REGULAREXPRESSION_T7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.RegularExpression
struct  RegularExpression_t7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E  : public Group_t9EAAD4F220F411990E6DA025C34483FDC8CF905D
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.RegularExpression::group_count
	int32_t ___group_count_1;

public:
	inline static int32_t get_offset_of_group_count_1() { return static_cast<int32_t>(offsetof(RegularExpression_t7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E, ___group_count_1)); }
	inline int32_t get_group_count_1() const { return ___group_count_1; }
	inline int32_t* get_address_of_group_count_1() { return &___group_count_1; }
	inline void set_group_count_1(int32_t value)
	{
		___group_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGULAREXPRESSION_T7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef URIFORMATEXCEPTION_TCF3A5E41A4694669507EF301FE0C741BF03ADED4_H
#define URIFORMATEXCEPTION_TCF3A5E41A4694669507EF301FE0C741BF03ADED4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormatException
struct  UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4  : public FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMATEXCEPTION_TCF3A5E41A4694669507EF301FE0C741BF03ADED4_H
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Uri_UriScheme[]
struct UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  m_Items[1];

public:
	inline UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1A2BA80BB42BE237C6B282689178EE43BD1196CA_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6B49CBBA9928D53786A1710B97F9899523B6ED2D_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDEBB7F195FFD40D68FF87F23F7D5D3E111C0B13D_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);

// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Expression__ctor_m18CDD641A264C8CD29C7B61AE3FC67FF873CE60C (Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * __this, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern "C" IL2CPP_METHOD_ATTR void AnchorInfo__ctor_m232D5DE56159AC446CF47C10EE5DCE717376F70A (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * ___expr0, int32_t ___offset1, int32_t ___width2, uint16_t ___pos3, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AnchorInfo__ctor_m3F2536778C6F80417FD9E932129FA311290B0E6D (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * ___expr0, int32_t ___width1, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
extern "C" IL2CPP_METHOD_ATTR int32_t CapturingGroup_get_Index_mCA4B0AE8403D77E66CBC324FFB6E750123FCBF7C (CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * __this, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Group__ctor_m9B9E9EABD70750DE5BF55568CE43FD2A9869F19D (Group_t9EAAD4F220F411990E6DA025C34483FDC8CF905D * __this, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C" IL2CPP_METHOD_ATTR int32_t AnchorInfo_get_Offset_m4B4E46C1ED007AFC74FB65A74734F86BEE4C05CD (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C" IL2CPP_METHOD_ATTR bool AnchorInfo_get_IsPosition_mF51D8724B98EC9ED46C4376036F504DB21210845 (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, const RuntimeMethod* method);
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C" IL2CPP_METHOD_ATTR uint16_t AnchorInfo_get_Position_mE26DDE671D094CA396A40DF028A6EF880F5C3E64 (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C" IL2CPP_METHOD_ATTR bool AnchorInfo_get_IsSubstring_m19DC30D52958F064357B7EAF88FC4C521D15DD46 (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C" IL2CPP_METHOD_ATTR String_t* AnchorInfo_get_Substring_m405EDD5C0463C238AD528A55589D48D8F001A169 (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C" IL2CPP_METHOD_ATTR bool AnchorInfo_get_IgnoreCase_m13B6A7F5E63A1E63A09CCCF6BE41615259CE140C (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Group_Compile_m7B228A61257C416BCEED9B82F399099BA2C90DEE (Group_t9EAAD4F220F411990E6DA025C34483FDC8CF905D * __this, RuntimeObject* ___cmp0, bool ___reverse1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CompositeExpression__ctor_mFB75823B70EC8C41B3B1C0A7610EB507EE1C53AA (CompositeExpression_t750AF90954FAB323F201EA628A6123FCAC3A46EC * __this, const RuntimeMethod* method);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C" IL2CPP_METHOD_ATTR ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * CompositeExpression_get_Expressions_mDA94FF91FBC0049C0FF763CD5062655E54788A4F (CompositeExpression_t750AF90954FAB323F201EA628A6123FCAC3A46EC * __this, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionCollection_Add_m197F04E17260E71C17E92B0EE1765A484FF1EE74 (ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * __this, Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * ___e0, const RuntimeMethod* method);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * ExpressionCollection_get_Item_mB79A1D38D609012E33FB2499AF8B3AF8927ECB56 (ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionCollection_set_Item_m75FE6F67DE25F9C3BF7C535F093D450D270D7BDB (ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * __this, int32_t ___i0, Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * ___value1, const RuntimeMethod* method);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * Repetition_get_Expression_m14C6CD1B0D6FAE7315618C8B0F1166040EFED729 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Expression_GetFixedWidth_m35BCF6BDB49F953CB26D827A203DFE0E973C51DB (Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" IL2CPP_METHOD_ATTR int32_t Repetition_get_Minimum_mBA352B19625842B192BAB64BCFBD90FC9D0DEF32 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern "C" IL2CPP_METHOD_ATTR bool AnchorInfo_get_IsComplete_m3C5CF0F18AC947B27290BD6359DAE705A01367A2 (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m37096E517BA7C4D7571E3061B6578A0EB33BCBBC (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Text.StringBuilder::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnchorInfo__ctor_m8D9C2BF3134AC2829E8909B4AAD018956AA977D6 (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * __this, Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * ___expr0, int32_t ___offset1, int32_t ___width2, String_t* ___str3, bool ___ignore4, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m94993D2B7E81FCD4A980C36F246A01A4614950A0 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, bool ___dontEscape1, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, int32_t ___kind0, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriFormatException__ctor_mD721BBD61E5643DF05FE9B8163D2EEE5F297BBEF (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Locale::GetText(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m630EDF9F6CCED5E0039023034125D4041E905038 (String_t* ___fmt0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___args1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___u10, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___u21, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m126CB1FA8F56E0B9118E38A0C317280AE707B094 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Void System.Uri::Merge(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039 (UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740 (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4 (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m22415D1C28B9042B4AD18DAA09C3D0DFA03E38F2 (String_t* __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* p0, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m4C6CEE11EAAE6AD2DB849C0CF9031A07E5941C94 (String_t* p0, int32_t p1, String_t* p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsPredefinedScheme_m44BBB3DFC5E743BC6645A5AF0ACEC94FD408D529 (String_t* ___scheme0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.Uri::EscapeString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994 (String_t* ___str0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m4DCBCD433A2B74064ACE6E3F072C6A0A1B52E280 (RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m384143836DF3EC929F3FCF6CB53ACBFF800E34BE (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1B75C02630B6F89C8F8D229DE3C76CE401312E9D (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Remove_m99567842E145237D4CFBEF7C8309EC76B505CC17 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m5332FD7D227D1779261E3257E2E7D82DC37CF1D4 (String_t* __this, Il2CppChar p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_EndsWith_mA2A8A4416101D0F9B91A79CDF7DBE064E8C77A2C (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR void Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m1A2BA80BB42BE237C6B282689178EE43BD1196CA_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m6B49CBBA9928D53786A1710B97F9899523B6ED2D_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, String_t* p0, int32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mDEBB7F195FFD40D68FF87F23F7D5D3E111C0B13D_gshared)(__this, p0, p1, method);
}
// System.Boolean System.String::StartsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m7B83E0D4961FE9321291479F87C4160079C1774F (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_GetLeftPart_m553664DEDE7E131904A6A9EB9DD3C005BE41661C (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, int32_t ___part0, const RuntimeMethod* method);
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024 (String_t* ___scheme0, const RuntimeMethod* method);
// System.String System.Uri::get_Host()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m94306F327C7E3BCCD575D28D8E64A0FB7009ADA5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsFile()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsFile_m11FE138565770145768236C351BE0038291E2660 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern "C" IL2CPP_METHOD_ATTR bool IPAddress_TryParse_mCD7B7957AD55148B544FD11DE17D24BB5BAA83E0 (String_t* ___ipString0, IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 ** ___address1, const RuntimeMethod* method);
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Net.IPv6Address&)
extern "C" IL2CPP_METHOD_ATTR bool IPv6Address_TryParse_m05241D8155448E6219CCE69F2B0C67ECFAED105B (String_t* ___ipString0, IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 ** ___result1, const RuntimeMethod* method);
// System.Boolean System.Net.IPv6Address::IsLoopback(System.Net.IPv6Address)
extern "C" IL2CPP_METHOD_ATTR bool IPv6Address_IsLoopback_m32BCF977A631C32C0BDDB2A1A0EBE69DD6A960A2 (IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * ___addr0, const RuntimeMethod* method);
// System.String System.Uri::get_Query()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Query_mCD49A0A0EC2508FCC89909AE8C7B99E586369C9B (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsIPv4Address_mD7AC4D29C10CFD253D49C84A5B379964B1776A2A (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsDomainAddress_m488D5642C2C83385D8536AEFBE1431010B59E463 (String_t* ___name0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* String_Split_m3A8A48A00011BA5F135EBC797AD2B12E710A48CA (String_t* __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* p0, const RuntimeMethod* method);
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_mFBFB83A73E030ADEADC1E31B8A3BE4F14F0738A5 (String_t* p0, uint32_t* p1, const RuntimeMethod* method);
// System.Boolean System.Char::IsLetterOrDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsLetterOrDigit_m5A728C16BF66C4ADC4A33F91CFB0EA53D7C43A71 (Il2CppChar p0, const RuntimeMethod* method);
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsAlpha_m31F419EB2A4349DA41460DCFC381FE4EC0615B6B (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.Char::IsDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsDigit_m64DFE12D7DCF1AC634EA805421E06B4B18E1C036 (Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_InternalEquals_mAC1DC6C549899943D34AC8DD48A3B098D3A650DA (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___uri0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE (const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C (String_t* __this, CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * p0, const RuntimeMethod* method);
// System.Int32 System.String::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D (String_t* __this, const RuntimeMethod* method);
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_GetOpaqueWiseSchemeDelimiter_mA5F7CDD38ECF7B333BFC220727E0B628595B7FED (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mAB2D7FBCF37024E9F49A945C4646E1931D887928 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_CompactEscaped_m33BD25DDB850060AA07417820FB81ED68180F271 (String_t* ___scheme0, const RuntimeMethod* method);
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_Reduce_m47AB24CD60A069202994F361E3F2ACF218D358A1 (String_t* ___path0, bool ___compact_escaped1, const RuntimeMethod* method);
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsHexDigit_m8B98A52C92CBB8103BA20A3B03F54B7DDC062A32 (Il2CppChar ___digit0, const RuntimeMethod* method);
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_Unescape_mD61168C7FD8597DE9B7F2FF7F8C201E6B8B4CDB2 (String_t* ___str0, bool ___excludeSpecial1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C" IL2CPP_METHOD_ATTR void Uri_AppendQueryAndFragment_mC4DA381930B43CB56B1EABF561EBF10915D24BAB (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t** ___result0, const RuntimeMethod* method);
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeString_m5ED2E2609B29C064B8CC6E04D33E29DD849D65B2 (String_t* ___str0, bool ___escapeReserved1, bool ___escapeHex2, bool ___escapeBrackets3, const RuntimeMethod* method);
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsHexEncoding_m8490687F97773ED8AA8134E10B82741673EDF3E6 (String_t* ___pattern0, int32_t ___index1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845 (const RuntimeMethod* method);
// System.String System.Uri::HexEscape(System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_HexEscape_mC0E62F8B4655BA6F27AE9CCFE683810D58B9E047 (Il2CppChar ___character0, const RuntimeMethod* method);
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri_Parse_m17C7D7554D04AF47A000D1A9731C2867E2F131D2 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, int32_t ___kind0, String_t* ___uriString1, const RuntimeMethod* method);
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Uri_HexUnescapeMultiByte_m73131CB46572E5B039C1D5995D31843F8F666104 (String_t* ___pattern0, int32_t* ___index1, Il2CppChar* ___surrogate2, const RuntimeMethod* method);
// System.String System.String::TrimStart(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_TrimStart_mC1034F349006223A281FDE8A774DB98F95D99D0C (String_t* __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_ParseNoExceptions_m73BE7C445B69BD04762298CE1DDED154034D33A5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, int32_t ___kind0, String_t* ___uriString1, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m464DC8002C401320991043FC1AD572A434A6EF76 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri_ParseAsUnixAbsoluteFilePath_mAF808B2FB6ADE510143CB4ECFD81BCC654A866E5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri_ParseAsWindowsUNC_mFC057DEC89ECCCD98D77E80742AE38BD1068C695 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_ParseAsWindowsAbsoluteFilePath_m083C87912CF5C124EBBA97F12801251BDD993548 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_CheckSchemeName_m0236F13E252237A7834FBF250101AE8EE62FBB5E (String_t* ___schemeName0, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m6988B533095C05B662AF80DC985DEAF94142CA02 (String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_mC6529655AB4CBF682EAC467D3A6D9F40B8498F3F (String_t* __this, Il2CppChar p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsUnc()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsUnc_m9B22A48A07AAC67808A3B766C11DE5E583239870 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m06C9C97E7277BC496737C70A40BECBB4060B4F2E (String_t* __this, Il2CppChar p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m5428D282A0F2C94FF1CFC7E16A7CF705BDA84EE6 (String_t* __this, Il2CppChar p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_mD6E6D48015D384A32C1910561B9EFD07EF9E522B (String_t* p0, int32_t p1, RuntimeObject* p2, int32_t* p3, const RuntimeMethod* method);
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_CheckHostName_mA0ADC3FD6C87A7BF545E975A9F77255453433EC9 (String_t* ___name0, const RuntimeMethod* method);
// System.String System.Net.IPv6Address::ToString(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* IPv6Address_ToString_mCC0E8CB2C35F186230FA82D135396B47BB4FCACA (IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * __this, bool ___fullLength0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.UriParser System.Uri::get_Parser()
extern "C" IL2CPP_METHOD_ATTR UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * Uri_get_Parser_mC06CE2AA97C8199255386B10743B78CDC31D53CC (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Char System.Char::ToUpper(System.Char)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Char_ToUpper_mF0E1A7A2B19AF2A887715A33577A5B66FD99DA6A (Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m32FA65B177FDBB082C72B723F0B376A5394A38BF (String_t* __this, Il2CppChar p0, Il2CppChar p1, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m8865F1FDBE49082D17BABCEAE62D8BDFC0311818 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Uri::FromHex(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC (Il2CppChar ___digit0, const RuntimeMethod* method);
// System.UriParser System.UriParser::GetParser(System.String)
extern "C" IL2CPP_METHOD_ATTR UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * UriParser_GetParser_m7AE4073658832797A3FA98F337B52EEF28AA1696 (String_t* ___schemeName0, const RuntimeMethod* method);
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" IL2CPP_METHOD_ATTR int32_t UriParser_get_DefaultPort_mCC6DEBBCD89CD3E4D6AB2247A0E0FF26E156B0F6 (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, const RuntimeMethod* method);
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_GetSchemeDelimiter_mFAE7BAA0DBD699319611B29B1BE4D5EFF452D527 (String_t* ___scheme0, const RuntimeMethod* method);
// System.Void System.DefaultUriParser::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void DefaultUriParser__ctor_m595061EFECC19AF010A707B946AA863D80FA33A7 (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * __this, String_t* ___scheme0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9 (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_Equals_m8F1D37CE67D713E8EF3E9433D942A7E0242F4838 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void FormatException__ctor_mDEB80E27D63D7B7EF9A9386C14188A3ED36D6388 (FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void FormatException__ctor_m8DE89BC7BD5398BE533DDACB4441EE53F6D8E1F0 (FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * p0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  p1, const RuntimeMethod* method);
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD2C509DFF4A5E537271E9FA0781963C4DDADD54C (Exception_t * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * p0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  p1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m5F3516AE3DCA276F67885661467C99213AECC093 (Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * __this, String_t* ___pattern0, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Hashtable__ctor_m7737017B81338A30D456EBC042565AF95197AD70 (Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * __this, const RuntimeMethod* method);
// System.Void System.DefaultUriParser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923 (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * __this, const RuntimeMethod* method);
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080 (Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___table0, UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * ___uriParser1, String_t* ___schemeName2, int32_t ___defaultPort3, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_mBB8498484175C42EF124806FB8F5B2C82017D2DA (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m9148668A1A9CBE093555DC6BD273B65AAE9C89FB (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriParser_set_SchemeName_m6BB89EAF5B9FD89739D20F0A3BE1CD609B7F6244 (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UriParser_set_DefaultPort_m1D2C2A9EA79F0FD3E6C8EC22C5C362A1D9F7AFB3 (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.UriParser::CreateDefaults()
extern "C" IL2CPP_METHOD_ATTR void UriParser_CreateDefaults_m2CABED1E4723143115406B5EA352A313325CCB04 (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  p0, const RuntimeMethod* method);
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvert_m976D97EF4991BCE64D71D471B71FE9DD227ED404 (UriTypeConverter_tA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602 (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method);
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TypeConverter_ConvertFrom_mA3A3F067FB9C99C4401B8239E347328619566499 (TypeConverter_t5801C9F7100E1D849000ED0914E01E4CB2541B71 * __this, RuntimeObject* ___context0, CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___culture1, RuntimeObject * ___value2, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m130BFB261037E354E5E08022C5BA8C8A777B388B (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___u10, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___u21, const RuntimeMethod* method);
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TypeConverter_ConvertTo_m6CD02AA6A2C7F42A18535A89AD99DAA2FF20EAEA (TypeConverter_t5801C9F7100E1D849000ED0914E01E4CB2541B71 * __this, RuntimeObject* ___context0, CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___culture1, RuntimeObject * ___value2, Type_t * ___destinationType3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern "C" IL2CPP_METHOD_ATTR void PositionAssertion__ctor_m5DC40F24843B9A607184883C0D4766B2F7B71088 (PositionAssertion_t3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E * __this, uint16_t ___pos0, const RuntimeMethod* method)
{
	{
		Expression__ctor_m18CDD641A264C8CD29C7B61AE3FC67FF873CE60C(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___pos0;
		__this->set_pos_0(L_0);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PositionAssertion_Compile_mD84833FBEA4C6A7B88A44CD103CA57FCADBD2E68 (PositionAssertion_t3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E * __this, RuntimeObject* ___cmp0, bool ___reverse1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionAssertion_Compile_mD84833FBEA4C6A7B88A44CD103CA57FCADBD2E68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___cmp0;
		uint16_t L_1 = __this->get_pos_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32U26,System.Int32U26)
extern "C" IL2CPP_METHOD_ATTR void PositionAssertion_GetWidth_m79AC50ADECAFEC7F739C20FA98CA2670E01428E2 (PositionAssertion_t3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E * __this, int32_t* ___min0, int32_t* ___max1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min0;
		int32_t* L_1 = ___max1;
		int32_t L_2 = 0;
		V_0 = L_2;
		*((int32_t*)L_1) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)L_0) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern "C" IL2CPP_METHOD_ATTR bool PositionAssertion_IsComplex_m84CA6CA3FB139118081FED12708EE04E96860FDA (PositionAssertion_t3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * PositionAssertion_GetAnchorInfo_m8DA697B7D679C77E1C8EF1663112555C429A0CC9 (PositionAssertion_t3F8108F0A3B70EA75CDC85F3F3ABFFCB031A1B9E * __this, bool ___revers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionAssertion_GetAnchorInfo_m8DA697B7D679C77E1C8EF1663112555C429A0CC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_pos_0();
		V_0 = L_0;
		uint16_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_0020;
			}
		}
	}
	{
		goto IL_002f;
	}

IL_0020:
	{
		uint16_t L_2 = __this->get_pos_0();
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_3 = (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *)il2cpp_codegen_object_new(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m232D5DE56159AC446CF47C10EE5DCE717376F70A(L_3, __this, 0, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002f:
	{
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_4 = (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *)il2cpp_codegen_object_new(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m3F2536778C6F80417FD9E932129FA311290B0E6D(L_4, __this, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Reference__ctor_mDA86A6E6F50214DF8BEE85C58815B23F9BA21FEF (Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6 * __this, bool ___ignore0, const RuntimeMethod* method)
{
	{
		Expression__ctor_m18CDD641A264C8CD29C7B61AE3FC67FF873CE60C(__this, /*hidden argument*/NULL);
		bool L_0 = ___ignore0;
		__this->set_ignore_1(L_0);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern "C" IL2CPP_METHOD_ATTR CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * Reference_get_CapturingGroup_mB5287E5322CD279769792B38E9F78D095DDC13D4 (Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6 * __this, const RuntimeMethod* method)
{
	{
		CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * L_0 = __this->get_group_0();
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" IL2CPP_METHOD_ATTR void Reference_set_CapturingGroup_mDB4CDD6AA56395A4B664E60C3CE810699593A88A (Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6 * __this, CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * ___value0, const RuntimeMethod* method)
{
	{
		CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * L_0 = ___value0;
		__this->set_group_0(L_0);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern "C" IL2CPP_METHOD_ATTR bool Reference_get_IgnoreCase_m56B053B54E85091860E4F7C646B8231B9F0D4EB8 (Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_ignore_1();
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Reference_Compile_mC5AB9A6F8E9F564241EE52E57873453D96BC9ED3 (Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6 * __this, RuntimeObject* ___cmp0, bool ___reverse1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Reference_Compile_mC5AB9A6F8E9F564241EE52E57873453D96BC9ED3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___cmp0;
		CapturingGroup_tAFE8488C7C2CC06936764A0173F1C3DA0F67BEE7 * L_1 = __this->get_group_0();
		NullCheck(L_1);
		int32_t L_2 = CapturingGroup_get_Index_mCA4B0AE8403D77E66CBC324FFB6E750123FCBF7C(L_1, /*hidden argument*/NULL);
		bool L_3 = __this->get_ignore_1();
		bool L_4 = ___reverse1;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, bool, bool >::Invoke(14 /* System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32U26,System.Int32U26)
extern "C" IL2CPP_METHOD_ATTR void Reference_GetWidth_m3EAC9CE991BD000D426FD8FAAAC2044A925B8B10 (Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6 * __this, int32_t* ___min0, int32_t* ___max1, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___min0;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___max1;
		*((int32_t*)L_1) = (int32_t)((int32_t)2147483647LL);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern "C" IL2CPP_METHOD_ATTR bool Reference_IsComplex_m250F363236466A33B4FED425491042E3BCAB97DF (Reference_t683D20A9EF06251885F0ACC287F31F5B670F47A6 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RegularExpression__ctor_m282D2C5536A52884834D530D1446EDBC8DE0F9D2 (RegularExpression_t7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E * __this, const RuntimeMethod* method)
{
	{
		Group__ctor_m9B9E9EABD70750DE5BF55568CE43FD2A9869F19D(__this, /*hidden argument*/NULL);
		__this->set_group_count_1(0);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RegularExpression_set_GroupCount_mE92A8DA40E8A68968296751166C8676A3B7C7B27 (RegularExpression_t7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_group_count_1(L_0);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RegularExpression_Compile_mDE15545298F26AFE901861AC772E029FAF5FC584 (RegularExpression_t7F182BD5D2123BFE206F0734F4CCE6FE3BEE2A0E * __this, RuntimeObject* ___cmp0, bool ___reverse1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegularExpression_Compile_mDE15545298F26AFE901861AC772E029FAF5FC584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * V_2 = NULL;
	LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * V_3 = NULL;
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&) */, __this, (int32_t*)(&V_0), (int32_t*)(&V_1));
		RuntimeObject* L_0 = ___cmp0;
		int32_t L_1 = __this->get_group_count_1();
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, int32_t, int32_t >::Invoke(23 /* System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		bool L_4 = ___reverse1;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_5 = VirtFuncInvoker1< AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean) */, __this, L_4);
		V_2 = L_5;
		RuntimeObject* L_6 = ___cmp0;
		NullCheck(L_6);
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_7 = InterfaceFuncInvoker0< LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		RuntimeObject* L_8 = ___cmp0;
		bool L_9 = ___reverse1;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = AnchorInfo_get_Offset_m4B4E46C1ED007AFC74FB65A74734F86BEE4C05CD(L_10, /*hidden argument*/NULL);
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_12 = V_3;
		NullCheck(L_8);
		InterfaceActionInvoker3< bool, int32_t, LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(25 /* System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_8, L_9, L_11, L_12);
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = AnchorInfo_get_IsPosition_mF51D8724B98EC9ED46C4376036F504DB21210845(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_15 = ___cmp0;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_16 = V_2;
		NullCheck(L_16);
		uint16_t L_17 = AnchorInfo_get_Position_mE26DDE671D094CA396A40DF028A6EF880F5C3E64(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_15, L_17);
		goto IL_006f;
	}

IL_0051:
	{
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_18 = V_2;
		NullCheck(L_18);
		bool L_19 = AnchorInfo_get_IsSubstring_m19DC30D52958F064357B7EAF88FC4C521D15DD46(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		RuntimeObject* L_20 = ___cmp0;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22 = AnchorInfo_get_Substring_m405EDD5C0463C238AD528A55589D48D8F001A169(L_21, /*hidden argument*/NULL);
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_23 = V_2;
		NullCheck(L_23);
		bool L_24 = AnchorInfo_get_IgnoreCase_m13B6A7F5E63A1E63A09CCCF6BE41615259CE140C(L_23, /*hidden argument*/NULL);
		bool L_25 = ___reverse1;
		NullCheck(L_20);
		InterfaceActionInvoker3< String_t*, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_20, L_22, L_24, L_25);
	}

IL_006f:
	{
		RuntimeObject* L_26 = ___cmp0;
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_26);
		RuntimeObject* L_27 = ___cmp0;
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_28 = V_3;
		NullCheck(L_27);
		InterfaceActionInvoker1< LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_27, L_28);
		RuntimeObject* L_29 = ___cmp0;
		bool L_30 = ___reverse1;
		Group_Compile_m7B228A61257C416BCEED9B82F399099BA2C90DEE(__this, L_29, L_30, /*hidden argument*/NULL);
		RuntimeObject* L_31 = ___cmp0;
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_31);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Repetition__ctor_mDD0DF66E9C9AB02F7B9FCA321DA4919A57115320 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, int32_t ___min0, int32_t ___max1, bool ___lazy2, const RuntimeMethod* method)
{
	{
		CompositeExpression__ctor_mFB75823B70EC8C41B3B1C0A7610EB507EE1C53AA(__this, /*hidden argument*/NULL);
		ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * L_0 = CompositeExpression_get_Expressions_mDA94FF91FBC0049C0FF763CD5062655E54788A4F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExpressionCollection_Add_m197F04E17260E71C17E92B0EE1765A484FF1EE74(L_0, (Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 *)NULL, /*hidden argument*/NULL);
		int32_t L_1 = ___min0;
		__this->set_min_1(L_1);
		int32_t L_2 = ___max1;
		__this->set_max_2(L_2);
		bool L_3 = ___lazy2;
		__this->set_lazy_3(L_3);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * Repetition_get_Expression_m14C6CD1B0D6FAE7315618C8B0F1166040EFED729 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, const RuntimeMethod* method)
{
	{
		ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * L_0 = CompositeExpression_get_Expressions_mDA94FF91FBC0049C0FF763CD5062655E54788A4F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * L_1 = ExpressionCollection_get_Item_mB79A1D38D609012E33FB2499AF8B3AF8927ECB56(L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" IL2CPP_METHOD_ATTR void Repetition_set_Expression_m677F6A90D95C6C2B3A4D6872FBE89AAC950DCC57 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * ___value0, const RuntimeMethod* method)
{
	{
		ExpressionCollection_tCA7FC699936CBAE10FB637D8927714CD3AEA282A * L_0 = CompositeExpression_get_Expressions_mDA94FF91FBC0049C0FF763CD5062655E54788A4F(__this, /*hidden argument*/NULL);
		Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * L_1 = ___value0;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m75FE6F67DE25F9C3BF7C535F093D450D270D7BDB(L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" IL2CPP_METHOD_ATTR int32_t Repetition_get_Minimum_mBA352B19625842B192BAB64BCFBD90FC9D0DEF32 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_min_1();
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Repetition_Compile_m282B230D6BB467CE23FED329633BE4D1C1F95271 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, RuntimeObject* ___cmp0, bool ___reverse1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Repetition_Compile_m282B230D6BB467CE23FED329633BE4D1C1F95271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * V_0 = NULL;
	LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * V_1 = NULL;
	{
		Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * L_0 = Repetition_get_Expression_m14C6CD1B0D6FAE7315618C8B0F1166040EFED729(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_2 = ___cmp0;
		NullCheck(L_2);
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_3 = InterfaceFuncInvoker0< LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = ___cmp0;
		int32_t L_5 = __this->get_min_1();
		int32_t L_6 = __this->get_max_2();
		bool L_7 = __this->get_lazy_3();
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_8 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(20 /* System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7, L_8);
		Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * L_9 = Repetition_get_Expression_m14C6CD1B0D6FAE7315618C8B0F1166040EFED729(__this, /*hidden argument*/NULL);
		RuntimeObject* L_10 = ___cmp0;
		bool L_11 = ___reverse1;
		NullCheck(L_9);
		VirtActionInvoker2< RuntimeObject*, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_9, L_10, L_11);
		RuntimeObject* L_12 = ___cmp0;
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(21 /* System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_12, L_13);
		goto IL_0083;
	}

IL_0049:
	{
		RuntimeObject* L_14 = ___cmp0;
		NullCheck(L_14);
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_15 = InterfaceFuncInvoker0< LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_14);
		V_1 = L_15;
		RuntimeObject* L_16 = ___cmp0;
		int32_t L_17 = __this->get_min_1();
		int32_t L_18 = __this->get_max_2();
		bool L_19 = __this->get_lazy_3();
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_20 = V_1;
		NullCheck(L_16);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(24 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19, L_20);
		Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * L_21 = Repetition_get_Expression_m14C6CD1B0D6FAE7315618C8B0F1166040EFED729(__this, /*hidden argument*/NULL);
		RuntimeObject* L_22 = ___cmp0;
		bool L_23 = ___reverse1;
		NullCheck(L_21);
		VirtActionInvoker2< RuntimeObject*, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_21, L_22, L_23);
		RuntimeObject* L_24 = ___cmp0;
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_24);
		RuntimeObject* L_25 = ___cmp0;
		LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * L_26 = V_1;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t4A317D95D5F6964647AE5BBB13F5CAE3F1C81FAB * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_tD6767949D0F25B9EC68FDD48CA980F76FB43D4BB_il2cpp_TypeInfo_var, L_25, L_26);
	}

IL_0083:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32U26,System.Int32U26)
extern "C" IL2CPP_METHOD_ATTR void Repetition_GetWidth_mC03781176500B0C802FAB07EDA3D0EEB53B360F9 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, int32_t* ___min0, int32_t* ___max1, const RuntimeMethod* method)
{
	{
		Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * L_0 = Repetition_get_Expression_m14C6CD1B0D6FAE7315618C8B0F1166040EFED729(__this, /*hidden argument*/NULL);
		int32_t* L_1 = ___min0;
		int32_t* L_2 = ___max1;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_0, (int32_t*)L_1, (int32_t*)L_2);
		int32_t* L_3 = ___min0;
		int32_t* L_4 = ___min0;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = __this->get_min_1();
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6));
		int32_t* L_7 = ___max1;
		int32_t L_8 = *((int32_t*)L_7);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_9 = __this->get_max_2();
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0040;
		}
	}

IL_0034:
	{
		int32_t* L_10 = ___max1;
		*((int32_t*)L_10) = (int32_t)((int32_t)2147483647LL);
		goto IL_004b;
	}

IL_0040:
	{
		int32_t* L_11 = ___max1;
		int32_t* L_12 = ___max1;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = __this->get_max_2();
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_14));
	}

IL_004b:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * Repetition_GetAnchorInfo_m629BB958910E82AAC6FD94EFA014D5697ED497A2 (Repetition_t60545A1C9349248736914B4A126F1919F346D4B7 * __this, bool ___reverse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Repetition_GetAnchorInfo_m629BB958910E82AAC6FD94EFA014D5697ED497A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = Expression_GetFixedWidth_m35BCF6BDB49F953CB26D827A203DFE0E973C51DB(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Repetition_get_Minimum_mBA352B19625842B192BAB64BCFBD90FC9D0DEF32(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_0;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_3 = (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *)il2cpp_codegen_object_new(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m3F2536778C6F80417FD9E932129FA311290B0E6D(L_3, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		Expression_t6A43E18B89A25A32D44C3FD396F6139A8AA73F94 * L_4 = Repetition_get_Expression_m14C6CD1B0D6FAE7315618C8B0F1166040EFED729(__this, /*hidden argument*/NULL);
		bool L_5 = ___reverse0;
		NullCheck(L_4);
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_6 = VirtFuncInvoker1< AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean) */, L_4, L_5);
		V_1 = L_6;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = AnchorInfo_get_IsPosition_mF51D8724B98EC9ED46C4376036F504DB21210845(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = AnchorInfo_get_Offset_m4B4E46C1ED007AFC74FB65A74734F86BEE4C05CD(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_12 = V_1;
		NullCheck(L_12);
		uint16_t L_13 = AnchorInfo_get_Position_mE26DDE671D094CA396A40DF028A6EF880F5C3E64(L_12, /*hidden argument*/NULL);
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_14 = (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *)il2cpp_codegen_object_new(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m232D5DE56159AC446CF47C10EE5DCE717376F70A(L_14, __this, L_10, L_11, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0046:
	{
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = AnchorInfo_get_IsSubstring_m19DC30D52958F064357B7EAF88FC4C521D15DD46(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bc;
		}
	}
	{
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = AnchorInfo_get_IsComplete_m3C5CF0F18AC947B27290BD6359DAE705A01367A2(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a2;
		}
	}
	{
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = AnchorInfo_get_Substring_m405EDD5C0463C238AD528A55589D48D8F001A169(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		String_t* L_21 = V_2;
		StringBuilder_t * L_22 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m37096E517BA7C4D7571E3061B6578A0EB33BCBBC(L_22, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		V_4 = 1;
		goto IL_0080;
	}

IL_0072:
	{
		StringBuilder_t * L_23 = V_3;
		String_t* L_24 = V_2;
		NullCheck(L_23);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0080:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = Repetition_get_Minimum_mBA352B19625842B192BAB64BCFBD90FC9D0DEF32(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_28 = V_0;
		StringBuilder_t * L_29 = V_3;
		NullCheck(L_29);
		String_t* L_30 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_29, /*hidden argument*/NULL);
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = AnchorInfo_get_IgnoreCase_m13B6A7F5E63A1E63A09CCCF6BE41615259CE140C(L_31, /*hidden argument*/NULL);
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_33 = (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *)il2cpp_codegen_object_new(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m8D9C2BF3134AC2829E8909B4AAD018956AA977D6(L_33, __this, 0, L_28, L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00a2:
	{
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = AnchorInfo_get_Offset_m4B4E46C1ED007AFC74FB65A74734F86BEE4C05CD(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = AnchorInfo_get_Substring_m405EDD5C0463C238AD528A55589D48D8F001A169(L_37, /*hidden argument*/NULL);
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_39 = V_1;
		NullCheck(L_39);
		bool L_40 = AnchorInfo_get_IgnoreCase_m13B6A7F5E63A1E63A09CCCF6BE41615259CE140C(L_39, /*hidden argument*/NULL);
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_41 = (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *)il2cpp_codegen_object_new(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m8D9C2BF3134AC2829E8909B4AAD018956AA977D6(L_41, __this, L_35, L_36, L_38, L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_00bc:
	{
		int32_t L_42 = V_0;
		AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 * L_43 = (AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213 *)il2cpp_codegen_object_new(AnchorInfo_t82C2F6B32A20B889C741097F41349F0B8FE17213_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m3F2536778C6F80417FD9E932129FA311290B0E6D(L_43, __this, L_42, /*hidden argument*/NULL);
		return L_43;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___uriString0;
		Uri__ctor_m94993D2B7E81FCD4A980C36F246A01A4614950A0(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m752167B92927984AED6685EDDB6813E333217B74 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serializationInfo0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___streamingContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri__ctor_m752167B92927984AED6685EDDB6813E333217B74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___serializationInfo0;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A(L_0, _stringLiteralC70F179C2B536A394271A74735D82658C61B296C, /*hidden argument*/NULL);
		Uri__ctor_m94993D2B7E81FCD4A980C36F246A01A4614950A0(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_scheme_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_1);
		__this->set_port_4((-1));
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_path_5(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_query_6(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_fragment_7(L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_userinfo_8(L_5);
		__this->set_isAbsoluteUri_11((bool)1);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___uriString0;
		__this->set_source_1(L_6);
		int32_t L_7 = ___uriKind1;
		Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___uriKind1;
		V_1 = L_8;
		int32_t L_9 = V_1;
		switch (L_9)
		{
			case 0:
			{
				goto IL_00b3;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_0098;
			}
		}
	}
	{
		goto IL_00b8;
	}

IL_007d:
	{
		bool L_10 = Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * L_11 = (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 *)il2cpp_codegen_object_new(UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mD721BBD61E5643DF05FE9B8163D2EEE5F297BBEF(L_11, _stringLiteralCE99D95F1E4BAA4F4417D18FD42F407DA2C676F5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5_RuntimeMethod_var);
	}

IL_0093:
	{
		goto IL_00d9;
	}

IL_0098:
	{
		bool L_12 = Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00ae;
		}
	}
	{
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * L_13 = (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 *)il2cpp_codegen_object_new(UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mD721BBD61E5643DF05FE9B8163D2EEE5F297BBEF(L_13, _stringLiteral6F5F3B70042BBF8D3F132C688226BF733767673B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5_RuntimeMethod_var);
	}

IL_00ae:
	{
		goto IL_00d9;
	}

IL_00b3:
	{
		goto IL_00d9;
	}

IL_00b8:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_14 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_15 = L_14;
		int32_t L_16 = ___uriKind1;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(UriKind_t602575BB5018420CCE336A35E0D95B1E18F13069_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		String_t* L_19 = Locale_GetText_m630EDF9F6CCED5E0039023034125D4041E905038(_stringLiteralB065B52DF30CBB8255A32015597FC9DECB4800CB, L_15, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20 = V_0;
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_21 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5_RuntimeMethod_var);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_mED09ABAB55190847530996718779205FFDE3BAD1 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___relativeUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri__ctor_mED09ABAB55190847530996718779205FFDE3BAD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * G_B2_0 = NULL;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * G_B2_1 = NULL;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * G_B1_0 = NULL;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * G_B3_1 = NULL;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * G_B3_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_scheme_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_1);
		__this->set_port_4((-1));
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_path_5(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_query_6(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_fragment_7(L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_userinfo_8(L_5);
		__this->set_isAbsoluteUri_11((bool)1);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_6 = ___baseUri0;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_7 = ___relativeUri1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_8 = Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164(L_7, (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_6;
		G_B1_1 = __this;
		if (!L_8)
		{
			G_B2_0 = L_6;
			G_B2_1 = __this;
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0074;
	}

IL_006e:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_10 = ___relativeUri1;
		NullCheck(L_10);
		String_t* L_11 = Uri_get_OriginalString_m126CB1FA8F56E0B9118E38A0C317280AE707B094(L_10, /*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0074:
	{
		NullCheck(G_B3_2);
		Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m94993D2B7E81FCD4A980C36F246A01A4614950A0 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, bool ___dontEscape1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri__ctor_m94993D2B7E81FCD4A980C36F246A01A4614950A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_scheme_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_1);
		__this->set_port_4((-1));
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_path_5(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_query_6(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_fragment_7(L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_userinfo_8(L_5);
		__this->set_isAbsoluteUri_11((bool)1);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		bool L_6 = ___dontEscape1;
		__this->set_userEscaped_12(L_6);
		String_t* L_7 = ___uriString0;
		__this->set_source_1(L_7);
		Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9(__this, 1, /*hidden argument*/NULL);
		bool L_8 = __this->get_isAbsoluteUri_11();
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = ___uriString0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(_stringLiteralB19571A6BE364AB2FD5A2398D02C830659C23A55, L_9, /*hidden argument*/NULL);
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * L_11 = (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 *)il2cpp_codegen_object_new(UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mD721BBD61E5643DF05FE9B8163D2EEE5F297BBEF(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, Uri__ctor_m94993D2B7E81FCD4A980C36F246A01A4614950A0_RuntimeMethod_var);
	}

IL_0087:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m3AABEF0738DC076FE671066AC082050D8E70BD0E (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri__ctor_m3AABEF0738DC076FE671066AC082050D8E70BD0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_scheme_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_1);
		__this->set_port_4((-1));
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_path_5(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_query_6(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_fragment_7(L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_userinfo_8(L_5);
		__this->set_isAbsoluteUri_11((bool)1);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_6 = ___baseUri0;
		String_t* L_7 = ___relativeUri1;
		Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD(__this, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Uri__cctor_m04530D19C293EABDAB2B9F0F1DEFF4F9D7E9681E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri__cctor_m04530D19C293EABDAB2B9F0F1DEFF4F9D7E9681E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_hexUpperChars_16(_stringLiteralCE27CB141098FEB00714E758646BE3E99C185B71);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_SchemeDelimiter_17(_stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeFile_18(_stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeFtp_19(_stringLiteral7616BB87BD05F6439E3672BA1B2BE55D5BEB68B3);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeGopher_20(_stringLiteral4188736A00FBFB506ACA06281ACF338290455C21);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeHttp_21(_stringLiteral77B5F8E343A90F6F597751021FB8B7A08FE83083);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeHttps_22(_stringLiteralC3437DBC7C1255D3A21D444D86EBF2E9234C22BD);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeMailto_23(_stringLiteralFE710CD089CB0BA74F588270FE079A392B5E9810);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeNews_24(_stringLiteral3C6BDCDDC94F64BF77DEB306AAE490A90A6FC300);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeNntp_25(_stringLiteral666948CC54CBC3FC2C70107A835E27C872F476E6);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeNetPipe_26(_stringLiteral1F8A1C4B94F61170B94E9FD827F36A60174238C7);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_UriSchemeNetTcp_27(_stringLiteral0765DEEFD5C1509444309BD8D09E7ACA927165F8);
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_0 = (UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6*)SZArrayNew(UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6_il2cpp_TypeInfo_var, (uint32_t)8);
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeHttp_21();
		String_t* L_3 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_SchemeDelimiter_17();
		UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  L_4;
		memset(&L_4, 0, sizeof(L_4));
		UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039((&L_4), L_2, L_3, ((int32_t)80), /*hidden argument*/NULL);
		*(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_4;
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_5 = L_1;
		NullCheck(L_5);
		String_t* L_6 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeHttps_22();
		String_t* L_7 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_SchemeDelimiter_17();
		UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  L_8;
		memset(&L_8, 0, sizeof(L_8));
		UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039((&L_8), L_6, L_7, ((int32_t)443), /*hidden argument*/NULL);
		*(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_8;
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_9 = L_5;
		NullCheck(L_9);
		String_t* L_10 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFtp_19();
		String_t* L_11 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_SchemeDelimiter_17();
		UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  L_12;
		memset(&L_12, 0, sizeof(L_12));
		UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039((&L_12), L_10, L_11, ((int32_t)21), /*hidden argument*/NULL);
		*(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_12;
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_13 = L_9;
		NullCheck(L_13);
		String_t* L_14 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		String_t* L_15 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_SchemeDelimiter_17();
		UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  L_16;
		memset(&L_16, 0, sizeof(L_16));
		UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039((&L_16), L_14, L_15, (-1), /*hidden argument*/NULL);
		*(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_16;
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_17 = L_13;
		NullCheck(L_17);
		String_t* L_18 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeMailto_23();
		UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  L_19;
		memset(&L_19, 0, sizeof(L_19));
		UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039((&L_19), L_18, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, ((int32_t)25), /*hidden argument*/NULL);
		*(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))) = L_19;
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_20 = L_17;
		NullCheck(L_20);
		String_t* L_21 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNews_24();
		UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  L_22;
		memset(&L_22, 0, sizeof(L_22));
		UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039((&L_22), L_21, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, ((int32_t)119), /*hidden argument*/NULL);
		*(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))) = L_22;
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_23 = L_20;
		NullCheck(L_23);
		String_t* L_24 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNntp_25();
		String_t* L_25 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_SchemeDelimiter_17();
		UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  L_26;
		memset(&L_26, 0, sizeof(L_26));
		UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039((&L_26), L_24, L_25, ((int32_t)119), /*hidden argument*/NULL);
		*(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))) = L_26;
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_27 = L_23;
		NullCheck(L_27);
		String_t* L_28 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeGopher_20();
		String_t* L_29 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_SchemeDelimiter_17();
		UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE  L_30;
		memset(&L_30, 0, sizeof(L_30));
		UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039((&L_30), L_28, L_29, ((int32_t)70), /*hidden argument*/NULL);
		*(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))) = L_30;
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_schemes_28(L_27);
		return;
	}
}
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m45D2151C8088914EF10A64A1A0DA3B89FBD67794 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m45D2151C8088914EF10A64A1A0DA3B89FBD67794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		String_t* L_1 = Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_0, _stringLiteralC70F179C2B536A394271A74735D82658C61B296C, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::Merge(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_0 = ___baseUri0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164(L_0, (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_2 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_2, _stringLiteral4C44B2AF1B92AB60120242108B3B6F58A3040E35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD_RuntimeMethod_var);
	}

IL_0017:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_3 = ___baseUri0;
		NullCheck(L_3);
		bool L_4 = Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_5 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_5, _stringLiteral4C44B2AF1B92AB60120242108B3B6F58A3040E35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Uri_Merge_m3FB41101CA9915DF77B7E165488B7D0FECD2F6BD_RuntimeMethod_var);
	}

IL_002d:
	{
		String_t* L_6 = ___relativeUri1;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___relativeUri1 = L_7;
	}

IL_003a:
	{
		String_t* L_8 = ___relativeUri1;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)2)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_10 = ___relativeUri1;
		NullCheck(L_10);
		Il2CppChar L_11 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_10, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_12 = ___relativeUri1;
		NullCheck(L_12);
		Il2CppChar L_13 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_12, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = ___relativeUri1;
		__this->set_source_1(L_14);
		Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_0071:
	{
		String_t* L_15 = ___relativeUri1;
		NullCheck(L_15);
		int32_t L_16 = String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21(L_15, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_0107;
		}
	}
	{
		String_t* L_18 = ___relativeUri1;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_19 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)3);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)((int32_t)63));
		NullCheck(L_18);
		int32_t L_23 = String_IndexOfAny_m22415D1C28B9042B4AD18DAA09C3D0DFA03E38F2(L_18, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) > ((int32_t)L_25)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}

IL_00ab:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_27 = ___baseUri0;
		NullCheck(L_27);
		String_t* L_28 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(L_27, /*hidden argument*/NULL);
		String_t* L_29 = ___relativeUri1;
		int32_t L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_31 = String_CompareOrdinal_m4C6CEE11EAAE6AD2DB849C0CF9031A07E5941C94(L_28, 0, L_29, 0, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00ed;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_32 = ___baseUri0;
		NullCheck(L_32);
		String_t* L_33 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_34 = Uri_IsPredefinedScheme_m44BBB3DFC5E743BC6645A5AF0ACEC94FD408D529(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00ed;
		}
	}
	{
		String_t* L_35 = ___relativeUri1;
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_35, /*hidden argument*/NULL);
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)))))
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_38 = ___relativeUri1;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		Il2CppChar L_40 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00fc;
		}
	}

IL_00ed:
	{
		String_t* L_41 = ___relativeUri1;
		__this->set_source_1(L_41);
		Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_00fc:
	{
		String_t* L_42 = ___relativeUri1;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		String_t* L_44 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_42, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)), /*hidden argument*/NULL);
		___relativeUri1 = L_44;
	}

IL_0107:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_45 = ___baseUri0;
		NullCheck(L_45);
		String_t* L_46 = L_45->get_scheme_2();
		__this->set_scheme_2(L_46);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_47 = ___baseUri0;
		NullCheck(L_47);
		String_t* L_48 = L_47->get_host_3();
		__this->set_host_3(L_48);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_49 = ___baseUri0;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_port_4();
		__this->set_port_4(L_50);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_51 = ___baseUri0;
		NullCheck(L_51);
		String_t* L_52 = L_51->get_userinfo_8();
		__this->set_userinfo_8(L_52);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_53 = ___baseUri0;
		NullCheck(L_53);
		bool L_54 = L_53->get_isUnc_9();
		__this->set_isUnc_9(L_54);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_55 = ___baseUri0;
		NullCheck(L_55);
		bool L_56 = L_55->get_isUnixFilePath_0();
		__this->set_isUnixFilePath_0(L_56);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_57 = ___baseUri0;
		NullCheck(L_57);
		bool L_58 = L_57->get_isOpaquePart_10();
		__this->set_isOpaquePart_10(L_58);
		String_t* L_59 = ___relativeUri1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_61 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_59, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0190;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_62 = ___baseUri0;
		NullCheck(L_62);
		String_t* L_63 = L_62->get_path_5();
		__this->set_path_5(L_63);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_64 = ___baseUri0;
		NullCheck(L_64);
		String_t* L_65 = L_64->get_query_6();
		__this->set_query_6(L_65);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_66 = ___baseUri0;
		NullCheck(L_66);
		String_t* L_67 = L_66->get_fragment_7();
		__this->set_fragment_7(L_67);
		return;
	}

IL_0190:
	{
		String_t* L_68 = ___relativeUri1;
		NullCheck(L_68);
		int32_t L_69 = String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21(L_68, ((int32_t)35), /*hidden argument*/NULL);
		V_0 = L_69;
		int32_t L_70 = V_0;
		if ((((int32_t)L_70) == ((int32_t)(-1))))
		{
			goto IL_01e5;
		}
	}
	{
		bool L_71 = __this->get_userEscaped_12();
		if (!L_71)
		{
			goto IL_01bd;
		}
	}
	{
		String_t* L_72 = ___relativeUri1;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		String_t* L_74 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_72, L_73, /*hidden argument*/NULL);
		__this->set_fragment_7(L_74);
		goto IL_01db;
	}

IL_01bd:
	{
		String_t* L_75 = ___relativeUri1;
		int32_t L_76 = V_0;
		NullCheck(L_75);
		String_t* L_77 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_75, ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_78 = Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994(L_77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_79 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(_stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841, L_78, /*hidden argument*/NULL);
		__this->set_fragment_7(L_79);
	}

IL_01db:
	{
		String_t* L_80 = ___relativeUri1;
		int32_t L_81 = V_0;
		NullCheck(L_80);
		String_t* L_82 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_80, 0, L_81, /*hidden argument*/NULL);
		___relativeUri1 = L_82;
	}

IL_01e5:
	{
		String_t* L_83 = ___relativeUri1;
		NullCheck(L_83);
		int32_t L_84 = String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21(L_83, ((int32_t)63), /*hidden argument*/NULL);
		V_0 = L_84;
		int32_t L_85 = V_0;
		if ((((int32_t)L_85) == ((int32_t)(-1))))
		{
			goto IL_0228;
		}
	}
	{
		String_t* L_86 = ___relativeUri1;
		int32_t L_87 = V_0;
		NullCheck(L_86);
		String_t* L_88 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_86, L_87, /*hidden argument*/NULL);
		__this->set_query_6(L_88);
		bool L_89 = __this->get_userEscaped_12();
		if (L_89)
		{
			goto IL_021e;
		}
	}
	{
		String_t* L_90 = __this->get_query_6();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_91 = Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994(L_90, /*hidden argument*/NULL);
		__this->set_query_6(L_91);
	}

IL_021e:
	{
		String_t* L_92 = ___relativeUri1;
		int32_t L_93 = V_0;
		NullCheck(L_92);
		String_t* L_94 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_92, 0, L_93, /*hidden argument*/NULL);
		___relativeUri1 = L_94;
	}

IL_0228:
	{
		String_t* L_95 = ___relativeUri1;
		NullCheck(L_95);
		int32_t L_96 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_95, /*hidden argument*/NULL);
		if ((((int32_t)L_96) <= ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_97 = ___relativeUri1;
		NullCheck(L_97);
		Il2CppChar L_98 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_97, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_98) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_99 = ___relativeUri1;
		NullCheck(L_99);
		int32_t L_100 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_99, /*hidden argument*/NULL);
		if ((((int32_t)L_100) <= ((int32_t)1)))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_101 = ___relativeUri1;
		NullCheck(L_101);
		Il2CppChar L_102 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_101, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_102) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_103 = __this->get_scheme_2();
		Il2CppChar L_104 = ((Il2CppChar)((int32_t)58));
		RuntimeObject * L_105 = Box(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var, &L_104);
		String_t* L_106 = ___relativeUri1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_107 = String_Concat_m4DCBCD433A2B74064ACE6E3F072C6A0A1B52E280(L_103, L_105, L_106, /*hidden argument*/NULL);
		__this->set_source_1(L_107);
		Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_027d:
	{
		String_t* L_108 = ___relativeUri1;
		__this->set_path_5(L_108);
		bool L_109 = __this->get_userEscaped_12();
		if (L_109)
		{
			goto IL_02a0;
		}
	}
	{
		String_t* L_110 = __this->get_path_5();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_111 = Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994(L_110, /*hidden argument*/NULL);
		__this->set_path_5(L_111);
	}

IL_02a0:
	{
		return;
	}

IL_02a1:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_112 = ___baseUri0;
		NullCheck(L_112);
		String_t* L_113 = L_112->get_path_5();
		__this->set_path_5(L_113);
		String_t* L_114 = ___relativeUri1;
		NullCheck(L_114);
		int32_t L_115 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_114, /*hidden argument*/NULL);
		if ((((int32_t)L_115) > ((int32_t)0)))
		{
			goto IL_02ca;
		}
	}
	{
		String_t* L_116 = __this->get_query_6();
		NullCheck(L_116);
		int32_t L_117 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_116, /*hidden argument*/NULL);
		if ((((int32_t)L_117) <= ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}

IL_02ca:
	{
		String_t* L_118 = __this->get_path_5();
		NullCheck(L_118);
		int32_t L_119 = String_LastIndexOf_m384143836DF3EC929F3FCF6CB53ACBFF800E34BE(L_118, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_119;
		int32_t L_120 = V_0;
		if ((((int32_t)L_120) < ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}
	{
		String_t* L_121 = __this->get_path_5();
		int32_t L_122 = V_0;
		NullCheck(L_121);
		String_t* L_123 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_121, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_path_5(L_123);
	}

IL_02f4:
	{
		String_t* L_124 = ___relativeUri1;
		NullCheck(L_124);
		int32_t L_125 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_124, /*hidden argument*/NULL);
		if (L_125)
		{
			goto IL_0300;
		}
	}
	{
		return;
	}

IL_0300:
	{
		String_t* L_126 = __this->get_path_5();
		String_t* L_127 = ___relativeUri1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_128 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_126, L_127, /*hidden argument*/NULL);
		__this->set_path_5(L_128);
		V_2 = 0;
	}

IL_0314:
	{
		String_t* L_129 = __this->get_path_5();
		int32_t L_130 = V_2;
		NullCheck(L_129);
		int32_t L_131 = String_IndexOf_m1B75C02630B6F89C8F8D229DE3C76CE401312E9D(L_129, _stringLiteral0EE6C175FF20D4C6D0A780956AB8CF342DBC520B, L_130, /*hidden argument*/NULL);
		V_0 = L_131;
		int32_t L_132 = V_0;
		if ((!(((uint32_t)L_132) == ((uint32_t)(-1)))))
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0386;
	}

IL_0332:
	{
		int32_t L_133 = V_0;
		if (L_133)
		{
			goto IL_0350;
		}
	}
	{
		String_t* L_134 = __this->get_path_5();
		NullCheck(L_134);
		String_t* L_135 = String_Remove_m99567842E145237D4CFBEF7C8309EC76B505CC17(L_134, 0, 2, /*hidden argument*/NULL);
		__this->set_path_5(L_135);
		goto IL_0381;
	}

IL_0350:
	{
		String_t* L_136 = __this->get_path_5();
		int32_t L_137 = V_0;
		NullCheck(L_136);
		Il2CppChar L_138 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_136, ((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_138) == ((int32_t)((int32_t)46))))
		{
			goto IL_037d;
		}
	}
	{
		String_t* L_139 = __this->get_path_5();
		int32_t L_140 = V_0;
		NullCheck(L_139);
		String_t* L_141 = String_Remove_m99567842E145237D4CFBEF7C8309EC76B505CC17(L_139, L_140, 2, /*hidden argument*/NULL);
		__this->set_path_5(L_141);
		goto IL_0381;
	}

IL_037d:
	{
		int32_t L_142 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)1));
	}

IL_0381:
	{
		goto IL_0314;
	}

IL_0386:
	{
		String_t* L_143 = __this->get_path_5();
		NullCheck(L_143);
		int32_t L_144 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_143, /*hidden argument*/NULL);
		if ((((int32_t)L_144) <= ((int32_t)1)))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_145 = __this->get_path_5();
		String_t* L_146 = __this->get_path_5();
		NullCheck(L_146);
		int32_t L_147 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_146, /*hidden argument*/NULL);
		NullCheck(L_145);
		Il2CppChar L_148 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_145, ((int32_t)il2cpp_codegen_subtract((int32_t)L_147, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_148) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_149 = __this->get_path_5();
		String_t* L_150 = __this->get_path_5();
		NullCheck(L_150);
		int32_t L_151 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_150, /*hidden argument*/NULL);
		NullCheck(L_149);
		Il2CppChar L_152 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_149, ((int32_t)il2cpp_codegen_subtract((int32_t)L_151, (int32_t)2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_152) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_153 = __this->get_path_5();
		String_t* L_154 = __this->get_path_5();
		NullCheck(L_154);
		int32_t L_155 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_154, /*hidden argument*/NULL);
		NullCheck(L_153);
		String_t* L_156 = String_Remove_m99567842E145237D4CFBEF7C8309EC76B505CC17(L_153, ((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)1)), 1, /*hidden argument*/NULL);
		__this->set_path_5(L_156);
	}

IL_03f4:
	{
		V_2 = 0;
	}

IL_03f6:
	{
		String_t* L_157 = __this->get_path_5();
		int32_t L_158 = V_2;
		NullCheck(L_157);
		int32_t L_159 = String_IndexOf_m1B75C02630B6F89C8F8D229DE3C76CE401312E9D(L_157, _stringLiteralB6C585545C2754DC9A082AAE2EBC239398A613C3, L_158, /*hidden argument*/NULL);
		V_0 = L_159;
		int32_t L_160 = V_0;
		if ((!(((uint32_t)L_160) == ((uint32_t)(-1)))))
		{
			goto IL_0414;
		}
	}
	{
		goto IL_048b;
	}

IL_0414:
	{
		int32_t L_161 = V_0;
		if (L_161)
		{
			goto IL_0421;
		}
	}
	{
		V_2 = 3;
		goto IL_03f6;
	}

IL_0421:
	{
		String_t* L_162 = __this->get_path_5();
		int32_t L_163 = V_0;
		NullCheck(L_162);
		int32_t L_164 = String_LastIndexOf_m5332FD7D227D1779261E3257E2E7D82DC37CF1D4(L_162, ((int32_t)47), ((int32_t)il2cpp_codegen_subtract((int32_t)L_163, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_164;
		int32_t L_165 = V_3;
		if ((!(((uint32_t)L_165) == ((uint32_t)(-1)))))
		{
			goto IL_0442;
		}
	}
	{
		int32_t L_166 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)1));
		goto IL_0486;
	}

IL_0442:
	{
		String_t* L_167 = __this->get_path_5();
		int32_t L_168 = V_3;
		int32_t L_169 = V_0;
		int32_t L_170 = V_3;
		NullCheck(L_167);
		String_t* L_171 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_167, ((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_169, (int32_t)L_170)), (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_172 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_171, _stringLiteral9D891E731F75DEAE56884D79E9816736B7488080, /*hidden argument*/NULL);
		if (!L_172)
		{
			goto IL_0482;
		}
	}
	{
		String_t* L_173 = __this->get_path_5();
		int32_t L_174 = V_3;
		int32_t L_175 = V_0;
		int32_t L_176 = V_3;
		NullCheck(L_173);
		String_t* L_177 = String_Remove_m99567842E145237D4CFBEF7C8309EC76B505CC17(L_173, ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_175, (int32_t)L_176)), (int32_t)3)), /*hidden argument*/NULL);
		__this->set_path_5(L_177);
		goto IL_0486;
	}

IL_0482:
	{
		int32_t L_178 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)1));
	}

IL_0486:
	{
		goto IL_03f6;
	}

IL_048b:
	{
		String_t* L_179 = __this->get_path_5();
		NullCheck(L_179);
		int32_t L_180 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_179, /*hidden argument*/NULL);
		if ((((int32_t)L_180) <= ((int32_t)3)))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_181 = __this->get_path_5();
		NullCheck(L_181);
		bool L_182 = String_EndsWith_mA2A8A4416101D0F9B91A79CDF7DBE064E8C77A2C(L_181, _stringLiteral56B058078ECF7CC679B5E9242FD167EB30B117B8, /*hidden argument*/NULL);
		if (!L_182)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_183 = __this->get_path_5();
		String_t* L_184 = __this->get_path_5();
		NullCheck(L_184);
		int32_t L_185 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_184, /*hidden argument*/NULL);
		NullCheck(L_183);
		int32_t L_186 = String_LastIndexOf_m5332FD7D227D1779261E3257E2E7D82DC37CF1D4(L_183, ((int32_t)47), ((int32_t)il2cpp_codegen_subtract((int32_t)L_185, (int32_t)4)), /*hidden argument*/NULL);
		V_0 = L_186;
		int32_t L_187 = V_0;
		if ((((int32_t)L_187) == ((int32_t)(-1))))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_188 = __this->get_path_5();
		int32_t L_189 = V_0;
		String_t* L_190 = __this->get_path_5();
		NullCheck(L_190);
		int32_t L_191 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_190, /*hidden argument*/NULL);
		int32_t L_192 = V_0;
		NullCheck(L_188);
		String_t* L_193 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_188, ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_191, (int32_t)L_192)), (int32_t)4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_194 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_193, _stringLiteral9D891E731F75DEAE56884D79E9816736B7488080, /*hidden argument*/NULL);
		if (!L_194)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_195 = __this->get_path_5();
		int32_t L_196 = V_0;
		String_t* L_197 = __this->get_path_5();
		NullCheck(L_197);
		int32_t L_198 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_197, /*hidden argument*/NULL);
		int32_t L_199 = V_0;
		NullCheck(L_195);
		String_t* L_200 = String_Remove_m99567842E145237D4CFBEF7C8309EC76B505CC17(L_195, ((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)L_199)), (int32_t)1)), /*hidden argument*/NULL);
		__this->set_path_5(L_200);
	}

IL_0522:
	{
		bool L_201 = __this->get_userEscaped_12();
		if (L_201)
		{
			goto IL_053e;
		}
	}
	{
		String_t* L_202 = __this->get_path_5();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_203 = Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994(L_202, /*hidden argument*/NULL);
		__this->set_path_5(L_203);
	}

IL_053e:
	{
		return;
	}
}
// System.String System.Uri::get_AbsolutePath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_2 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map12_30();
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_3 = (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *)il2cpp_codegen_object_new(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF(L_3, 2, /*hidden argument*/Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var);
		V_2 = L_3;
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_4 = V_2;
		NullCheck(L_4);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_4, _stringLiteralFE710CD089CB0BA74F588270FE079A392B5E9810, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_5 = V_2;
		NullCheck(L_5);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_5, _stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map12_30(L_6);
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_7 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map12_30();
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9 = Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF(L_7, L_8, (int32_t*)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0066;
	}

IL_005f:
	{
		String_t* L_11 = __this->get_path_5();
		return L_11;
	}

IL_0066:
	{
		String_t* L_12 = __this->get_path_5();
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_14 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_15 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_SchemeDelimiter_17();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = __this->get_path_5();
		String_t* L_18 = V_0;
		NullCheck(L_17);
		bool L_19 = String_StartsWith_m7B83E0D4961FE9321291479F87C4160079C1774F(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		return _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_20;
	}

IL_00a4:
	{
		String_t* L_21 = __this->get_path_5();
		return L_21;
	}
}
// System.String System.Uri::get_AbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_cachedAbsoluteUri_13();
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_1 = Uri_GetLeftPart_m553664DEDE7E131904A6A9EB9DD3C005BE41661C(__this, 2, /*hidden argument*/NULL);
		__this->set_cachedAbsoluteUri_13(L_1);
		String_t* L_2 = __this->get_query_6();
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = __this->get_cachedAbsoluteUri_13();
		String_t* L_5 = __this->get_query_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_4, L_5, /*hidden argument*/NULL);
		__this->set_cachedAbsoluteUri_13(L_6);
	}

IL_0046:
	{
		String_t* L_7 = __this->get_fragment_7();
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_9 = __this->get_cachedAbsoluteUri_13();
		String_t* L_10 = __this->get_fragment_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_9, L_10, /*hidden argument*/NULL);
		__this->set_cachedAbsoluteUri_13(L_11);
	}

IL_006e:
	{
		String_t* L_12 = __this->get_cachedAbsoluteUri_13();
		return L_12;
	}
}
// System.String System.Uri::get_Authority()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Authority_mC5B27A1EB5241CB23789862E185A2809BD40E9BD (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_Authority_mC5B27A1EB5241CB23789862E185A2809BD40E9BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_port_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = __this->get_host_3();
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		String_t* L_4 = __this->get_host_3();
		int32_t L_5 = __this->get_port_4();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m4DCBCD433A2B74064ACE6E3F072C6A0A1B52E280(L_4, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
// System.String System.Uri::get_Fragment()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m8A0CF0DAE7681721AD6D9B0A014C27597A708609 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_fragment_7();
		return L_0;
	}
}
// System.String System.Uri::get_Host()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m94306F327C7E3BCCD575D28D8E64A0FB7009ADA5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_host_3();
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsFile()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsFile_m11FE138565770145768236C351BE0038291E2660 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_IsFile_m11FE138565770145768236C351BE0038291E2660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::get_IsLoopback()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsLoopback_m6FD6098F90BF88C72D722ED78E08419CED0BCFC8 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_IsLoopback_m6FD6098F90BF88C72D722ED78E08419CED0BCFC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * V_0 = NULL;
	IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * V_1 = NULL;
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Host_m94306F327C7E3BCCD575D28D8E64A0FB7009ADA5(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = Uri_get_IsFile_m11FE138565770145768236C351BE0038291E2660(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		String_t* L_3 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_3, _stringLiteral3C7ECD7A063AD7AE0D2B9AB87B11F63CCC96C8F7, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_5, _stringLiteral334389048B872A533002B34D73F8C29FD09EFC50, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return (bool)1;
	}

IL_0049:
	{
		String_t* L_7 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_il2cpp_TypeInfo_var);
		bool L_8 = IPAddress_TryParse_mCD7B7957AD55148B544FD11DE17D24BB5BAA83E0(L_7, (IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 **)(&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_il2cpp_TypeInfo_var);
		IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * L_9 = ((IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4_il2cpp_TypeInfo_var))->get_Loopback_6();
		IPAddress_t620453DAA3165B1BFB11794B30FF82CE4D5026D4 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Net.IPAddress::Equals(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		return (bool)1;
	}

IL_006d:
	{
		String_t* L_12 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_il2cpp_TypeInfo_var);
		bool L_13 = IPv6Address_TryParse_m05241D8155448E6219CCE69F2B0C67ECFAED105B(L_12, (IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 **)(&V_1), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_il2cpp_TypeInfo_var);
		bool L_15 = IPv6Address_IsLoopback_m32BCF977A631C32C0BDDB2A1A0EBE69DD6A960A2(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		return (bool)1;
	}

IL_008c:
	{
		return (bool)0;
	}
}
// System.Boolean System.Uri::get_IsUnc()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsUnc_m9B22A48A07AAC67808A3B766C11DE5E583239870 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_isUnc_9();
		return L_0;
	}
}
// System.String System.Uri::get_PathAndQuery()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_m30CFB76360DC78FCF7B2B5792B8F3EB4B0565B21 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_PathAndQuery_m30CFB76360DC78FCF7B2B5792B8F3EB4B0565B21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_path_5();
		String_t* L_1 = Uri_get_Query_mCD49A0A0EC2508FCC89909AE8C7B99E586369C9B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Uri::get_Query()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Query_mCD49A0A0EC2508FCC89909AE8C7B99E586369C9B (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_query_6();
		return L_0;
	}
}
// System.String System.Uri::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_scheme_2();
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isAbsoluteUri_11();
		return L_0;
	}
}
// System.String System.Uri::get_OriginalString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m126CB1FA8F56E0B9118E38A0C317280AE707B094 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = __this->get_source_1();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->get_source_1();
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, __this);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_CheckHostName_mA0ADC3FD6C87A7BF545E975A9F77255453433EC9 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_CheckHostName_mA0ADC3FD6C87A7BF545E975A9F77255453433EC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		String_t* L_3 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_4 = Uri_IsIPv4Address_mD7AC4D29C10CFD253D49C84A5B379964B1776A2A(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		String_t* L_5 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_6 = Uri_IsDomainAddress_m488D5642C2C83385D8536AEFBE1431010B59E463(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		String_t* L_7 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_il2cpp_TypeInfo_var);
		bool L_8 = IPv6Address_TryParse_m05241D8155448E6219CCE69F2B0C67ECFAED105B(L_7, (IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 **)(&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsIPv4Address_mD7AC4D29C10CFD253D49C84A5B379964B1776A2A (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_IsIPv4Address_mD7AC4D29C10CFD253D49C84A5B379964B1776A2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		String_t* L_0 = ___name0;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_1 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_3 = String_Split_m3A8A48A00011BA5F135EBC797AD2B12E710A48CA(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15 = UInt32_TryParse_mFBFB83A73E030ADEADC1E31B8A3BE4F14F0738A5(L_14, (uint32_t*)(&V_3), /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_0046:
	{
		uint32_t L_16 = V_3;
		if ((!(((uint32_t)L_16) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsDomainAddress_m488D5642C2C83385D8536AEFBE1431010B59E463 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_IsDomainAddress_m488D5642C2C83385D8536AEFBE1431010B59E463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		String_t* L_2 = ___name0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_7 = Char_IsLetterOrDigit_m5A728C16BF66C4ADC4A33F91CFB0EA53D7C43A71(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		Il2CppChar L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		Il2CppChar L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsLetterOrDigit_m5A728C16BF66C4ADC4A33F91CFB0EA53D7C43A71(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		Il2CppChar L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		Il2CppChar L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		V_1 = L_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_006a;
		}
	}
	{
		return (bool)0;
	}

IL_006a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_CheckSchemeName_m0236F13E252237A7834FBF250101AE8EE62FBB5E (String_t* ___schemeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_CheckSchemeName_m0236F13E252237A7834FBF250101AE8EE62FBB5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ___schemeName0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___schemeName0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		String_t* L_3 = ___schemeName0;
		NullCheck(L_3);
		Il2CppChar L_4 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_3, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_5 = Uri_IsAlpha_m31F419EB2A4349DA41460DCFC381FE4EC0615B6B(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		String_t* L_6 = ___schemeName0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		String_t* L_8 = ___schemeName0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Il2CppChar L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsDigit_m64DFE12D7DCF1AC634EA805421E06B4B18E1C036(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		Il2CppChar L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_14 = Uri_IsAlpha_m31F419EB2A4349DA41460DCFC381FE4EC0615B6B(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		Il2CppChar L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return (bool)0;
	}

IL_006c:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsAlpha_m31F419EB2A4349DA41460DCFC381FE4EC0615B6B (Il2CppChar ___c0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return (bool)G_B7_0;
	}
}
// System.Boolean System.Uri::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Uri_Equals_mD0D5690B4C9A783C17A92FC9DC1F55EBEBE47379 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, RuntimeObject * ___comparant0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_Equals_mD0D5690B4C9A783C17A92FC9DC1F55EBEBE47379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___comparant0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___comparant0;
		V_0 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)IsInstClass((RuntimeObject*)L_1, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var));
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject * L_3 = ___comparant0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		String_t* L_4 = V_1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		String_t* L_5 = V_1;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_6 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002b:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_7 = V_0;
		bool L_8 = Uri_InternalEquals_mAC1DC6C549899943D34AC8DD48A3B098D3A650DA(__this, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_InternalEquals_mAC1DC6C549899943D34AC8DD48A3B098D3A650DA (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_InternalEquals_mAC1DC6C549899943D34AC8DD48A3B098D3A650DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * V_0 = NULL;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = __this->get_isAbsoluteUri_11();
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_1 = ___uri0;
		NullCheck(L_1);
		bool L_2 = L_1->get_isAbsoluteUri_11();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		bool L_3 = __this->get_isAbsoluteUri_11();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = __this->get_source_1();
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_5 = ___uri0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_source_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_8 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = __this->get_scheme_2();
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_9, L_10, /*hidden argument*/NULL);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_12 = ___uri0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_scheme_2();
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_11, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_17 = __this->get_host_3();
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_17, L_18, /*hidden argument*/NULL);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_20 = ___uri0;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_host_3();
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_19, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->get_port_4();
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_26 = ___uri0;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_port_4();
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_28 = __this->get_query_6();
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_29 = ___uri0;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_query_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_28, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_32 = __this->get_path_5();
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_33 = ___uri0;
		NullCheck(L_33);
		String_t* L_34 = L_33->get_path_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_32, L_34, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return (bool)G_B10_0;
	}
}
// System.Int32 System.Uri::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_GetHashCode_mBEC005B5F7AC842D6791AF4C15B26C6B460E9BAD (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetHashCode_mBEC005B5F7AC842D6791AF4C15B26C6B460E9BAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * V_0 = NULL;
	{
		int32_t L_0 = __this->get_cachedHashCode_15();
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_1 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = __this->get_isAbsoluteUri_11();
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_3 = __this->get_scheme_2();
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D(L_5, /*hidden argument*/NULL);
		String_t* L_7 = __this->get_host_3();
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D(L_9, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_port_4();
		String_t* L_12 = __this->get_query_6();
		NullCheck(L_12);
		int32_t L_13 = String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D(L_12, /*hidden argument*/NULL);
		String_t* L_14 = __this->get_path_5();
		NullCheck(L_14);
		int32_t L_15 = String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D(L_14, /*hidden argument*/NULL);
		__this->set_cachedHashCode_15(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_10))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15)));
		goto IL_007a;
	}

IL_0069:
	{
		String_t* L_16 = __this->get_source_1();
		NullCheck(L_16);
		int32_t L_17 = String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D(L_16, /*hidden argument*/NULL);
		__this->set_cachedHashCode_15(L_17);
	}

IL_007a:
	{
		int32_t L_18 = __this->get_cachedHashCode_15();
		return L_18;
	}
}
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_GetLeftPart_m553664DEDE7E131904A6A9EB9DD3C005BE41661C (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, int32_t ___part0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetLeftPart_m553664DEDE7E131904A6A9EB9DD3C005BE41661C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t * V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * V_5 = NULL;
	int32_t V_6 = 0;
	{
		Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___part0;
		V_3 = L_0;
		int32_t L_1 = V_3;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0134;
			}
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		String_t* L_2 = __this->get_scheme_2();
		String_t* L_3 = Uri_GetOpaqueWiseSchemeDelimiter_mA5F7CDD38ECF7B333BFC220727E0B628595B7FED(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		String_t* L_5 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeMailto_23();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_9 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNews_24();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_11;
	}

IL_0061:
	{
		StringBuilder_t * L_12 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		StringBuilder_t * L_13 = V_1;
		String_t* L_14 = __this->get_scheme_2();
		NullCheck(L_13);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_1;
		String_t* L_16 = Uri_GetOpaqueWiseSchemeDelimiter_mA5F7CDD38ECF7B333BFC220727E0B628595B7FED(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_15, L_16, /*hidden argument*/NULL);
		String_t* L_17 = __this->get_path_5();
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_19 = __this->get_path_5();
		NullCheck(L_19);
		Il2CppChar L_20 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_19, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_21 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		String_t* L_22 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		StringBuilder_t * L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_24, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_00c3:
	{
		String_t* L_25 = __this->get_userinfo_8();
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t * L_27 = V_1;
		String_t* L_28 = __this->get_userinfo_8();
		NullCheck(L_27);
		StringBuilder_t * L_29 = StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_29, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_00e8:
	{
		StringBuilder_t * L_30 = V_1;
		String_t* L_31 = __this->get_host_3();
		NullCheck(L_30);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_30, L_31, /*hidden argument*/NULL);
		String_t* L_32 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024(L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34 = __this->get_port_4();
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_35 = __this->get_port_4();
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_012d;
		}
	}
	{
		StringBuilder_t * L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t * L_38 = StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_37, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_39 = __this->get_port_4();
		NullCheck(L_38);
		StringBuilder_Append_mAB2D7FBCF37024E9F49A945C4646E1931D887928(L_38, L_39, /*hidden argument*/NULL);
	}

IL_012d:
	{
		StringBuilder_t * L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_0134:
	{
		StringBuilder_t * L_42 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97(L_42, /*hidden argument*/NULL);
		V_2 = L_42;
		StringBuilder_t * L_43 = V_2;
		String_t* L_44 = __this->get_scheme_2();
		NullCheck(L_43);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_43, L_44, /*hidden argument*/NULL);
		StringBuilder_t * L_45 = V_2;
		String_t* L_46 = Uri_GetOpaqueWiseSchemeDelimiter_mA5F7CDD38ECF7B333BFC220727E0B628595B7FED(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_45, L_46, /*hidden argument*/NULL);
		String_t* L_47 = __this->get_path_5();
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		String_t* L_49 = __this->get_path_5();
		NullCheck(L_49);
		Il2CppChar L_50 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_49, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_51 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		String_t* L_52 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0196;
		}
	}
	{
		StringBuilder_t * L_54 = V_2;
		NullCheck(L_54);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_54, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0196:
	{
		String_t* L_55 = __this->get_userinfo_8();
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		StringBuilder_t * L_57 = V_2;
		String_t* L_58 = __this->get_userinfo_8();
		NullCheck(L_57);
		StringBuilder_t * L_59 = StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_59, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_01bb:
	{
		StringBuilder_t * L_60 = V_2;
		String_t* L_61 = __this->get_host_3();
		NullCheck(L_60);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_60, L_61, /*hidden argument*/NULL);
		String_t* L_62 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_63 = Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024(L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		int32_t L_64 = __this->get_port_4();
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_65 = __this->get_port_4();
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0200;
		}
	}
	{
		StringBuilder_t * L_67 = V_2;
		NullCheck(L_67);
		StringBuilder_t * L_68 = StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_67, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_69 = __this->get_port_4();
		NullCheck(L_68);
		StringBuilder_Append_mAB2D7FBCF37024E9F49A945C4646E1931D887928(L_68, L_69, /*hidden argument*/NULL);
	}

IL_0200:
	{
		String_t* L_70 = __this->get_path_5();
		NullCheck(L_70);
		int32_t L_71 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_70, /*hidden argument*/NULL);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		String_t* L_72 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(__this, /*hidden argument*/NULL);
		V_4 = L_72;
		String_t* L_73 = V_4;
		if (!L_73)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_74 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map14_31();
		if (L_74)
		{
			goto IL_0253;
		}
	}
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_75 = (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *)il2cpp_codegen_object_new(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF(L_75, 2, /*hidden argument*/Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var);
		V_5 = L_75;
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_76 = V_5;
		NullCheck(L_76);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_76, _stringLiteralFE710CD089CB0BA74F588270FE079A392B5E9810, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_77 = V_5;
		NullCheck(L_77);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_77, _stringLiteral3C6BDCDDC94F64BF77DEB306AAE490A90A6FC300, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map14_31(L_78);
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_79 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map14_31();
		String_t* L_80 = V_4;
		NullCheck(L_79);
		bool L_81 = Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF(L_79, L_80, (int32_t*)(&V_6), /*hidden argument*/Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var);
		if (!L_81)
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_82 = V_6;
		if (!L_82)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		StringBuilder_t * L_83 = V_2;
		String_t* L_84 = __this->get_path_5();
		NullCheck(L_83);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_83, L_84, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_0284:
	{
		StringBuilder_t * L_85 = V_2;
		String_t* L_86 = __this->get_path_5();
		String_t* L_87 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_88 = Uri_CompactEscaped_m33BD25DDB850060AA07417820FB81ED68180F271(L_87, /*hidden argument*/NULL);
		String_t* L_89 = Uri_Reduce_m47AB24CD60A069202994F361E3F2ACF218D358A1(L_86, L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_85, L_89, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_02a6:
	{
		StringBuilder_t * L_90 = V_2;
		NullCheck(L_90);
		String_t* L_91 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_90, /*hidden argument*/NULL);
		return L_91;
	}

IL_02ad:
	{
		return (String_t*)NULL;
	}
}
// System.Int32 System.Uri::FromHex(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC (Il2CppChar ___digit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___digit0;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		Il2CppChar L_1 = ___digit0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		Il2CppChar L_2 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
	}

IL_0015:
	{
		Il2CppChar L_3 = ___digit0;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		Il2CppChar L_4 = ___digit0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		Il2CppChar L_5 = ___digit0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)97))), (int32_t)((int32_t)10)));
	}

IL_002d:
	{
		Il2CppChar L_6 = ___digit0;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppChar L_7 = ___digit0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppChar L_8 = ___digit0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)65))), (int32_t)((int32_t)10)));
	}

IL_0045:
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_9 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_9, _stringLiteralDCB93BD72059500C1226AD16FDD58FFE25C9E0EA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC_RuntimeMethod_var);
	}
}
// System.String System.Uri::HexEscape(System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_HexEscape_mC0E62F8B4655BA6F27AE9CCFE683810D58B9E047 (Il2CppChar ___character0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_HexEscape_mC0E62F8B4655BA6F27AE9CCFE683810D58B9E047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___character0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_1 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_1, _stringLiteralF0DB3FA401AEA04B711D6F1F3630552EAAEE8E59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Uri_HexEscape_mC0E62F8B4655BA6F27AE9CCFE683810D58B9E047_RuntimeMethod_var);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_hexUpperChars_16();
		Il2CppChar L_3 = ___character0;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_2, ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)240)))>>(int32_t)4)), /*hidden argument*/NULL);
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_hexUpperChars_16();
		Il2CppChar L_8 = ___character0;
		NullCheck(L_7);
		Il2CppChar L_9 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		Il2CppChar L_10 = L_9;
		RuntimeObject * L_11 = Box(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m4DCBCD433A2B74064ACE6E3F072C6A0A1B52E280(_stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B, L_6, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsHexDigit_m8B98A52C92CBB8103BA20A3B03F54B7DDC062A32 (Il2CppChar ___digit0, const RuntimeMethod* method)
{
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		Il2CppChar L_0 = ___digit0;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar L_1 = ___digit0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		Il2CppChar L_2 = ___digit0;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar L_3 = ___digit0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		Il2CppChar L_4 = ___digit0;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		Il2CppChar L_5 = ___digit0;
		G_B7_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return (bool)G_B9_0;
	}
}
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsHexEncoding_m8490687F97773ED8AA8134E10B82741673EDF3E6 (String_t* ___pattern0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_IsHexEncoding_m8490687F97773ED8AA8134E10B82741673EDF3E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___index1;
		String_t* L_1 = ___pattern0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3))) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		String_t* L_3 = ___pattern0;
		int32_t L_4 = ___index1;
		int32_t L_5 = L_4;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		NullCheck(L_3);
		Il2CppChar L_6 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_3, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_7 = ___pattern0;
		int32_t L_8 = ___index1;
		int32_t L_9 = L_8;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		Il2CppChar L_10 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_11 = Uri_IsHexDigit_m8B98A52C92CBB8103BA20A3B03F54B7DDC062A32(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___pattern0;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		Il2CppChar L_14 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_15 = Uri_IsHexDigit_m8B98A52C92CBB8103BA20A3B03F54B7DDC062A32(L_14, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return (bool)G_B6_0;
	}
}
// System.Void System.Uri::AppendQueryAndFragment(System.StringU26)
extern "C" IL2CPP_METHOD_ATTR void Uri_AppendQueryAndFragment_mC4DA381930B43CB56B1EABF561EBF10915D24BAB (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t** ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_AppendQueryAndFragment_mC4DA381930B43CB56B1EABF561EBF10915D24BAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		String_t* L_0 = __this->get_query_6();
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_2 = __this->get_query_6();
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0047;
		}
	}
	{
		Il2CppChar L_4 = ((Il2CppChar)((int32_t)63));
		RuntimeObject * L_5 = Box(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = __this->get_query_6();
		NullCheck(L_6);
		String_t* L_7 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_6, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_8 = Uri_Unescape_mD61168C7FD8597DE9B7F2FF7F8C201E6B8B4CDB2(L_7, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(L_5, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		String_t* L_10 = __this->get_query_6();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_11 = Uri_Unescape_mD61168C7FD8597DE9B7F2FF7F8C201E6B8B4CDB2(L_10, (bool)0, /*hidden argument*/NULL);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		String_t** L_12 = ___result0;
		String_t** L_13 = ___result0;
		String_t* L_14 = *((String_t**)L_13);
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_14, L_15, /*hidden argument*/NULL);
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_16;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_12, (RuntimeObject *)L_16);
	}

IL_005e:
	{
		String_t* L_17 = __this->get_fragment_7();
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t** L_19 = ___result0;
		String_t** L_20 = ___result0;
		String_t* L_21 = *((String_t**)L_20);
		String_t* L_22 = __this->get_fragment_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_21, L_22, /*hidden argument*/NULL);
		*((RuntimeObject **)L_19) = (RuntimeObject *)L_23;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_19, (RuntimeObject *)L_23);
	}

IL_007e:
	{
		return;
	}
}
// System.String System.Uri::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_ToString_m10EE6A7943637E08F409E245D5680FE6D65CA8F4 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_ToString_m10EE6A7943637E08F409E245D5680FE6D65CA8F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_cachedToString_14();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->get_cachedToString_14();
		return L_1;
	}

IL_0012:
	{
		bool L_2 = __this->get_isAbsoluteUri_11();
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = Uri_GetLeftPart_m553664DEDE7E131904A6A9EB9DD3C005BE41661C(__this, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_Unescape_mD61168C7FD8597DE9B7F2FF7F8C201E6B8B4CDB2(L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_cachedToString_14(L_4);
		goto IL_0047;
	}

IL_0035:
	{
		String_t* L_5 = __this->get_path_5();
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_5);
		__this->set_cachedToString_14(L_6);
	}

IL_0047:
	{
		String_t** L_7 = __this->get_address_of_cachedToString_14();
		Uri_AppendQueryAndFragment_mC4DA381930B43CB56B1EABF561EBF10915D24BAB(__this, (String_t**)L_7, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_cachedToString_14();
		return L_8;
	}
}
// System.String System.Uri::EscapeString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994 (String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_EscapeString_m5ED2E2609B29C064B8CC6E04D33E29DD849D65B2(L_0, (bool)0, (bool)1, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeString_m5ED2E2609B29C064B8CC6E04D33E29DD849D65B2 (String_t* ___str0, bool ___escapeReserved1, bool ___escapeHex2, bool ___escapeBrackets3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_EscapeString_m5ED2E2609B29C064B8CC6E04D33E29DD849D65B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		String_t* L_5 = ___str0;
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_7 = Uri_IsHexEncoding_m8490687F97773ED8AA8134E10B82741673EDF3E6(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t * L_8 = V_0;
		String_t* L_9 = ___str0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_9, L_10, 3, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_8, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_13 = Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845(/*hidden argument*/NULL);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_14 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_15 = L_14;
		String_t* L_16 = ___str0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppChar L_18 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_18);
		NullCheck(L_13);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_19 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* >::Invoke(12 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_13, L_15);
		V_3 = L_19;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_20 = V_3;
		NullCheck(L_20);
		V_4 = (((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length))));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_21 = V_3;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = (((int32_t)((uint16_t)L_24)));
		Il2CppChar L_25 = V_6;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_26 = V_6;
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_27 = V_6;
		NullCheck(_stringLiteral708F6643054B8FB8CE28A3B8F79FA57543BA520C);
		int32_t L_28 = String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21(_stringLiteral708F6643054B8FB8CE28A3B8F79FA57543BA520C, L_27, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		bool L_29 = ___escapeHex2;
		if (!L_29)
		{
			goto IL_00a6;
		}
	}
	{
		Il2CppChar L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		bool L_31 = ___escapeBrackets3;
		if (!L_31)
		{
			goto IL_00be;
		}
	}
	{
		Il2CppChar L_32 = V_6;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_33 = V_6;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		bool L_34 = ___escapeReserved1;
		if (!L_34)
		{
			goto IL_00e9;
		}
	}
	{
		Il2CppChar L_35 = V_6;
		NullCheck(_stringLiteral422C2FC455DA8AB1CCF099E014DADE733913E48A);
		int32_t L_36 = String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21(_stringLiteral422C2FC455DA8AB1CCF099E014DADE733913E48A, L_35, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		StringBuilder_t * L_37 = V_0;
		Il2CppChar L_38 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_39 = Uri_HexEscape_mC0E62F8B4655BA6F27AE9CCFE683810D58B9E047(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_37, L_39, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00e9:
	{
		StringBuilder_t * L_40 = V_0;
		Il2CppChar L_41 = V_6;
		NullCheck(L_40);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_40, L_41, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00f8:
	{
		int32_t L_43 = V_5;
		int32_t L_44 = V_4;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0105:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t * L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_48, /*hidden argument*/NULL);
		return L_49;
	}
}
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, int32_t ___kind0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseUri_m16EDB1C6625420DDDFC2C9B92EB4ED009363DBE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___kind0;
		String_t* L_1 = __this->get_source_1();
		Uri_Parse_m17C7D7554D04AF47A000D1A9731C2867E2F131D2(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_userEscaped_12();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		String_t* L_3 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_EscapeString_m5ED2E2609B29C064B8CC6E04D33E29DD849D65B2(L_3, (bool)0, (bool)1, (bool)0, /*hidden argument*/NULL);
		__this->set_host_3(L_4);
		String_t* L_5 = __this->get_host_3();
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_7 = __this->get_host_3();
		NullCheck(L_7);
		Il2CppChar L_8 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_7, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_9 = __this->get_host_3();
		String_t* L_10 = __this->get_host_3();
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Il2CppChar L_12 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_13 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_14 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_13, L_14, /*hidden argument*/NULL);
		__this->set_host_3(L_15);
	}

IL_0086:
	{
		String_t* L_16 = __this->get_path_5();
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_18 = __this->get_path_5();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_19 = Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994(L_18, /*hidden argument*/NULL);
		__this->set_path_5(L_19);
	}

IL_00a8:
	{
		return;
	}
}
// System.String System.Uri::Unescape(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_Unescape_mB85752844CB7ABFA81F17C85695AA10DE7E209CC (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_Unescape_mB85752844CB7ABFA81F17C85695AA10DE7E209CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_Unescape_mD61168C7FD8597DE9B7F2FF7F8C201E6B8B4CDB2(L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_Unescape_mD61168C7FD8597DE9B7F2FF7F8C201E6B8B4CDB2 (String_t* ___str0, bool ___excludeSpecial1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_Unescape_mD61168C7FD8597DE9B7F2FF7F8C201E6B8B4CDB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		String_t* L_5 = ___str0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		Il2CppChar L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_9 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Il2CppChar L_10 = Uri_HexUnescapeMultiByte_m73131CB46572E5B039C1D5995D31843F8F666104(L_9, (int32_t*)(&V_2), (Il2CppChar*)(&V_4), /*hidden argument*/NULL);
		V_5 = L_10;
		bool L_11 = ___excludeSpecial1;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		Il2CppChar L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_13, _stringLiteralA344EB862EDAF46575E15EE2886B9096722B09BB, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_005c:
	{
		bool L_14 = ___excludeSpecial1;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		Il2CppChar L_15 = V_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_16, _stringLiteral491250A42D9C426A51B2E0B368ED13A8852DA792, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_007c:
	{
		bool L_17 = ___excludeSpecial1;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_19, _stringLiteral8F77E4EFE6A7A430F2E573E88BC566FF93C94EBD, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_009c:
	{
		StringBuilder_t * L_20 = V_0;
		Il2CppChar L_21 = V_5;
		NullCheck(L_20);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_20, L_21, /*hidden argument*/NULL);
		Il2CppChar L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t * L_23 = V_0;
		Il2CppChar L_24 = V_4;
		NullCheck(L_23);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t * L_26 = V_0;
		Il2CppChar L_27 = V_3;
		NullCheck(L_26);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00ca:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri_ParseAsWindowsUNC_mFC057DEC89ECCCD98D77E80742AE38BD1068C695 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseAsWindowsUNC_mFC057DEC89ECCCD98D77E80742AE38BD1068C695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		__this->set_scheme_2(L_0);
		__this->set_port_4((-1));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_fragment_7(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_query_6(L_2);
		__this->set_isUnc_9((bool)1);
		String_t* L_3 = ___uriString0;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_4 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		NullCheck(L_3);
		String_t* L_6 = String_TrimStart_mC1034F349006223A281FDE8A774DB98F95D99D0C(L_3, L_5, /*hidden argument*/NULL);
		___uriString0 = L_6;
		String_t* L_7 = ___uriString0;
		NullCheck(L_7);
		int32_t L_8 = String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21(L_7, ((int32_t)92), /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_10 = ___uriString0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		String_t* L_12 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_10, L_11, /*hidden argument*/NULL);
		__this->set_path_5(L_12);
		String_t* L_13 = ___uriString0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_13, 0, L_14, /*hidden argument*/NULL);
		__this->set_host_3(L_15);
		goto IL_0084;
	}

IL_0072:
	{
		String_t* L_16 = ___uriString0;
		__this->set_host_3(L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_path_5(L_17);
	}

IL_0084:
	{
		String_t* L_18 = __this->get_path_5();
		NullCheck(L_18);
		String_t* L_19 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_18, _stringLiteral08534F33C201A45017B502E90A800F1B708EBCB3, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		__this->set_path_5(L_19);
		return;
	}
}
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_ParseAsWindowsAbsoluteFilePath_m083C87912CF5C124EBBA97F12801251BDD993548 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseAsWindowsAbsoluteFilePath_m083C87912CF5C124EBBA97F12801251BDD993548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___uriString0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_2 = ___uriString0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_2, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___uriString0;
		NullCheck(L_4);
		Il2CppChar L_5 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_4, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return _stringLiteral54C2C38D88D2E354696E8C57A3D0EF59BC811C43;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		__this->set_scheme_2(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_7);
		__this->set_port_4((-1));
		String_t* L_8 = ___uriString0;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_8, _stringLiteral08534F33C201A45017B502E90A800F1B708EBCB3, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		__this->set_path_5(L_9);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_fragment_7(L_10);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_query_6(L_11);
		return (String_t*)NULL;
	}
}
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri_ParseAsUnixAbsoluteFilePath_mAF808B2FB6ADE510143CB4ECFD81BCC654A866E5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* ___uriString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseAsUnixAbsoluteFilePath_mAF808B2FB6ADE510143CB4ECFD81BCC654A866E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isUnixFilePath_0((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		__this->set_scheme_2(L_0);
		__this->set_port_4((-1));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_fragment_7(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_query_6(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_3);
		__this->set_path_5((String_t*)NULL);
		String_t* L_4 = ___uriString0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_6 = ___uriString0;
		NullCheck(L_6);
		Il2CppChar L_7 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_8 = ___uriString0;
		NullCheck(L_8);
		Il2CppChar L_9 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_8, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_10 = ___uriString0;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_11 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_10);
		String_t* L_13 = String_TrimStart_mC1034F349006223A281FDE8A774DB98F95D99D0C(L_10, L_12, /*hidden argument*/NULL);
		___uriString0 = L_13;
		Il2CppChar L_14 = ((Il2CppChar)((int32_t)47));
		RuntimeObject * L_15 = Box(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = ___uriString0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(L_15, L_16, /*hidden argument*/NULL);
		__this->set_path_5(L_17);
	}

IL_008f:
	{
		String_t* L_18 = __this->get_path_5();
		if (L_18)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_19 = ___uriString0;
		__this->set_path_5(L_19);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri_Parse_m17C7D7554D04AF47A000D1A9731C2867E2F131D2 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, int32_t ___kind0, String_t* ___uriString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_Parse_m17C7D7554D04AF47A000D1A9731C2867E2F131D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___uriString1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral1F4720FAD79F872C31915A9E641A32E766A2357D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Uri_Parse_m17C7D7554D04AF47A000D1A9731C2867E2F131D2_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___kind0;
		String_t* L_3 = ___uriString1;
		String_t* L_4 = Uri_ParseNoExceptions_m73BE7C445B69BD04762298CE1DDED154034D33A5(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = V_0;
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * L_7 = (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 *)il2cpp_codegen_object_new(UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mD721BBD61E5643DF05FE9B8163D2EEE5F297BBEF(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Uri_Parse_m17C7D7554D04AF47A000D1A9731C2867E2F131D2_RuntimeMethod_var);
	}

IL_0027:
	{
		return;
	}
}
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_ParseNoExceptions_m73BE7C445B69BD04762298CE1DDED154034D33A5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, int32_t ___kind0, String_t* ___uriString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseNoExceptions_m73BE7C445B69BD04762298CE1DDED154034D33A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	bool V_11 = false;
	IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * V_12 = NULL;
	UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * V_13 = NULL;
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		String_t* L_0 = ___uriString1;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m464DC8002C401320991043FC1AD572A434A6EF76(L_0, /*hidden argument*/NULL);
		___uriString1 = L_1;
		String_t* L_2 = ___uriString1;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___kind0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___kind0;
		if (L_6)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->set_isAbsoluteUri_11((bool)0);
		return (String_t*)NULL;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = ___kind0;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return _stringLiteral0F028D1B7BE7310FF86008FE572D82F8778E472C;
	}

IL_003f:
	{
		V_1 = 0;
		String_t* L_9 = ___uriString1;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21(L_9, ((int32_t)58), /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		return _stringLiteralCE99D95F1E4BAA4F4417D18FD42F407DA2C676F5;
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_13 = ___uriString1;
		NullCheck(L_13);
		Il2CppChar L_14 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_13, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var);
		Il2CppChar L_15 = ((Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_StaticFields*)il2cpp_codegen_static_fields_for(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var))->get_DirectorySeparatorChar_2();
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_16 = ___uriString1;
		Uri_ParseAsUnixAbsoluteFilePath_mAF808B2FB6ADE510143CB4ECFD81BCC654A866E5(__this, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___kind0;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		__this->set_isAbsoluteUri_11((bool)0);
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		String_t* L_18 = ___uriString1;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_20 = ___uriString1;
		NullCheck(L_20);
		Il2CppChar L_21 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_20, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_22 = ___uriString1;
		NullCheck(L_22);
		Il2CppChar L_23 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_22, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_24 = ___uriString1;
		Uri_ParseAsWindowsUNC_mFC057DEC89ECCCD98D77E80742AE38BD1068C695(__this, L_24, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->set_isAbsoluteUri_11((bool)0);
		String_t* L_25 = ___uriString1;
		__this->set_path_5(L_25);
	}

IL_00d3:
	{
		return (String_t*)NULL;
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_27 = ___uriString1;
		NullCheck(L_27);
		Il2CppChar L_28 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_27, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_29 = Uri_IsAlpha_m31F419EB2A4349DA41460DCFC381FE4EC0615B6B(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		return _stringLiteralD7C85A9579B23EF7037B724BBD18AD19370C0014;
	}

IL_00f3:
	{
		String_t* L_30 = ___uriString1;
		String_t* L_31 = Uri_ParseAsWindowsAbsoluteFilePath_m083C87912CF5C124EBBA97F12801251BDD993548(__this, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_2;
		if (!L_32)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_33 = V_2;
		return L_33;
	}

IL_0103:
	{
		return (String_t*)NULL;
	}

IL_0105:
	{
		String_t* L_34 = ___uriString1;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		String_t* L_36 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_34, 0, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_37 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_38 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_36, L_37, /*hidden argument*/NULL);
		__this->set_scheme_2(L_38);
		String_t* L_39 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_40 = Uri_CheckSchemeName_m0236F13E252237A7834FBF250101AE8EE62FBB5E(L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_41 = Locale_GetText_m6988B533095C05B662AF80DC985DEAF94142CA02(_stringLiteralF96334EC4A63785C72E2AC5126A9A037CF461D8B, /*hidden argument*/NULL);
		return L_41;
	}

IL_0138:
	{
		int32_t L_42 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		String_t* L_43 = ___uriString1;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		String_t* L_45 = ___uriString1;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = String_IndexOf_mC6529655AB4CBF682EAC467D3A6D9F40B8498F3F(L_45, ((int32_t)35), L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		bool L_48 = Uri_get_IsUnc_m9B22A48A07AAC67808A3B766C11DE5E583239870(__this, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_50 = __this->get_userEscaped_12();
		if (!L_50)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_51 = ___uriString1;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_51, L_52, /*hidden argument*/NULL);
		__this->set_fragment_7(L_53);
		goto IL_019b;
	}

IL_017d:
	{
		String_t* L_54 = ___uriString1;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		String_t* L_56 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_54, ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_57 = Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994(L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(_stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841, L_57, /*hidden argument*/NULL);
		__this->set_fragment_7(L_58);
	}

IL_019b:
	{
		int32_t L_59 = V_1;
		V_4 = L_59;
	}

IL_019e:
	{
		String_t* L_60 = ___uriString1;
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		NullCheck(L_60);
		int32_t L_64 = String_IndexOf_m06C9C97E7277BC496737C70A40BECBB4060B4F2E(L_60, ((int32_t)63), L_61, ((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_63)), /*hidden argument*/NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_66 = ___uriString1;
		int32_t L_67 = V_1;
		int32_t L_68 = V_4;
		int32_t L_69 = V_1;
		NullCheck(L_66);
		String_t* L_70 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_66, L_67, ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)L_69)), /*hidden argument*/NULL);
		__this->set_query_6(L_70);
		int32_t L_71 = V_1;
		V_4 = L_71;
		bool L_72 = __this->get_userEscaped_12();
		if (L_72)
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_73 = __this->get_query_6();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_74 = Uri_EscapeString_m68AD3529ECDDB9B8069798A0330E427B0200C994(L_73, /*hidden argument*/NULL);
		__this->set_query_6(L_74);
	}

IL_01e3:
	{
		String_t* L_75 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_76 = Uri_IsPredefinedScheme_m44BBB3DFC5E743BC6645A5AF0ACEC94FD408D529(L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_77 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_78 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeMailto_23();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_79 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_80 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_81 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNews_24();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_80, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_83 = V_4;
		int32_t L_84 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)L_84))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)L_86))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_87 = ___uriString1;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		Il2CppChar L_89 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_87, L_88, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_90 = ___uriString1;
		int32_t L_91 = V_3;
		NullCheck(L_90);
		Il2CppChar L_92 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_90, ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return _stringLiteral7F3FCF1A5013858257C1B9FA458921FE236B6E21;
	}

IL_0255:
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)L_94))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_95 = ___uriString1;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		Il2CppChar L_97 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_95, L_96, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_98 = ___uriString1;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		Il2CppChar L_100 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_98, ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1)), /*hidden argument*/NULL);
		G_B50_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = (bool)G_B50_0;
		String_t* L_101 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_102 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_103 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_101, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_02b7;
		}
	}
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)L_106))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		String_t* L_107 = ___uriString1;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		Il2CppChar L_109 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_107, ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)2)), /*hidden argument*/NULL);
		G_B55_0 = ((((int32_t)L_109) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = (bool)G_B57_0;
		V_7 = (bool)0;
		bool L_110 = V_5;
		if (!L_110)
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_111 = ___kind0;
		if ((!(((uint32_t)L_111) == ((uint32_t)2))))
		{
			goto IL_02d1;
		}
	}
	{
		return _stringLiteralE50080AF9DEC68DFE76AF92C7B4C242A884C94B1;
	}

IL_02d1:
	{
		String_t* L_112 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_113 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeMailto_23();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_114 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_112, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_02ff;
		}
	}
	{
		String_t* L_115 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_116 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNews_24();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_117 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_115, L_116, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_118 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)2));
	}

IL_02ff:
	{
		String_t* L_119 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_120 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_121 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_119, L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		int32_t L_122 = V_3;
		V_9 = L_122;
		goto IL_033f;
	}

IL_031f:
	{
		String_t* L_123 = ___uriString1;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		Il2CppChar L_125 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_123, L_124, /*hidden argument*/NULL);
		if ((((int32_t)L_125) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		int32_t L_126 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
	}

IL_033f:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_4;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		int32_t L_130 = V_8;
		if ((((int32_t)L_130) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_035c;
	}

IL_0358:
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
	}

IL_035c:
	{
		int32_t L_132 = V_3;
		int32_t L_133 = V_4;
		if ((((int32_t)L_132) >= ((int32_t)L_133)))
		{
			goto IL_0372;
		}
	}
	{
		String_t* L_134 = ___uriString1;
		int32_t L_135 = V_3;
		NullCheck(L_134);
		Il2CppChar L_136 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_134, L_135, /*hidden argument*/NULL);
		if ((((int32_t)L_136) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		int32_t L_137 = V_8;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_138 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
	}

IL_0383:
	{
		int32_t L_139 = V_4;
		int32_t L_140 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)L_140))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		String_t* L_141 = ___uriString1;
		int32_t L_142 = V_3;
		NullCheck(L_141);
		Il2CppChar L_143 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_141, ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = (bool)0;
		V_7 = (bool)1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		String_t* L_144 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_145 = Uri_IsPredefinedScheme_m44BBB3DFC5E743BC6645A5AF0ACEC94FD408D529(L_144, /*hidden argument*/NULL);
		if (L_145)
		{
			goto IL_03d2;
		}
	}
	{
		String_t* L_146 = ___uriString1;
		int32_t L_147 = V_3;
		int32_t L_148 = V_4;
		int32_t L_149 = V_3;
		NullCheck(L_146);
		String_t* L_150 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_146, L_147, ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)L_149)), /*hidden argument*/NULL);
		__this->set_path_5(L_150);
		__this->set_isOpaquePart_10((bool)1);
		return (String_t*)NULL;
	}

IL_03d2:
	{
		bool L_151 = V_6;
		if (!L_151)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		String_t* L_152 = ___uriString1;
		int32_t L_153 = V_3;
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		NullCheck(L_152);
		int32_t L_156 = String_IndexOf_m06C9C97E7277BC496737C70A40BECBB4060B4F2E(L_152, ((int32_t)47), L_153, ((int32_t)il2cpp_codegen_subtract((int32_t)L_154, (int32_t)L_155)), /*hidden argument*/NULL);
		V_1 = L_156;
		int32_t L_157 = V_1;
		if ((!(((uint32_t)L_157) == ((uint32_t)(-1)))))
		{
			goto IL_040a;
		}
	}
	{
		bool L_158 = V_7;
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		String_t* L_159 = ___uriString1;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		int32_t L_162 = V_3;
		NullCheck(L_159);
		int32_t L_163 = String_IndexOf_m06C9C97E7277BC496737C70A40BECBB4060B4F2E(L_159, ((int32_t)92), L_160, ((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)L_162)), /*hidden argument*/NULL);
		V_1 = L_163;
	}

IL_040a:
	{
		int32_t L_164 = V_1;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_044b;
		}
	}
	{
		String_t* L_165 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_166 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeMailto_23();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_167 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_165, L_166, /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_0446;
		}
	}
	{
		String_t* L_168 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_169 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNews_24();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_170 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_168, L_169, /*hidden argument*/NULL);
		if (!L_170)
		{
			goto IL_0446;
		}
	}
	{
		__this->set_path_5(_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		String_t* L_171 = ___uriString1;
		int32_t L_172 = V_1;
		int32_t L_173 = V_4;
		int32_t L_174 = V_1;
		NullCheck(L_171);
		String_t* L_175 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_171, L_172, ((int32_t)il2cpp_codegen_subtract((int32_t)L_173, (int32_t)L_174)), /*hidden argument*/NULL);
		__this->set_path_5(L_175);
		int32_t L_176 = V_1;
		V_4 = L_176;
	}

IL_045f:
	{
		bool L_177 = V_6;
		if (!L_177)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		String_t* L_178 = ___uriString1;
		int32_t L_179 = V_3;
		int32_t L_180 = V_4;
		int32_t L_181 = V_3;
		NullCheck(L_178);
		int32_t L_182 = String_IndexOf_m06C9C97E7277BC496737C70A40BECBB4060B4F2E(L_178, ((int32_t)64), L_179, ((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)L_181)), /*hidden argument*/NULL);
		V_1 = L_182;
	}

IL_047b:
	{
		int32_t L_183 = V_1;
		if ((((int32_t)L_183) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		String_t* L_184 = ___uriString1;
		int32_t L_185 = V_3;
		int32_t L_186 = V_1;
		int32_t L_187 = V_3;
		NullCheck(L_184);
		String_t* L_188 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_184, L_185, ((int32_t)il2cpp_codegen_subtract((int32_t)L_186, (int32_t)L_187)), /*hidden argument*/NULL);
		__this->set_userinfo_8(L_188);
		int32_t L_189 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)1));
	}

IL_0496:
	{
		__this->set_port_4((-1));
		bool L_190 = V_6;
		if (!L_190)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		String_t* L_191 = ___uriString1;
		int32_t L_192 = V_4;
		int32_t L_193 = V_4;
		int32_t L_194 = V_3;
		NullCheck(L_191);
		int32_t L_195 = String_LastIndexOf_m5428D282A0F2C94FF1CFC7E16A7CF705BDA84EE6(L_191, ((int32_t)58), ((int32_t)il2cpp_codegen_subtract((int32_t)L_192, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_193, (int32_t)L_194)), /*hidden argument*/NULL);
		V_1 = L_195;
	}

IL_04bc:
	{
		int32_t L_196 = V_1;
		if ((((int32_t)L_196) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_197 = V_1;
		int32_t L_198 = V_4;
		if ((((int32_t)L_197) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)1)))))
		{
			goto IL_0566;
		}
	}
	{
		String_t* L_199 = ___uriString1;
		int32_t L_200 = V_1;
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		NullCheck(L_199);
		String_t* L_203 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_199, ((int32_t)il2cpp_codegen_add((int32_t)L_200, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_201, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_202, (int32_t)1)))), /*hidden argument*/NULL);
		V_10 = L_203;
		String_t* L_204 = V_10;
		NullCheck(L_204);
		int32_t L_205 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_204, /*hidden argument*/NULL);
		if ((((int32_t)L_205) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_206 = V_10;
		String_t* L_207 = V_10;
		NullCheck(L_207);
		int32_t L_208 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_207, /*hidden argument*/NULL);
		NullCheck(L_206);
		Il2CppChar L_209 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_206, ((int32_t)il2cpp_codegen_subtract((int32_t)L_208, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_209) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_210 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_211 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		int32_t* L_212 = __this->get_address_of_port_4();
		bool L_213 = Int32_TryParse_mD6E6D48015D384A32C1910561B9EFD07EF9E522B(L_210, 7, L_211, (int32_t*)L_212, /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_214 = __this->get_port_4();
		if ((((int32_t)L_214) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_215 = __this->get_port_4();
		if ((((int32_t)L_215) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return _stringLiteralB9F98D22A9121E9E6347B01F8C6646D72D21239A;
	}

IL_053c:
	{
		int32_t L_216 = V_1;
		V_4 = L_216;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_217 = __this->get_port_4();
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_0561;
		}
	}
	{
		String_t* L_218 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_219 = Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024(L_218, /*hidden argument*/NULL);
		__this->set_port_4(L_219);
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_220 = __this->get_port_4();
		if ((!(((uint32_t)L_220) == ((uint32_t)(-1)))))
		{
			goto IL_0583;
		}
	}
	{
		String_t* L_221 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_222 = Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024(L_221, /*hidden argument*/NULL);
		__this->set_port_4(L_222);
	}

IL_0583:
	{
		String_t* L_223 = ___uriString1;
		int32_t L_224 = V_3;
		int32_t L_225 = V_4;
		int32_t L_226 = V_3;
		NullCheck(L_223);
		String_t* L_227 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_223, L_224, ((int32_t)il2cpp_codegen_subtract((int32_t)L_225, (int32_t)L_226)), /*hidden argument*/NULL);
		___uriString1 = L_227;
		String_t* L_228 = ___uriString1;
		__this->set_host_3(L_228);
		bool L_229 = V_6;
		if (!L_229)
		{
			goto IL_05c7;
		}
	}
	{
		Il2CppChar L_230 = ((Il2CppChar)((int32_t)47));
		RuntimeObject * L_231 = Box(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var, &L_230);
		String_t* L_232 = ___uriString1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_233 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(L_231, L_232, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_234 = Uri_Reduce_m47AB24CD60A069202994F361E3F2ACF218D358A1(L_233, (bool)1, /*hidden argument*/NULL);
		__this->set_path_5(L_234);
		String_t* L_235 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_235);
		goto IL_071c;
	}

IL_05c7:
	{
		String_t* L_236 = __this->get_host_3();
		NullCheck(L_236);
		int32_t L_237 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_236, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_237) == ((uint32_t)2))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_238 = __this->get_host_3();
		NullCheck(L_238);
		Il2CppChar L_239 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_238, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_239) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_240 = __this->get_host_3();
		String_t* L_241 = __this->get_path_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_242 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_240, L_241, /*hidden argument*/NULL);
		__this->set_path_5(L_242);
		String_t* L_243 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_243);
		goto IL_071c;
	}

IL_0612:
	{
		bool L_244 = __this->get_isUnixFilePath_0();
		if (!L_244)
		{
			goto IL_063a;
		}
	}
	{
		String_t* L_245 = ___uriString1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_246 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(_stringLiteralEBBFFB7D7EA5362A22BFA1BAB0BFDEB1617CD610, L_245, /*hidden argument*/NULL);
		___uriString1 = L_246;
		String_t* L_247 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_247);
		goto IL_071c;
	}

IL_063a:
	{
		String_t* L_248 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_249 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_250 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_248, L_249, /*hidden argument*/NULL);
		if (!L_250)
		{
			goto IL_065b;
		}
	}
	{
		__this->set_isUnc_9((bool)1);
		goto IL_071c;
	}

IL_065b:
	{
		String_t* L_251 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_252 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNews_24();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_253 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_251, L_252, /*hidden argument*/NULL);
		if (!L_253)
		{
			goto IL_069d;
		}
	}
	{
		String_t* L_254 = __this->get_host_3();
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_254, /*hidden argument*/NULL);
		if ((((int32_t)L_255) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		String_t* L_256 = __this->get_host_3();
		__this->set_path_5(L_256);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_257 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_host_3(L_257);
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		String_t* L_258 = __this->get_host_3();
		NullCheck(L_258);
		int32_t L_259 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_258, /*hidden argument*/NULL);
		if (L_259)
		{
			goto IL_071c;
		}
	}
	{
		String_t* L_260 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_261 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeHttp_21();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_262 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_260, L_261, /*hidden argument*/NULL);
		if (L_262)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_263 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_264 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeGopher_20();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_265 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_263, L_264, /*hidden argument*/NULL);
		if (L_265)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_266 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_267 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNntp_25();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_268 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_266, L_267, /*hidden argument*/NULL);
		if (L_268)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_269 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_270 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeHttps_22();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_271 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_269, L_270, /*hidden argument*/NULL);
		if (L_271)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_272 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_273 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFtp_19();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_274 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_272, L_273, /*hidden argument*/NULL);
		if (!L_274)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return _stringLiteral3F2F1FDE70B574C51BEE96783D4BC620A37A26F8;
	}

IL_071c:
	{
		String_t* L_275 = __this->get_host_3();
		NullCheck(L_275);
		int32_t L_276 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_275, /*hidden argument*/NULL);
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		String_t* L_277 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_278 = Uri_CheckHostName_mA0ADC3FD6C87A7BF545E975A9F77255453433EC9(L_277, /*hidden argument*/NULL);
		G_B139_0 = ((((int32_t)L_278) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = (bool)G_B139_0;
		bool L_279 = V_11;
		if (L_279)
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_280 = __this->get_host_3();
		NullCheck(L_280);
		int32_t L_281 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_280, /*hidden argument*/NULL);
		if ((((int32_t)L_281) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_282 = __this->get_host_3();
		NullCheck(L_282);
		Il2CppChar L_283 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_282, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_284 = __this->get_host_3();
		String_t* L_285 = __this->get_host_3();
		NullCheck(L_285);
		int32_t L_286 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_285, /*hidden argument*/NULL);
		NullCheck(L_284);
		Il2CppChar L_287 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_284, ((int32_t)il2cpp_codegen_subtract((int32_t)L_286, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_288 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618_il2cpp_TypeInfo_var);
		bool L_289 = IPv6Address_TryParse_m05241D8155448E6219CCE69F2B0C67ECFAED105B(L_288, (IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 **)(&V_12), /*hidden argument*/NULL);
		if (!L_289)
		{
			goto IL_07be;
		}
	}
	{
		IPv6Address_t87D61FD60FCF8C5C8ED78875ECB69F9CE1485618 * L_290 = V_12;
		NullCheck(L_290);
		String_t* L_291 = IPv6Address_ToString_mCC0E8CB2C35F186230FA82D135396B47BB4FCACA(L_290, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_292 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(_stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, L_291, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, /*hidden argument*/NULL);
		__this->set_host_3(L_292);
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = (bool)1;
	}

IL_07c1:
	{
		bool L_293 = V_11;
		if (!L_293)
		{
			goto IL_07fe;
		}
	}
	{
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_294 = Uri_get_Parser_mC06CE2AA97C8199255386B10743B78CDC31D53CC(__this, /*hidden argument*/NULL);
		if (((DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)IsInstClass((RuntimeObject*)L_294, DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var)))
		{
			goto IL_07e3;
		}
	}
	{
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_295 = Uri_get_Parser_mC06CE2AA97C8199255386B10743B78CDC31D53CC(__this, /*hidden argument*/NULL);
		if (L_295)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		String_t* L_296 = __this->get_host_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_297 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(_stringLiteral532F3DF1AE9CD949217C4F27091386C725DD7AA0, L_296, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		String_t* L_298 = Locale_GetText_m6988B533095C05B662AF80DC985DEAF94142CA02(L_297, /*hidden argument*/NULL);
		return L_298;
	}

IL_07fe:
	{
		V_13 = (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 *)NULL;
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_299 = Uri_get_Parser_mC06CE2AA97C8199255386B10743B78CDC31D53CC(__this, /*hidden argument*/NULL);
		if (!L_299)
		{
			goto IL_081a;
		}
	}
	{
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_300 = Uri_get_Parser_mC06CE2AA97C8199255386B10743B78CDC31D53CC(__this, /*hidden argument*/NULL);
		NullCheck(L_300);
		VirtActionInvoker2< Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *, UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 ** >::Invoke(4 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, L_300, __this, (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 **)(&V_13));
	}

IL_081a:
	{
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * L_301 = V_13;
		if (!L_301)
		{
			goto IL_0829;
		}
	}
	{
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * L_302 = V_13;
		NullCheck(L_302);
		String_t* L_303 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_302);
		return L_303;
	}

IL_0829:
	{
		String_t* L_304 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_305 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeMailto_23();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_306 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_304, L_305, /*hidden argument*/NULL);
		if (!L_306)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_307 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_308 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNews_24();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_309 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_307, L_308, /*hidden argument*/NULL);
		if (!L_309)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_310 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_311 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_312 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_310, L_311, /*hidden argument*/NULL);
		if (!L_312)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_313 = __this->get_path_5();
		String_t* L_314 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_315 = Uri_CompactEscaped_m33BD25DDB850060AA07417820FB81ED68180F271(L_314, /*hidden argument*/NULL);
		String_t* L_316 = Uri_Reduce_m47AB24CD60A069202994F361E3F2ACF218D358A1(L_313, L_315, /*hidden argument*/NULL);
		__this->set_path_5(L_316);
	}

IL_0884:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_CompactEscaped_m33BD25DDB850060AA07417820FB81ED68180F271 (String_t* ___scheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_CompactEscaped_m33BD25DDB850060AA07417820FB81ED68180F271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme0;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_2 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map15_32();
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_3 = (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *)il2cpp_codegen_object_new(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var);
		V_1 = L_3;
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_4 = V_1;
		NullCheck(L_4);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_4, _stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_5 = V_1;
		NullCheck(L_5);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_5, _stringLiteral77B5F8E343A90F6F597751021FB8B7A08FE83083, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_6 = V_1;
		NullCheck(L_6);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_6, _stringLiteralC3437DBC7C1255D3A21D444D86EBF2E9234C22BD, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_7 = V_1;
		NullCheck(L_7);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_7, _stringLiteral1F8A1C4B94F61170B94E9FD827F36A60174238C7, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_8 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_8, _stringLiteral0765DEEFD5C1509444309BD8D09E7ACA927165F8, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map15_32(L_9);
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_10 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map15_32();
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF(L_10, L_11, (int32_t*)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return (bool)1;
	}

IL_007a:
	{
		return (bool)0;
	}
}
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_Reduce_m47AB24CD60A069202994F361E3F2ACF218D358A1 (String_t* ___path0, bool ___compact_escaped1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_Reduce_m47AB24CD60A069202994F361E3F2ACF218D358A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	String_t* V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	Il2CppChar V_13 = 0x0;
	RuntimeObject* V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_0, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path0;
		return L_2;
	}

IL_0012:
	{
		StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = ___compact_escaped1;
		if (!L_4)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		String_t* L_5 = ___path0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		V_13 = L_8;
		Il2CppChar L_9 = V_13;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_10 = V_13;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_11, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___path0;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_15 = ___path0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_17;
		String_t* L_18 = ___path0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Il2CppChar L_20 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		Il2CppChar L_21 = Char_ToUpper_mF0E1A7A2B19AF2A887715A33577A5B66FD99DA6A(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		Il2CppChar L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_008e;
		}
	}
	{
		Il2CppChar L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		Il2CppChar L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00b1;
		}
	}
	{
		Il2CppChar L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_26, ((int32_t)47), /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)2));
		goto IL_00b9;
	}

IL_00b1:
	{
		StringBuilder_t * L_28 = V_0;
		Il2CppChar L_29 = V_2;
		NullCheck(L_28);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t * L_30 = V_0;
		Il2CppChar L_31 = V_2;
		NullCheck(L_30);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		StringBuilder_t * L_32 = V_0;
		Il2CppChar L_33 = V_2;
		NullCheck(L_32);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_32, L_33, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_1;
		String_t* L_36 = ___path0;
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t * L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_38, /*hidden argument*/NULL);
		___path0 = L_39;
		goto IL_0101;
	}

IL_00f5:
	{
		String_t* L_40 = ___path0;
		NullCheck(L_40);
		String_t* L_41 = String_Replace_m32FA65B177FDBB082C72B723F0B376A5394A38BF(L_40, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		___path0 = L_41;
	}

IL_0101:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_42 = (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F *)il2cpp_codegen_object_new(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var);
		ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B(L_42, /*hidden argument*/NULL);
		V_5 = L_42;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		String_t* L_43 = ___path0;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = String_IndexOf_mC6529655AB4CBF682EAC467D3A6D9F40B8498F3F(L_43, ((int32_t)47), L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_47 = ___path0;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_47, /*hidden argument*/NULL);
		V_7 = L_48;
	}

IL_012c:
	{
		String_t* L_49 = ___path0;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		NullCheck(L_49);
		String_t* L_53 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_49, L_50, ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_52)), /*hidden argument*/NULL);
		V_8 = L_53;
		int32_t L_54 = V_7;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		String_t* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_015e;
		}
	}
	{
		String_t* L_57 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_57, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		String_t* L_59 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_60 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_59, _stringLiteral9D891E731F75DEAE56884D79E9816736B7488080, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0199;
		}
	}
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_61);
		V_9 = L_62;
		int32_t L_63 = V_9;
		if (L_63)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_64 = V_5;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_64, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1)));
		goto IL_01a3;
	}

IL_0199:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_66 = V_5;
		String_t* L_67 = V_8;
		NullCheck(L_66);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_66, L_67);
	}

IL_01a3:
	{
		int32_t L_68 = V_6;
		String_t* L_69 = ___path0;
		NullCheck(L_69);
		int32_t L_70 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_69, /*hidden argument*/NULL);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_71 = V_5;
		NullCheck(L_71);
		int32_t L_72 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_71);
		if (L_72)
		{
			goto IL_01c2;
		}
	}
	{
		return _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
	}

IL_01c2:
	{
		StringBuilder_t * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_set_Length_m8865F1FDBE49082D17BABCEAE62D8BDFC0311818(L_73, 0, /*hidden argument*/NULL);
		String_t* L_74 = ___path0;
		NullCheck(L_74);
		Il2CppChar L_75 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_74, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01e0;
		}
	}
	{
		StringBuilder_t * L_76 = V_0;
		NullCheck(L_76);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_76, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_01e0:
	{
		V_10 = (bool)1;
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_77 = V_5;
		NullCheck(L_77);
		RuntimeObject* L_78 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_77);
		V_12 = L_78;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			RuntimeObject* L_79 = V_12;
			NullCheck(L_79);
			RuntimeObject * L_80 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var, L_79);
			V_11 = ((String_t*)CastclassSealed((RuntimeObject*)L_80, String_t_il2cpp_TypeInfo_var));
			bool L_81 = V_10;
			if (!L_81)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = (bool)0;
			goto IL_0217;
		}

IL_020e:
		{
			StringBuilder_t * L_82 = V_0;
			NullCheck(L_82);
			StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_82, ((int32_t)47), /*hidden argument*/NULL);
		}

IL_0217:
		{
			StringBuilder_t * L_83 = V_0;
			String_t* L_84 = V_11;
			NullCheck(L_83);
			StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_83, L_84, /*hidden argument*/NULL);
		}

IL_0220:
		{
			RuntimeObject* L_85 = V_12;
			NullCheck(L_85);
			bool L_86 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var, L_85);
			if (L_86)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_87 = V_12;
			V_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_87, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var));
			RuntimeObject* L_88 = V_14;
			if (L_88)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			RuntimeObject* L_89 = V_14;
			NullCheck(L_89);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var, L_89);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0247:
	{
		String_t* L_90 = ___path0;
		NullCheck(L_90);
		bool L_91 = String_EndsWith_mA2A8A4416101D0F9B91A79CDF7DBE064E8C77A2C(L_90, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_0260;
		}
	}
	{
		StringBuilder_t * L_92 = V_0;
		NullCheck(L_92);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_92, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0260:
	{
		StringBuilder_t * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_93, /*hidden argument*/NULL);
		return L_94;
	}
}
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32U26,System.CharU26)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Uri_HexUnescapeMultiByte_m73131CB46572E5B039C1D5995D31843F8F666104 (String_t* ___pattern0, int32_t* ___index1, Il2CppChar* ___surrogate2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_HexUnescapeMultiByte_m73131CB46572E5B039C1D5995D31843F8F666104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		Il2CppChar* L_0 = ___surrogate2;
		*((int16_t*)L_0) = (int16_t)0;
		String_t* L_1 = ___pattern0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_2 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_2, _stringLiteral91CC2E927B3BFB1D4477B744F7C70221DDB86EF1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Uri_HexUnescapeMultiByte_m73131CB46572E5B039C1D5995D31843F8F666104_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t* L_3 = ___index1;
		int32_t L_4 = *((int32_t*)L_3);
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		String_t* L_7 = ___pattern0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_9 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_9, _stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Uri_HexUnescapeMultiByte_m73131CB46572E5B039C1D5995D31843F8F666104_RuntimeMethod_var);
	}

IL_0034:
	{
		String_t* L_10 = ___pattern0;
		int32_t* L_11 = ___index1;
		int32_t L_12 = *((int32_t*)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_13 = Uri_IsHexEncoding_m8490687F97773ED8AA8134E10B82741673EDF3E6(L_10, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_14 = ___pattern0;
		int32_t* L_15 = ___index1;
		int32_t* L_16 = ___index1;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18 = L_17;
		V_13 = L_18;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_13;
		NullCheck(L_14);
		Il2CppChar L_20 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_14, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0053:
	{
		int32_t* L_21 = ___index1;
		int32_t* L_22 = ___index1;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24 = L_23;
		V_13 = L_24;
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_13;
		V_0 = L_25;
		String_t* L_26 = ___pattern0;
		int32_t* L_27 = ___index1;
		int32_t* L_28 = ___index1;
		int32_t L_29 = *((int32_t*)L_28);
		int32_t L_30 = L_29;
		V_13 = L_30;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		int32_t L_31 = V_13;
		NullCheck(L_26);
		Il2CppChar L_32 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_26, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC(L_32, /*hidden argument*/NULL);
		V_1 = L_33;
		String_t* L_34 = ___pattern0;
		int32_t* L_35 = ___index1;
		int32_t* L_36 = ___index1;
		int32_t L_37 = *((int32_t*)L_36);
		int32_t L_38 = L_37;
		V_13 = L_38;
		*((int32_t*)L_35) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_39 = V_13;
		NullCheck(L_34);
		Il2CppChar L_40 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_34, L_39, /*hidden argument*/NULL);
		int32_t L_41 = Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC(L_40, /*hidden argument*/NULL);
		V_2 = L_41;
		int32_t L_42 = V_1;
		V_3 = L_42;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		int32_t L_44 = V_3;
		V_3 = ((int32_t)((int32_t)L_44<<(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_45 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_45&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_46 = V_4;
		if ((((int32_t)L_46) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		return (((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_47<<(int32_t)4))|(int32_t)L_48)))));
	}

IL_00b9:
	{
		int32_t L_49 = V_4;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_50 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_5 = L_50;
		V_6 = (bool)0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_51 = V_5;
		int32_t L_52 = V_1;
		int32_t L_53 = V_2;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_52<<(int32_t)4))|(int32_t)L_53))))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		String_t* L_54 = ___pattern0;
		int32_t* L_55 = ___index1;
		int32_t* L_56 = ___index1;
		int32_t L_57 = *((int32_t*)L_56);
		int32_t L_58 = L_57;
		V_13 = L_58;
		*((int32_t*)L_55) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_60 = Uri_IsHexEncoding_m8490687F97773ED8AA8134E10B82741673EDF3E6(L_54, L_59, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = (bool)1;
		goto IL_0154;
	}

IL_00f5:
	{
		String_t* L_61 = ___pattern0;
		int32_t* L_62 = ___index1;
		int32_t* L_63 = ___index1;
		int32_t L_64 = *((int32_t*)L_63);
		int32_t L_65 = L_64;
		V_13 = L_65;
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		int32_t L_66 = V_13;
		NullCheck(L_61);
		Il2CppChar L_67 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_61, L_66, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_68 = Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC(L_67, /*hidden argument*/NULL);
		V_8 = L_68;
		int32_t L_69 = V_8;
		if ((((int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = (bool)1;
		goto IL_0154;
	}

IL_0120:
	{
		String_t* L_70 = ___pattern0;
		int32_t* L_71 = ___index1;
		int32_t* L_72 = ___index1;
		int32_t L_73 = *((int32_t*)L_72);
		int32_t L_74 = L_73;
		V_13 = L_74;
		*((int32_t*)L_71) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		int32_t L_75 = V_13;
		NullCheck(L_70);
		Il2CppChar L_76 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_70, L_75, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		int32_t L_77 = Uri_FromHex_m5BAA1339E87C990064614279CD8904A918BA37AC(L_76, /*hidden argument*/NULL);
		V_9 = L_77;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_78 = V_5;
		int32_t L_79 = V_7;
		int32_t L_80 = V_8;
		int32_t L_81 = V_9;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80<<(int32_t)4))|(int32_t)L_81))))));
		int32_t L_82 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_014b:
	{
		int32_t L_83 = V_7;
		int32_t L_84 = V_4;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		bool L_85 = V_6;
		if (!L_85)
		{
			goto IL_0166;
		}
	}
	{
		int32_t* L_86 = ___index1;
		int32_t L_87 = V_0;
		*((int32_t*)L_86) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)3));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_88 = V_5;
		NullCheck(L_88);
		int32_t L_89 = 0;
		uint8_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		return (((int32_t)((uint16_t)L_90)));
	}

IL_0166:
	{
		V_10 = (uint8_t)((int32_t)255);
		uint8_t L_91 = V_10;
		int32_t L_92 = V_4;
		V_10 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_91>>(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1))&(int32_t)((int32_t)31))))))));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_93 = V_5;
		NullCheck(L_93);
		int32_t L_94 = 0;
		uint8_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		uint8_t L_96 = V_10;
		V_11 = ((int32_t)((int32_t)L_95&(int32_t)L_96));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		int32_t L_97 = V_11;
		V_11 = ((int32_t)((int32_t)L_97<<(int32_t)6));
		int32_t L_98 = V_11;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_99 = V_5;
		int32_t L_100 = V_12;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		uint8_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_11 = ((int32_t)((int32_t)L_98|(int32_t)((int32_t)((int32_t)L_102&(int32_t)((int32_t)63)))));
		int32_t L_103 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_01a4:
	{
		int32_t L_104 = V_12;
		int32_t L_105 = V_4;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_106 = V_11;
		if ((((int32_t)L_106) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_107 = V_11;
		return (((int32_t)((uint16_t)L_107)));
	}

IL_01bd:
	{
		int32_t L_108 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)((int32_t)65536)));
		Il2CppChar* L_109 = ___surrogate2;
		int32_t L_110 = V_11;
		*((int16_t*)L_109) = (int16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_110&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320))))));
		int32_t L_111 = V_11;
		return (((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_111>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296))))));
	}
}
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_GetSchemeDelimiter_mFAE7BAA0DBD699319611B29B1BE4D5EFF452D527 (String_t* ___scheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetSchemeDelimiter_mFAE7BAA0DBD699319611B29B1BE4D5EFF452D527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_0 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_schemes_28();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_scheme_0();
		String_t* L_3 = ___scheme0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_5 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_schemes_28();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_delimiter_1();
		return L_7;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* L_10 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_schemes_28();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_SchemeDelimiter_17();
		return L_11;
	}
}
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024 (String_t* ___scheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetDefaultPort_m4C9B7796F2E638444CA7AAF039B9FFD9C9785024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * V_0 = NULL;
	{
		String_t* L_0 = ___scheme0;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var);
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_1 = UriParser_GetParser_m7AE4073658832797A3FA98F337B52EEF28AA1696(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = UriParser_get_DefaultPort_mCC6DEBBCD89CD3E4D6AB2247A0E0FF26E156B0F6(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_GetOpaqueWiseSchemeDelimiter_mA5F7CDD38ECF7B333BFC220727E0B628595B7FED (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetOpaqueWiseSchemeDelimiter_mA5F7CDD38ECF7B333BFC220727E0B628595B7FED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isOpaquePart_10();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
	}

IL_0011:
	{
		String_t* L_1 = __this->get_scheme_2();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_2 = Uri_GetSchemeDelimiter_mFAE7BAA0DBD699319611B29B1BE4D5EFF452D527(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsPredefinedScheme_m44BBB3DFC5E743BC6645A5AF0ACEC94FD408D529 (String_t* ___scheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_IsPredefinedScheme_m44BBB3DFC5E743BC6645A5AF0ACEC94FD408D529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme0;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_2 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map16_33();
		if (L_2)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_3 = (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *)il2cpp_codegen_object_new(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF(L_3, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var);
		V_1 = L_3;
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_4 = V_1;
		NullCheck(L_4);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_4, _stringLiteral77B5F8E343A90F6F597751021FB8B7A08FE83083, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_5 = V_1;
		NullCheck(L_5);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_5, _stringLiteralC3437DBC7C1255D3A21D444D86EBF2E9234C22BD, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_6 = V_1;
		NullCheck(L_6);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_6, _stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_7 = V_1;
		NullCheck(L_7);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_7, _stringLiteral7616BB87BD05F6439E3672BA1B2BE55D5BEB68B3, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_8 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_8, _stringLiteral666948CC54CBC3FC2C70107A835E27C872F476E6, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_9 = V_1;
		NullCheck(L_9);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_9, _stringLiteral4188736A00FBFB506ACA06281ACF338290455C21, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_10 = V_1;
		NullCheck(L_10);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_10, _stringLiteralFE710CD089CB0BA74F588270FE079A392B5E9810, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_11 = V_1;
		NullCheck(L_11);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_11, _stringLiteral3C6BDCDDC94F64BF77DEB306AAE490A90A6FC300, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_12 = V_1;
		NullCheck(L_12);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_12, _stringLiteral1F8A1C4B94F61170B94E9FD827F36A60174238C7, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_13 = V_1;
		NullCheck(L_13);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_13, _stringLiteral0765DEEFD5C1509444309BD8D09E7ACA927165F8, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map16_33(L_14);
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_15 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map16_33();
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF(L_15, L_16, (int32_t*)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return (bool)1;
	}

IL_00b7:
	{
		return (bool)0;
	}
}
// System.UriParser System.Uri::get_Parser()
extern "C" IL2CPP_METHOD_ATTR UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * Uri_get_Parser_mC06CE2AA97C8199255386B10743B78CDC31D53CC (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_Parser_mC06CE2AA97C8199255386B10743B78CDC31D53CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_0 = __this->get_parser_29();
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_1 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var);
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_2 = UriParser_GetParser_m7AE4073658832797A3FA98F337B52EEF28AA1696(L_1, /*hidden argument*/NULL);
		__this->set_parser_29(L_2);
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_3 = __this->get_parser_29();
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_4 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m595061EFECC19AF010A707B946AA863D80FA33A7(L_4, _stringLiteralDF58248C414F342C81E056B40BEE12D17A08BF61, /*hidden argument*/NULL);
		__this->set_parser_29(L_4);
	}

IL_0037:
	{
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_5 = __this->get_parser_29();
		return L_5;
	}
}
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR void Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_1 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_1, _stringLiteral12B6FF7C47BB4C2C973EF6E38B06B1AD0DACA96F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Uri_EnsureAbsoluteUri_m173A29AAF043C2AC162FC94611EF873C29E2A4D0_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___u10, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___u21, const RuntimeMethod* method)
{
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_0 = ___u10;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_1 = ___u21;
		bool L_2 = Object_Equals_m8F1D37CE67D713E8EF3E9433D942A7E0242F4838(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m130BFB261037E354E5E08022C5BA8C8A777B388B (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___u10, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___u21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_op_Inequality_m130BFB261037E354E5E08022C5BA8C8A777B388B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_0 = ___u10;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_1 = ___u21;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_2 = Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshal_pinvoke(const UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE& unmarshaled, UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshaled_pinvoke& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_string(unmarshaled.get_scheme_0());
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_string(unmarshaled.get_delimiter_1());
	marshaled.___defaultPort_2 = unmarshaled.get_defaultPort_2();
}
extern "C" void UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshal_pinvoke_back(const UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshaled_pinvoke& marshaled, UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE& unmarshaled)
{
	unmarshaled.set_scheme_0(il2cpp_codegen_marshal_string_result(marshaled.___scheme_0));
	unmarshaled.set_delimiter_1(il2cpp_codegen_marshal_string_result(marshaled.___delimiter_1));
	int32_t unmarshaled_defaultPort_temp_2 = 0;
	unmarshaled_defaultPort_temp_2 = marshaled.___defaultPort_2;
	unmarshaled.set_defaultPort_2(unmarshaled_defaultPort_temp_2);
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshal_pinvoke_cleanup(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// Conversion methods for marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshal_com(const UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE& unmarshaled, UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshaled_com& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_scheme_0());
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_delimiter_1());
	marshaled.___defaultPort_2 = unmarshaled.get_defaultPort_2();
}
extern "C" void UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshal_com_back(const UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshaled_com& marshaled, UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE& unmarshaled)
{
	unmarshaled.set_scheme_0(il2cpp_codegen_marshal_bstring_result(marshaled.___scheme_0));
	unmarshaled.set_delimiter_1(il2cpp_codegen_marshal_bstring_result(marshaled.___delimiter_1));
	int32_t unmarshaled_defaultPort_temp_2 = 0;
	unmarshaled_defaultPort_temp_2 = marshaled.___defaultPort_2;
	unmarshaled.set_defaultPort_2(unmarshaled_defaultPort_temp_2);
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshal_com_cleanup(UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// System.Void System.Uri_UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039 (UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		__this->set_scheme_0(L_0);
		String_t* L_1 = ___d1;
		__this->set_delimiter_1(L_1);
		int32_t L_2 = ___p2;
		__this->set_defaultPort_2(L_2);
		return;
	}
}
extern "C"  void UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039_AdjustorThunk (RuntimeObject * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method)
{
	UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE * _thisAdjusted = reinterpret_cast<UriScheme_tAC5BAEC36F275C5986740C3BE3FE2BEA8B512BDE *>(__this + 1);
	UriScheme__ctor_mD784739B3EF3EDE06124629DA406D899E71A9039(_thisAdjusted, ___s0, ___d1, ___p2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriFormatException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UriFormatException__ctor_mBF0582CA35A83644A2215E198756B8EB08CB79BA (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriFormatException__ctor_mBF0582CA35A83644A2215E198756B8EB08CB79BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m6988B533095C05B662AF80DC985DEAF94142CA02(_stringLiteral140386E76465A7584F540C5E525161A28CF7DDB9, /*hidden argument*/NULL);
		FormatException__ctor_mDEB80E27D63D7B7EF9A9386C14188A3ED36D6388(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriFormatException__ctor_mD721BBD61E5643DF05FE9B8163D2EEE5F297BBEF (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		FormatException__ctor_mDEB80E27D63D7B7EF9A9386C14188A3ED36D6388(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UriFormatException__ctor_m78C4BE160352841E0ACEEFBD8447B7A138B440EC (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  L_1 = ___context1;
		FormatException__ctor_m8DE89BC7BD5398BE533DDACB4441EE53F6D8E1F0(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m279049B0D6FC3D6A0BE546EA1A797E6DBA7BA293 (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  L_1 = ___context1;
		Exception_GetObjectData_mD2C509DFF4A5E537271E9FA0781963C4DDADD54C(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriParser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UriParser__ctor_m1B4529A5EC94195C1172805C2AC151D68B17EC3E (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UriParser__cctor_m3B66E08E72DE8FF17B1C732941B453F7826F8F86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser__cctor_m3B66E08E72DE8FF17B1C732941B453F7826F8F86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(L_0, /*hidden argument*/NULL);
		((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var))->set_lock_object_0(L_0);
		Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * L_1 = (Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B *)il2cpp_codegen_object_new(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_il2cpp_TypeInfo_var);
		Regex__ctor_m5F3516AE3DCA276F67885661467C99213AECC093(L_1, _stringLiteralB0E48174DA6012A8C5CCF7ED06379FAF0EF9F2B0, /*hidden argument*/NULL);
		((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var))->set_uri_regex_4(L_1);
		Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * L_2 = (Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B *)il2cpp_codegen_object_new(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_il2cpp_TypeInfo_var);
		Regex__ctor_m5F3516AE3DCA276F67885661467C99213AECC093(L_2, _stringLiteral29E1A7EF9EE675914AA98F9B5BF128C3E91CCB6B, /*hidden argument*/NULL);
		((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var))->set_auth_regex_5(L_2);
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatExceptionU26)
extern "C" IL2CPP_METHOD_ATTR void UriParser_InitializeAndValidate_m41C02DFC43E9BF80593BEB001BE47112BB0F2C95 (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___uri0, UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 ** ___parsingError1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InitializeAndValidate_m41C02DFC43E9BF80593BEB001BE47112BB0F2C95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_4, _stringLiteralDF58248C414F342C81E056B40BEE12D17A08BF61, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 ** L_6 = ___parsingError1;
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 * L_7 = (UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 *)il2cpp_codegen_object_new(UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4_il2cpp_TypeInfo_var);
		UriFormatException__ctor_mD721BBD61E5643DF05FE9B8163D2EEE5F297BBEF(L_7, _stringLiteralBB2521CBAC0ADD35F6FE074ADA144F86CC088479, /*hidden argument*/NULL);
		*((RuntimeObject **)L_6) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_6, (RuntimeObject *)L_7);
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_tCF3A5E41A4694669507EF301FE0C741BF03ADED4 ** L_8 = ___parsingError1;
		*((RuntimeObject **)L_8) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_8, (RuntimeObject *)NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UriParser_OnRegister_m9B5F64AA742C724C55B916D0ED4585A1A83A7A4B (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, String_t* ___schemeName0, int32_t ___defaultPort1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriParser_set_SchemeName_m6BB89EAF5B9FD89739D20F0A3BE1CD609B7F6244 (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_scheme_name_2(L_0);
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" IL2CPP_METHOD_ATTR int32_t UriParser_get_DefaultPort_mCC6DEBBCD89CD3E4D6AB2247A0E0FF26E156B0F6 (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_default_port_3();
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UriParser_set_DefaultPort_m1D2C2A9EA79F0FD3E6C8EC22C5C362A1D9F7AFB3 (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_default_port_3(L_0);
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern "C" IL2CPP_METHOD_ATTR void UriParser_CreateDefaults_m2CABED1E4723143115406B5EA352A313325CCB04 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_CreateDefaults_m2CABED1E4723143115406B5EA352A313325CCB04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_0 = ((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var))->get_table_1();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_1 = (Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 *)il2cpp_codegen_object_new(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82_il2cpp_TypeInfo_var);
		Hashtable__ctor_m7737017B81338A30D456EBC042565AF95197AD70(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_2 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_3 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFile_18();
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_5 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_6 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeFtp_19();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_8 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_9 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeGopher_20();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_11 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_12 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeHttp_21();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_14 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_15 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeHttps_22();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_17 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_18 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeMailto_23();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_20 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_21 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNetPipe_26();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_23 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_24 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNetTcp_27();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_26 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_27 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNews_24();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_29 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_30 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var))->get_UriSchemeNntp_25();
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_32 = V_0;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_33 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080(L_32, L_33, _stringLiteral61A135089EAC561A2FF7CEDEEFB03975BED000F8, ((int32_t)389), /*hidden argument*/NULL);
		RuntimeObject * L_34 = ((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var))->get_lock_object_0();
		V_1 = L_34;
		RuntimeObject * L_35 = V_1;
		Monitor_Enter_mBB8498484175C42EF124806FB8F5B2C82017D2DA(L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var);
			Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_36 = ((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var))->get_table_1();
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var);
			((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var))->set_table_1(L_37);
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		RuntimeObject * L_38 = V_1;
		Monitor_Exit_m9148668A1A9CBE093555DC6BD273B65AAE9C89FB(L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080 (Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___table0, UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * ___uriParser1, String_t* ___schemeName2, int32_t ___defaultPort3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InternalRegister_m2F9A77F2C445F2712BC8397AD97684381077F080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * V_0 = NULL;
	{
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_0 = ___uriParser1;
		String_t* L_1 = ___schemeName2;
		NullCheck(L_0);
		UriParser_set_SchemeName_m6BB89EAF5B9FD89739D20F0A3BE1CD609B7F6244(L_0, L_1, /*hidden argument*/NULL);
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_2 = ___uriParser1;
		int32_t L_3 = ___defaultPort3;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m1D2C2A9EA79F0FD3E6C8EC22C5C362A1D9F7AFB3(L_2, L_3, /*hidden argument*/NULL);
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_4 = ___uriParser1;
		if (!((GenericUriParser_t9AF82F0F6023AE6A6F272759CB591FB82B4CFEE4 *)IsInstClass((RuntimeObject*)L_4, GenericUriParser_t9AF82F0F6023AE6A6F272759CB591FB82B4CFEE4_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_5 = ___table0;
		String_t* L_6 = ___schemeName2;
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_7 = ___uriParser1;
		NullCheck(L_5);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_8 = (DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C *)il2cpp_codegen_object_new(DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_mF24D6F58913B3DA0167EFC67AD4611EDEF00C923(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_9 = V_0;
		String_t* L_10 = ___schemeName2;
		NullCheck(L_9);
		UriParser_set_SchemeName_m6BB89EAF5B9FD89739D20F0A3BE1CD609B7F6244(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_11 = V_0;
		int32_t L_12 = ___defaultPort3;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m1D2C2A9EA79F0FD3E6C8EC22C5C362A1D9F7AFB3(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_13 = ___table0;
		String_t* L_14 = ___schemeName2;
		DefaultUriParser_t4FE27B8086A052E20AB5B8A35901A53088B4C38C * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * L_16 = ___uriParser1;
		String_t* L_17 = ___schemeName2;
		int32_t L_18 = ___defaultPort3;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern "C" IL2CPP_METHOD_ATTR UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * UriParser_GetParser_m7AE4073658832797A3FA98F337B52EEF28AA1696 (String_t* ___schemeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_GetParser_m7AE4073658832797A3FA98F337B52EEF28AA1696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___schemeName0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m2CABED1E4723143115406B5EA352A313325CCB04(/*hidden argument*/NULL);
		String_t* L_1 = ___schemeName0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_2 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m973AF6EF21C0A5144A591135E574DF47E3BBD77C(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * L_4 = ((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var))->get_table_1();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A *)CastclassClass((RuntimeObject*)L_6, UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvert_m976D97EF4991BCE64D71D471B71FE9DD227ED404 (UriTypeConverter_tA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_CanConvert_m976D97EF4991BCE64D71D471B71FE9DD227ED404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_1, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Type_t * L_3 = ___type0;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_4 = { reinterpret_cast<intptr_t> (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_4, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvertFrom_m59971D9B9F5591A23885B2C8E428016C3EDDC278 (UriTypeConverter_tA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64 * __this, RuntimeObject* ___context0, Type_t * ___sourceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_CanConvertFrom_m59971D9B9F5591A23885B2C8E428016C3EDDC278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___sourceType1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral11C5773832E60D2F376C6E197271A225FD74EE27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UriTypeConverter_CanConvertFrom_m59971D9B9F5591A23885B2C8E428016C3EDDC278_RuntimeMethod_var);
	}

IL_0011:
	{
		Type_t * L_2 = ___sourceType1;
		bool L_3 = UriTypeConverter_CanConvert_m976D97EF4991BCE64D71D471B71FE9DD227ED404(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvertTo_m5B1D4F267FC1C76B7329994C780F48DA52D69F55 (UriTypeConverter_tA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64 * __this, RuntimeObject* ___context0, Type_t * ___destinationType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___destinationType1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		Type_t * L_1 = ___destinationType1;
		bool L_2 = UriTypeConverter_CanConvert_m976D97EF4991BCE64D71D471B71FE9DD227ED404(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UriTypeConverter_ConvertFrom_mA2A800AF43DA5F9DCEF293E55A275076B981FC96 (UriTypeConverter_tA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64 * __this, RuntimeObject* ___context0, CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___culture1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_ConvertFrom_mA2A800AF43DA5F9DCEF293E55A275076B981FC96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UriTypeConverter_ConvertFrom_mA2A800AF43DA5F9DCEF293E55A275076B981FC96_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject* L_2 = ___context0;
		RuntimeObject * L_3 = ___value2;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(L_3, /*hidden argument*/NULL);
		bool L_5 = VirtFuncInvoker2< bool, RuntimeObject*, Type_t * >::Invoke(4 /* System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_2, L_4);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m6988B533095C05B662AF80DC985DEAF94142CA02(_stringLiteral6ABF563E8335FCAA5CA55811FECE36F4B0D6DC07, /*hidden argument*/NULL);
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_7 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UriTypeConverter_ConvertFrom_mA2A800AF43DA5F9DCEF293E55A275076B981FC96_RuntimeMethod_var);
	}

IL_0033:
	{
		RuntimeObject * L_8 = ___value2;
		if (!((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)IsInstClass((RuntimeObject*)L_8, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject * L_9 = ___value2;
		return L_9;
	}

IL_0040:
	{
		RuntimeObject * L_10 = ___value2;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		String_t* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_12 = V_0;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_13 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5(L_13, L_12, 0, /*hidden argument*/NULL);
		return L_13;
	}

IL_0055:
	{
		RuntimeObject* L_14 = ___context0;
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_15 = ___culture1;
		RuntimeObject * L_16 = ___value2;
		RuntimeObject * L_17 = TypeConverter_ConvertFrom_mA3A3F067FB9C99C4401B8239E347328619566499(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UriTypeConverter_ConvertTo_m2FB9E3673F0F9A86C583AD7278916F134D37D463 (UriTypeConverter_tA85B11B1FD8D9C1FD1FF5DE1FCA9AAE13CCF1E64 * __this, RuntimeObject* ___context0, CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___culture1, RuntimeObject * ___value2, Type_t * ___destinationType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_ConvertTo_m2FB9E3673F0F9A86C583AD7278916F134D37D463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___context0;
		Type_t * L_1 = ___destinationType3;
		bool L_2 = VirtFuncInvoker2< bool, RuntimeObject*, Type_t * >::Invoke(5 /* System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m6988B533095C05B662AF80DC985DEAF94142CA02(_stringLiteral2E0BECBCAE1D61359E07C21D53B187CD25DCC4B1, /*hidden argument*/NULL);
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_4 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UriTypeConverter_ConvertTo_m2FB9E3673F0F9A86C583AD7278916F134D37D463_RuntimeMethod_var);
	}

IL_001e:
	{
		RuntimeObject * L_5 = ___value2;
		V_0 = ((Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)IsInstClass((RuntimeObject*)L_5, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var));
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_7 = Uri_op_Inequality_m130BFB261037E354E5E08022C5BA8C8A777B388B(L_6, (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_8 = ___destinationType3;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_9 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_9, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_10))))
		{
			goto IL_0049;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_11);
		return L_12;
	}

IL_0049:
	{
		Type_t * L_13 = ___destinationType3;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_14 = { reinterpret_cast<intptr_t> (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_14, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_13) == ((RuntimeObject*)(Type_t *)L_15))))
		{
			goto IL_005c;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_16 = V_0;
		return L_16;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___context0;
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_18 = ___culture1;
		RuntimeObject * L_19 = ___value2;
		Type_t * L_20 = ___destinationType3;
		RuntimeObject * L_21 = TypeConverter_ConvertTo_m6CD02AA6A2C7F42A18535A89AD99DAA2FF20EAEA(__this, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
