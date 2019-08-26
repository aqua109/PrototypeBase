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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t911865ADBF50A0B6FD2A2609C138724962571E07;
// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t4B7965DFA59B5353F6A4B3F45F37EBF07757387E;
// ExitGames.Client.Photon.EventData
struct EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t40F2BA59CF7C550190687A1B54CEC544B715D8D4;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t8DA0E544F9390AD6DD00BF565DAF59955137C0FF;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t6BADB5DCF67A5EAE5AE0E5AED0A3F7E49A158FB3;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78;
// Photon.Chat.ChannelCreationOptions
struct ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D;
// Photon.Chat.ChannelWellKnownProperties
struct ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508;
// Photon.Chat.ChatChannel
struct ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579;
// Photon.Chat.ChatClient
struct ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505;
// Photon.Chat.ChatEventCode
struct ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE;
// Photon.Chat.ChatOperationCode
struct ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45;
// Photon.Chat.ChatParameterCode
struct ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56;
// Photon.Chat.ChatPeer
struct ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989;
// Photon.Chat.ErrorCode
struct ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5;
// Photon.Chat.IChatClientListener
struct IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8;
// Photon.Chat.ParameterCode
struct ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>[]
struct EntryU5BU5D_tA7DFC4E22CD3507C4CF0DEBE532C1143D7D72C6B;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Type>[]
struct EntryU5BU5D_t475F792738E99DDAD188831A69AAB739D32C2048;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t78424AEA1BB6E793F1A8704FB166C2AB38596480;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.ChatChannel>[]
struct EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct KeyCollection_t46ACE6A73C75241D4F6E0C04443364FF83C563A0;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct KeyCollection_t5DED450DD41C6004EB8632EA1BDE90BC1860B614;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t1BE46DF1F77DF17E684DBB3F13969D26E7AB6CF3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.ChatChannel>
struct KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_t42705DC1BA2D97E8B5A32AD1D3CFF5CA2E5AFAEF;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_tF223CF9BE7563F3CBB430A88E7039DE3AF3BA6B0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t1AE0553030100CF5CF4772FAE69A3F5DAF4CEB3B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.ChatChannel>
struct ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>
struct Dictionary_2_tA8D3E016EE46BB1BC90748D0B3AE8D8BDBA254D5;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_t6F4A67DD06CAE1E4F84595FF415C0CED28AD4759;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEqualityComparer`1<ExitGames.Client.Photon.ConnectionProtocol>
struct IEqualityComparer_1_tE9BD439AAA60D54D62BB4DA8449D862B4BDE8D1E;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t8B10B18131A2BC48026F87234F61CBF8C5D07229;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

extern RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
extern RuntimeClass* AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
extern RuntimeClass* ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var;
extern RuntimeClass* ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var;
extern RuntimeClass* ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var;
extern RuntimeClass* ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
extern RuntimeClass* HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351_il2cpp_TypeInfo_var;
extern RuntimeClass* IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var;
extern RuntimeClass* IPhotonPeerListener_t40F2BA59CF7C550190687A1B54CEC544B715D8D4_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* PeerStateValue_tC68AC73191F244AEEB0D04A0FCF947D0DD5C68D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33_il2cpp_TypeInfo_var;
extern RuntimeClass* SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SupportClass_t3851BE3E18B855C4EA3E2167668E403FB7C05B61_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral06D8FB7D57518A9D9AD12F37B1762D47BCFEBC34;
extern String_t* _stringLiteral0C9BC8A9EA08F5764E66418E04C783D7C5EA550E;
extern String_t* _stringLiteral0ED3124668F532717B0D69F6EAA15F42A8393B1D;
extern String_t* _stringLiteral107307FBAF61C580C469AD7BCE2AE293E1C4A281;
extern String_t* _stringLiteral11B6F3557420C105118FCE7DD35DEC9F19E23C3D;
extern String_t* _stringLiteral17993E6AA42390896507EF1DDDB2A0E8ABD42D12;
extern String_t* _stringLiteral187DB917BF8928E28C35D9C1A3ACCC7FFE7357D3;
extern String_t* _stringLiteral21D80703A6C8D4036492B5E5021EDB6DA533D41D;
extern String_t* _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E;
extern String_t* _stringLiteral260B333133E8DC5F239195333A036B63C1EC62B9;
extern String_t* _stringLiteral29683C1799AE0C427BB58C8BF974A0FB8AA9BFC9;
extern String_t* _stringLiteral2C2487EA5D13B73C78A16D4C01B849CC868B9F66;
extern String_t* _stringLiteral2EAC14B3D351C8B6836D36173E0E34127AA6A058;
extern String_t* _stringLiteral31A8C2A4274E13FF28BD8BEBFAAD8D2908604F0B;
extern String_t* _stringLiteral338B2B6C4BBAA566799E30C0FFE0EB3E1AD56F71;
extern String_t* _stringLiteral3D618361EC8C202858B123986AEA7B042531080B;
extern String_t* _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE;
extern String_t* _stringLiteral4D3C418A83DE54D710758569DF3FF8391356AFB7;
extern String_t* _stringLiteral5618474235217E524A45AD712574B23E84EED6AD;
extern String_t* _stringLiteral5729A153EC7FAE56800274A78531B43CC0A3112C;
extern String_t* _stringLiteral5742FE1BDA7AB1FC9AFE28EA777EE363C684E01E;
extern String_t* _stringLiteral59D052E9640AFA04CB695842D8194CECDAE484D8;
extern String_t* _stringLiteral638067AF521CCE283B94B0DF8899C179DCF25FB3;
extern String_t* _stringLiteral68E21592360E435244D8BD55506FC51CCA67E430;
extern String_t* _stringLiteral6A99D68EAA56E7B9EA40ED090FD2E0DDA1EB1E0F;
extern String_t* _stringLiteral6AFEA6BD492174EAD3729E74B21354F505CDDCF4;
extern String_t* _stringLiteral70E46A40252ADA773201ED2001C3B5E19AE0D5E2;
extern String_t* _stringLiteral71EBF5DA4A7DF5D098F0A1BC60250ECE10DBEC80;
extern String_t* _stringLiteral74E0537A883E3EB77F6D19BD02E970E3B8CAA800;
extern String_t* _stringLiteral7BEA53D7765CB5C320CAF9A0C3283A4E5AF00416;
extern String_t* _stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996;
extern String_t* _stringLiteral7ECDE348FF9CDA2C3BA69A0C4543365039D0D65B;
extern String_t* _stringLiteral83FEBC0012B2BE602C85FC053159E9EF67600984;
extern String_t* _stringLiteral8CBF6943194FAE819E8AFA76DB6AA5FEDEF2323B;
extern String_t* _stringLiteral8F1AC3BB2037F1143E5E5853C9E7E3990ABDFDEE;
extern String_t* _stringLiteral94B1E34A1FC3B7B63B014BAD58E50115CFB5FC7D;
extern String_t* _stringLiteral9663A08052B2B050231926A22F7DC859D93D44FF;
extern String_t* _stringLiteral9ECB827BD6D80841068E0AE354CABBDE1FED45C0;
extern String_t* _stringLiteralA31D385B9DEE1897A2E6840A59DF969194B69490;
extern String_t* _stringLiteralA595791DAF8A7212368D5CC9A8886085257B5A0C;
extern String_t* _stringLiteralA8B9D506307E302D77308D7E4A5DB319E04C3EC0;
extern String_t* _stringLiteralAAC3759B75EBB121D5A5F793C49C6496CB466067;
extern String_t* _stringLiteralABB11E10EF4F1912CA124A43EDFCF7E4236BF4B3;
extern String_t* _stringLiteralABF28A6D84BA34B35ADF7EB356198FF5875435E5;
extern String_t* _stringLiteralB00E9FB37139B21C49F8FF7269A71166F5C00A02;
extern String_t* _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5;
extern String_t* _stringLiteralB69645E52227E7129DDA1A0E76A4F76A91BA1098;
extern String_t* _stringLiteralB7A757A62D6F4547652BA320456CD72FF6D7093E;
extern String_t* _stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E;
extern String_t* _stringLiteralBCB5C68DA61EECD91A7CBF61D41B0938CEDBCD34;
extern String_t* _stringLiteralBF11A57FF863BE16C3B8157656862961ACDA3725;
extern String_t* _stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308;
extern String_t* _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
extern String_t* _stringLiteralC82D1B09CF32291761D4D994CF71D150CBFAB21C;
extern String_t* _stringLiteralC82DBB40CF62E9201ED272DC15F939C724CD3E7D;
extern String_t* _stringLiteralCC8A9D016C6E2C07A8B03493514472F62C594C42;
extern String_t* _stringLiteralD1E3D9C1B922EB4D0834D565C074EDC474E4C8B1;
extern String_t* _stringLiteralD42D8F5361FEC807EFBD78D0B0154513FA3FDEA5;
extern String_t* _stringLiteralD6CA3F0561CBE6D60E45676F583A5694EA29884B;
extern String_t* _stringLiteralE23C1A7928CC6F82A21EE1A76448A0F81B07C4E9;
extern String_t* _stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD;
extern String_t* _stringLiteralE8A3C398B4EA2BE3444B33FEC2ABF9939FFE6A33;
extern String_t* _stringLiteralE92B7B36B6E384E44F7E0E2A7CDECA40F4F457DB;
extern String_t* _stringLiteralEF54001782F2548B67B67C09D2133F76EE73079C;
extern const RuntimeMethod* ChatClient_SendOutgoingInBackground_mFCE2C7CB1440F773487CFD739D99E07772F8EC3D_RuntimeMethod_var;
extern const RuntimeMethod* ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m19B67631E3168539C3430F820AF289EC84A92C71_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m7696A01224568B5D3C5E220A8BF743D2240A14FD_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m0B3F9FC4994D9E98DA63E950E3154C0313F6F925_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m7CC3DCFFF5FCC679FE6F67EFE2F18D5C6B9B6781_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m9CFA56AB41DC6245B77CD2AC8D3B77FE23167266_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mA5F89C097556DFC9B7D4510C7BB66320304A145C_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m68022351A81C9EF02FD42CFB383B00B5FD3CEA70_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mD31B08C2C495C4E36212D895023AA5FF66C8519A_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Clear_m298FD643F827492F4CBFDD6D3AFA7C98D5613D82_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Contains_m89784DA0061E40D90808D577E8FA56F7F1FD864B_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Remove_mEDCA9F54B3B975CB449577381947B8A63D208E21_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1__ctor_m78D58423114E19C19CA7C0E74F7636B1CEF65978_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_get_Count_m65D5678595A3788455F478546825DF7A0A69AB91_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m5266F82C7802D6360C7309C1F1AFBF418E2720A4_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_mD612A98620C52EC0C487AC2607D13BFE5883DF3C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveRange_m88DAB47C8CD8CB4C432BFB6252AFAF8423E9DCB1_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var;
extern const uint32_t AuthenticationValues_AddAuthParameter_m139C90C8BC229C6C2859F4C331BCBB2F85DFF6B9_MetadataUsageId;
extern const uint32_t AuthenticationValues_ToString_m680E3644014EC3FA293F6907A45E60EA69CC0145_MetadataUsageId;
extern const uint32_t ChannelCreationOptions__cctor_m42D194A5B5D34EF9DD71AA10DABCA4366846A84D_MetadataUsageId;
extern const uint32_t ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219_MetadataUsageId;
extern const uint32_t ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008_MetadataUsageId;
extern const uint32_t ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05_MetadataUsageId;
extern const uint32_t ChatChannel_ClearMessages_m9F330C894A569614B438E1F34AA74BA6B0621A33_MetadataUsageId;
extern const uint32_t ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD_MetadataUsageId;
extern const uint32_t ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5_MetadataUsageId;
extern const uint32_t ChatChannel_ToStringMessages_m4B60A66D61FC42B5B92A4DFB4C9B927C052CAD2C_MetadataUsageId;
extern const uint32_t ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79_MetadataUsageId;
extern const uint32_t ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342_MetadataUsageId;
extern const uint32_t ChatChannel_get_MessageCount_m9A22F494E044E317761F13C334C401912D7CCB01_MetadataUsageId;
extern const uint32_t ChatClient_AddFriends_mEAEC8761F53432233CE0D9F7B7DCB49AAA911BE0_MetadataUsageId;
extern const uint32_t ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2_MetadataUsageId;
extern const uint32_t ChatClient_CanChatInChannel_m0E3D8A49CB86A21CBFFFEDAF71C31637C3D676D8_MetadataUsageId;
extern const uint32_t ChatClient_ConnectAndSetStatus_m162558B2D8D1C60B39E7DB974A927D8425E72EA9_MetadataUsageId;
extern const uint32_t ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544_MetadataUsageId;
extern const uint32_t ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5_MetadataUsageId;
extern const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_mAFFB1A1E0C4C5330629A92CD03E065F112491DE4_MetadataUsageId;
extern const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m3B44E6DDAF54FEFEDB0097CADAEAD21874A93A9B_MetadataUsageId;
extern const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_mB2E20B145A102113E8A0E53F1CF4D7C7C4B4CFB3_MetadataUsageId;
extern const uint32_t ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564_MetadataUsageId;
extern const uint32_t ChatClient_HandleAuthResponse_m77C9D1F0666CE7756CE1650606EE7BC7DDBD7E72_MetadataUsageId;
extern const uint32_t ChatClient_HandleChatMessagesEvent_mBA3E5590CD58F581BD6D4BCF9C6271E63838F059_MetadataUsageId;
extern const uint32_t ChatClient_HandlePrivateMessageEvent_m66912AAC5F414B5006D0632DE02F47A5A93A5986_MetadataUsageId;
extern const uint32_t ChatClient_HandleStatusUpdate_mE241965F5577B2C1E4A8E779049138AE7EC0D8D3_MetadataUsageId;
extern const uint32_t ChatClient_HandleSubscribeEvent_mB02E035F17170A3B08745F67B84CD024123ABE5B_MetadataUsageId;
extern const uint32_t ChatClient_HandleUnsubscribeEvent_mC3D8AF899C58C99D991FCB8BE782FF7E95615226_MetadataUsageId;
extern const uint32_t ChatClient_HandleUserSubscribedEvent_m3124E5CC450BC2856BE354D41B437DFC1DF015FF_MetadataUsageId;
extern const uint32_t ChatClient_HandleUserUnsubscribedEvent_m70FB80F29B2F2B314E77619D0BC790C5B30F8278_MetadataUsageId;
extern const uint32_t ChatClient_RemoveFriends_m47EB90FCB9DF43FDF98FFB258B56EBD7AB35578D_MetadataUsageId;
extern const uint32_t ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B_MetadataUsageId;
extern const uint32_t ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726_MetadataUsageId;
extern const uint32_t ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E_MetadataUsageId;
extern const uint32_t ChatClient_Subscribe_m8880A667FC6E5A20137A128CA9E14DC1FD7412F6_MetadataUsageId;
extern const uint32_t ChatClient_Subscribe_m893C4C80A0E16F7FA6400AB703B108A26D181E6B_MetadataUsageId;
extern const uint32_t ChatClient_TryGetChannel_m3010392F7956037B208A9373C681A29A818B4BD6_MetadataUsageId;
extern const uint32_t ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7_MetadataUsageId;
extern const uint32_t ChatClient_Unsubscribe_m08903334236B22619BBF51877E1D55F452B744A4_MetadataUsageId;
extern const uint32_t ChatClient__ctor_mFF98B1813B75359BB8BB6FBFEB7A072EE59AB665_MetadataUsageId;
extern const uint32_t ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1_MetadataUsageId;
extern const uint32_t ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B_MetadataUsageId;
extern const uint32_t ChatClient_set_TransportProtocol_m05D798507F5148C392BBB4732F25583E1A2DB0D8_MetadataUsageId;
extern const uint32_t ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1_MetadataUsageId;
extern const uint32_t ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B_MetadataUsageId;
extern const uint32_t ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C_MetadataUsageId;
extern const uint32_t ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35_MetadataUsageId;
extern const uint32_t ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C_MetadataUsageId;
extern const uint32_t ChatPeer__cctor_mE74E176F6B3D98A4BDDE9DBC3175FB9C7C187DBF_MetadataUsageId;
extern const uint32_t ChatPeer__ctor_m2542C0FD85A9D537ABCBF2631C1B304C8C634478_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef U3CMODULEU3E_T87B1B8CD3395CCC432D52CD2F0E6D28F204AA14E_H
#define U3CMODULEU3E_T87B1B8CD3395CCC432D52CD2F0E6D28F204AA14E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t87B1B8CD3395CCC432D52CD2F0E6D28F204AA14E 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T87B1B8CD3395CCC432D52CD2F0E6D28F204AA14E_H
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
#ifndef EVENTDATA_T7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938_H
#define EVENTDATA_T7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EventData
struct  EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.EventData::Code
	uint8_t ___Code_0;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.EventData::Parameters
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * ___Parameters_1;
	// System.Byte ExitGames.Client.Photon.EventData::SenderKey
	uint8_t ___SenderKey_2;
	// System.Int32 ExitGames.Client.Photon.EventData::sender
	int32_t ___sender_3;
	// System.Byte ExitGames.Client.Photon.EventData::CustomDataKey
	uint8_t ___CustomDataKey_4;
	// System.Object ExitGames.Client.Photon.EventData::customData
	RuntimeObject * ___customData_5;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938, ___Code_0)); }
	inline uint8_t get_Code_0() const { return ___Code_0; }
	inline uint8_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(uint8_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938, ___Parameters_1)); }
	inline Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * get_Parameters_1() const { return ___Parameters_1; }
	inline Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___Parameters_1), value);
	}

	inline static int32_t get_offset_of_SenderKey_2() { return static_cast<int32_t>(offsetof(EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938, ___SenderKey_2)); }
	inline uint8_t get_SenderKey_2() const { return ___SenderKey_2; }
	inline uint8_t* get_address_of_SenderKey_2() { return &___SenderKey_2; }
	inline void set_SenderKey_2(uint8_t value)
	{
		___SenderKey_2 = value;
	}

	inline static int32_t get_offset_of_sender_3() { return static_cast<int32_t>(offsetof(EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938, ___sender_3)); }
	inline int32_t get_sender_3() const { return ___sender_3; }
	inline int32_t* get_address_of_sender_3() { return &___sender_3; }
	inline void set_sender_3(int32_t value)
	{
		___sender_3 = value;
	}

	inline static int32_t get_offset_of_CustomDataKey_4() { return static_cast<int32_t>(offsetof(EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938, ___CustomDataKey_4)); }
	inline uint8_t get_CustomDataKey_4() const { return ___CustomDataKey_4; }
	inline uint8_t* get_address_of_CustomDataKey_4() { return &___CustomDataKey_4; }
	inline void set_CustomDataKey_4(uint8_t value)
	{
		___CustomDataKey_4 = value;
	}

	inline static int32_t get_offset_of_customData_5() { return static_cast<int32_t>(offsetof(EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938, ___customData_5)); }
	inline RuntimeObject * get_customData_5() const { return ___customData_5; }
	inline RuntimeObject ** get_address_of_customData_5() { return &___customData_5; }
	inline void set_customData_5(RuntimeObject * value)
	{
		___customData_5 = value;
		Il2CppCodeGenWriteBarrier((&___customData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDATA_T7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938_H
#ifndef OPERATIONRESPONSE_T28743B1D75A106E2558685761C23D4064204A08C_H
#define OPERATIONRESPONSE_T28743B1D75A106E2558685761C23D4064204A08C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DebugMessage_2), value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C, ___Parameters_3)); }
	inline Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___Parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONRESPONSE_T28743B1D75A106E2558685761C23D4064204A08C_H
#ifndef CHANNELCREATIONOPTIONS_T307558F73A0621A89A95613A19C90429DEC46C8D_H
#define CHANNELCREATIONOPTIONS_T307558F73A0621A89A95613A19C90429DEC46C8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChannelCreationOptions
struct  ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChannelCreationOptions::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_1;
	// System.Int32 Photon.Chat.ChannelCreationOptions::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D, ___U3CPublishSubscribersU3Ek__BackingField_1)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_1() const { return ___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_1() { return &___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_1(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D, ___U3CMaxSubscribersU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_2() const { return ___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_2() { return &___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_2 = value;
	}
};

struct ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields
{
public:
	// Photon.Chat.ChannelCreationOptions Photon.Chat.ChannelCreationOptions::Default
	ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields, ___Default_0)); }
	inline ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * get_Default_0() const { return ___Default_0; }
	inline ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELCREATIONOPTIONS_T307558F73A0621A89A95613A19C90429DEC46C8D_H
#ifndef CHANNELWELLKNOWNPROPERTIES_T885B8C39E6ADD0DADB0DAF772E2D7525AD057508_H
#define CHANNELWELLKNOWNPROPERTIES_T885B8C39E6ADD0DADB0DAF772E2D7525AD057508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChannelWellKnownProperties
struct  ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELWELLKNOWNPROPERTIES_T885B8C39E6ADD0DADB0DAF772E2D7525AD057508_H
#ifndef CHATCHANNEL_TA7512B49C2002C0C0C83D52EDB01A178A333F579_H
#define CHATCHANNEL_TA7512B49C2002C0C0C83D52EDB01A178A333F579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatChannel
struct  ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_4;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___properties_6;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_7;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * ___Subscribers_9;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Senders_1() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Senders_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_Senders_1() const { return ___Senders_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_Senders_1() { return &___Senders_1; }
	inline void set_Senders_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___Senders_1 = value;
		Il2CppCodeGenWriteBarrier((&___Senders_1), value);
	}

	inline static int32_t get_offset_of_Messages_2() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Messages_2)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_Messages_2() const { return ___Messages_2; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_Messages_2() { return &___Messages_2; }
	inline void set_Messages_2(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___Messages_2 = value;
		Il2CppCodeGenWriteBarrier((&___Messages_2), value);
	}

	inline static int32_t get_offset_of_MessageLimit_3() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___MessageLimit_3)); }
	inline int32_t get_MessageLimit_3() const { return ___MessageLimit_3; }
	inline int32_t* get_address_of_MessageLimit_3() { return &___MessageLimit_3; }
	inline void set_MessageLimit_3(int32_t value)
	{
		___MessageLimit_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsPrivateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CIsPrivateU3Ek__BackingField_4)); }
	inline bool get_U3CIsPrivateU3Ek__BackingField_4() const { return ___U3CIsPrivateU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPrivateU3Ek__BackingField_4() { return &___U3CIsPrivateU3Ek__BackingField_4; }
	inline void set_U3CIsPrivateU3Ek__BackingField_4(bool value)
	{
		___U3CIsPrivateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLastMsgIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CLastMsgIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CLastMsgIdU3Ek__BackingField_5() const { return ___U3CLastMsgIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CLastMsgIdU3Ek__BackingField_5() { return &___U3CLastMsgIdU3Ek__BackingField_5; }
	inline void set_U3CLastMsgIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CLastMsgIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_properties_6() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___properties_6)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_properties_6() const { return ___properties_6; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_properties_6() { return &___properties_6; }
	inline void set_properties_6(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___properties_6 = value;
		Il2CppCodeGenWriteBarrier((&___properties_6), value);
	}

	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CPublishSubscribersU3Ek__BackingField_7)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_7() const { return ___U3CPublishSubscribersU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_7() { return &___U3CPublishSubscribersU3Ek__BackingField_7; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_7(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CMaxSubscribersU3Ek__BackingField_8)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_8() const { return ___U3CMaxSubscribersU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_8() { return &___U3CMaxSubscribersU3Ek__BackingField_8; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_8(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_Subscribers_9() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Subscribers_9)); }
	inline HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * get_Subscribers_9() const { return ___Subscribers_9; }
	inline HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 ** get_address_of_Subscribers_9() { return &___Subscribers_9; }
	inline void set_Subscribers_9(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * value)
	{
		___Subscribers_9 = value;
		Il2CppCodeGenWriteBarrier((&___Subscribers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATCHANNEL_TA7512B49C2002C0C0C83D52EDB01A178A333F579_H
#ifndef CHATEVENTCODE_T69355728022C08E7435EBAAB0B0CC12A186AACAE_H
#define CHATEVENTCODE_T69355728022C08E7435EBAAB0B0CC12A186AACAE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatEventCode
struct  ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATEVENTCODE_T69355728022C08E7435EBAAB0B0CC12A186AACAE_H
#ifndef CHATOPERATIONCODE_T2241AAA0BE1EE7E35D7FB4020009BC538267AF45_H
#define CHATOPERATIONCODE_T2241AAA0BE1EE7E35D7FB4020009BC538267AF45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatOperationCode
struct  ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATOPERATIONCODE_T2241AAA0BE1EE7E35D7FB4020009BC538267AF45_H
#ifndef CHATPARAMETERCODE_T04DD519C260927DA892F3046EFC437B00339AF56_H
#define CHATPARAMETERCODE_T04DD519C260927DA892F3046EFC437B00339AF56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatParameterCode
struct  ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATPARAMETERCODE_T04DD519C260927DA892F3046EFC437B00339AF56_H
#ifndef CHATUSERSTATUS_TBF26E11274B5B0FF5926B895F9070E056EB606D7_H
#define CHATUSERSTATUS_TBF26E11274B5B0FF5926B895F9070E056EB606D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatUserStatus
struct  ChatUserStatus_tBF26E11274B5B0FF5926B895F9070E056EB606D7  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATUSERSTATUS_TBF26E11274B5B0FF5926B895F9070E056EB606D7_H
#ifndef ERRORCODE_T49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5_H
#define ERRORCODE_T49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ErrorCode
struct  ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCODE_T49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5_H
#ifndef PARAMETERCODE_T7CAB0CED18EF18251341209C8FF74EBCB049AA91_H
#define PARAMETERCODE_T7CAB0CED18EF18251341209C8FF74EBCB049AA91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ParameterCode
struct  ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERCODE_T7CAB0CED18EF18251341209C8FF74EBCB049AA91_H
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
#ifndef KEYCOLLECTION_T0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C_H
#define KEYCOLLECTION_T0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_KeyCollection<System.Object,System.Object>
struct  KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C_H
#ifndef DICTIONARY_2_T658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99_H
#define DICTIONARY_2_T658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA7DFC4E22CD3507C4CF0DEBE532C1143D7D72C6B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t46ACE6A73C75241D4F6E0C04443364FF83C563A0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t42705DC1BA2D97E8B5A32AD1D3CFF5CA2E5AFAEF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___entries_1)); }
	inline EntryU5BU5D_tA7DFC4E22CD3507C4CF0DEBE532C1143D7D72C6B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA7DFC4E22CD3507C4CF0DEBE532C1143D7D72C6B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA7DFC4E22CD3507C4CF0DEBE532C1143D7D72C6B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___keys_7)); }
	inline KeyCollection_t46ACE6A73C75241D4F6E0C04443364FF83C563A0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t46ACE6A73C75241D4F6E0C04443364FF83C563A0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t46ACE6A73C75241D4F6E0C04443364FF83C563A0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ___values_8)); }
	inline ValueCollection_t42705DC1BA2D97E8B5A32AD1D3CFF5CA2E5AFAEF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t42705DC1BA2D97E8B5A32AD1D3CFF5CA2E5AFAEF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t42705DC1BA2D97E8B5A32AD1D3CFF5CA2E5AFAEF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99_H
#ifndef DICTIONARY_2_T5B0506B3A9A974790367DCAF8ED965C4BAA0F947_H
#define DICTIONARY_2_T5B0506B3A9A974790367DCAF8ED965C4BAA0F947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct  Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t475F792738E99DDAD188831A69AAB739D32C2048* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5DED450DD41C6004EB8632EA1BDE90BC1860B614 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF223CF9BE7563F3CBB430A88E7039DE3AF3BA6B0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___entries_1)); }
	inline EntryU5BU5D_t475F792738E99DDAD188831A69AAB739D32C2048* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t475F792738E99DDAD188831A69AAB739D32C2048** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t475F792738E99DDAD188831A69AAB739D32C2048* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___keys_7)); }
	inline KeyCollection_t5DED450DD41C6004EB8632EA1BDE90BC1860B614 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5DED450DD41C6004EB8632EA1BDE90BC1860B614 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5DED450DD41C6004EB8632EA1BDE90BC1860B614 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ___values_8)); }
	inline ValueCollection_tF223CF9BE7563F3CBB430A88E7039DE3AF3BA6B0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF223CF9BE7563F3CBB430A88E7039DE3AF3BA6B0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF223CF9BE7563F3CBB430A88E7039DE3AF3BA6B0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T5B0506B3A9A974790367DCAF8ED965C4BAA0F947_H
#ifndef DICTIONARY_2_TF60AC634A2F87885281BEA4855A5EE729E6B0E7E_H
#define DICTIONARY_2_TF60AC634A2F87885281BEA4855A5EE729E6B0E7E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t78424AEA1BB6E793F1A8704FB166C2AB38596480* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1BE46DF1F77DF17E684DBB3F13969D26E7AB6CF3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1AE0553030100CF5CF4772FAE69A3F5DAF4CEB3B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___entries_1)); }
	inline EntryU5BU5D_t78424AEA1BB6E793F1A8704FB166C2AB38596480* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t78424AEA1BB6E793F1A8704FB166C2AB38596480** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t78424AEA1BB6E793F1A8704FB166C2AB38596480* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___keys_7)); }
	inline KeyCollection_t1BE46DF1F77DF17E684DBB3F13969D26E7AB6CF3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1BE46DF1F77DF17E684DBB3F13969D26E7AB6CF3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1BE46DF1F77DF17E684DBB3F13969D26E7AB6CF3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ___values_8)); }
	inline ValueCollection_t1AE0553030100CF5CF4772FAE69A3F5DAF4CEB3B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1AE0553030100CF5CF4772FAE69A3F5DAF4CEB3B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1AE0553030100CF5CF4772FAE69A3F5DAF4CEB3B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TF60AC634A2F87885281BEA4855A5EE729E6B0E7E_H
#ifndef DICTIONARY_2_T32F25F093828AA9F93CB11C2A2B4648FD62A09BA_H
#define DICTIONARY_2_T32F25F093828AA9F93CB11C2A2B4648FD62A09BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T32F25F093828AA9F93CB11C2A2B4648FD62A09BA_H
#ifndef DICTIONARY_2_TE202E3088A43B362AC7DEB6502BB6093FCFD3E08_H
#define DICTIONARY_2_TE202E3088A43B362AC7DEB6502BB6093FCFD3E08_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct  Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___entries_1)); }
	inline EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___keys_7)); }
	inline KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___values_8)); }
	inline ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TE202E3088A43B362AC7DEB6502BB6093FCFD3E08_H
#ifndef HASHSET_1_T7DD58A661EF6FD2C2A4F3D3B66060D974155D351_H
#define HASHSET_1_T7DD58A661EF6FD2C2A4F3D3B66060D974155D351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351, ____slots_8)); }
	inline SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T7DD58A661EF6FD2C2A4F3D3B66060D974155D351_H
#ifndef LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#define LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#ifndef LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#define LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
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
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef ENUMERATOR_T725320A9593FFA06C5F8F058B3705F530FC9D210_H
#define ENUMERATOR_T725320A9593FFA06C5F8F058B3705F530FC9D210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator<System.Object,System.Object>
struct  Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T725320A9593FFA06C5F8F058B3705F530FC9D210_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
#ifndef NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#define NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef CONNECTIONPROTOCOL_T8837EAF93150A52F2DB997F38F4D1A453EAB131F_H
#define CONNECTIONPROTOCOL_T8837EAF93150A52F2DB997F38F4D1A453EAB131F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t8837EAF93150A52F2DB997F38F4D1A453EAB131F 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t8837EAF93150A52F2DB997F38F4D1A453EAB131F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONPROTOCOL_T8837EAF93150A52F2DB997F38F4D1A453EAB131F_H
#ifndef DEBUGLEVEL_TB13CC0E11B4448D46E215001C9B48813ED0F28BF_H
#define DEBUGLEVEL_TB13CC0E11B4448D46E215001C9B48813ED0F28BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_tB13CC0E11B4448D46E215001C9B48813ED0F28BF 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tB13CC0E11B4448D46E215001C9B48813ED0F28BF, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLEVEL_TB13CC0E11B4448D46E215001C9B48813ED0F28BF_H
#ifndef DELIVERYMODE_TBBE8AE9AC874236473AF7354A6CA81CD02D701F9_H
#define DELIVERYMODE_TBBE8AE9AC874236473AF7354A6CA81CD02D701F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DeliveryMode
struct  DeliveryMode_tBBE8AE9AC874236473AF7354A6CA81CD02D701F9 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_tBBE8AE9AC874236473AF7354A6CA81CD02D701F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELIVERYMODE_TBBE8AE9AC874236473AF7354A6CA81CD02D701F9_H
#ifndef PEERSTATEVALUE_TC68AC73191F244AEEB0D04A0FCF947D0DD5C68D0_H
#define PEERSTATEVALUE_TC68AC73191F244AEEB0D04A0FCF947D0DD5C68D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PeerStateValue
struct  PeerStateValue_tC68AC73191F244AEEB0D04A0FCF947D0DD5C68D0 
{
public:
	// System.Byte ExitGames.Client.Photon.PeerStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PeerStateValue_tC68AC73191F244AEEB0D04A0FCF947D0DD5C68D0, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERSTATEVALUE_TC68AC73191F244AEEB0D04A0FCF947D0DD5C68D0_H
#ifndef SERIALIZATIONPROTOCOL_T6AA42ABF6409393D4953B6B32B7E6073D64E817E_H
#define SERIALIZATIONPROTOCOL_T6AA42ABF6409393D4953B6B32B7E6073D64E817E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t6AA42ABF6409393D4953B6B32B7E6073D64E817E 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t6AA42ABF6409393D4953B6B32B7E6073D64E817E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONPROTOCOL_T6AA42ABF6409393D4953B6B32B7E6073D64E817E_H
#ifndef STATUSCODE_T068DBE918EA6DBF55648D96023D811C4EA977747_H
#define STATUSCODE_T068DBE918EA6DBF55648D96023D811C4EA977747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.StatusCode
struct  StatusCode_t068DBE918EA6DBF55648D96023D811C4EA977747 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t068DBE918EA6DBF55648D96023D811C4EA977747, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUSCODE_T068DBE918EA6DBF55648D96023D811C4EA977747_H
#ifndef CHATDISCONNECTCAUSE_T7A5D48272BF2799FD2450F84DE7C26D030214832_H
#define CHATDISCONNECTCAUSE_T7A5D48272BF2799FD2450F84DE7C26D030214832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatDisconnectCause
struct  ChatDisconnectCause_t7A5D48272BF2799FD2450F84DE7C26D030214832 
{
public:
	// System.Int32 Photon.Chat.ChatDisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatDisconnectCause_t7A5D48272BF2799FD2450F84DE7C26D030214832, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATDISCONNECTCAUSE_T7A5D48272BF2799FD2450F84DE7C26D030214832_H
#ifndef CHATSTATE_TABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_H
#define CHATSTATE_TABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatState
struct  ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79 
{
public:
	// System.Int32 Photon.Chat.ChatState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATSTATE_TABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_H
#ifndef CUSTOMAUTHENTICATIONTYPE_T064351BB19FC77634577630CE69F3541F420CAB8_H
#define CUSTOMAUTHENTICATIONTYPE_T064351BB19FC77634577630CE69F3541F420CAB8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.CustomAuthenticationType
struct  CustomAuthenticationType_t064351BB19FC77634577630CE69F3541F420CAB8 
{
public:
	// System.Byte Photon.Chat.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t064351BB19FC77634577630CE69F3541F420CAB8, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMAUTHENTICATIONTYPE_T064351BB19FC77634577630CE69F3541F420CAB8_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#define BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ByteEnum
struct  ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef PHOTONPEER_TF82D092F7E40D65096AF67EDBC4D1BE161959C33_H
#define PHOTONPEER_TF82D092F7E40D65096AF67EDBC4D1BE161959C33_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 * ___SocketImplementationConfig_9;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_10;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_11;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_14;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_17;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_18;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_19;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_22;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_23;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_24;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_26;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_27;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_29;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___RandomizedSequenceNumbers_30;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4 * ___U3CTrafficStatsIncomingU3Ek__BackingField_31;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_32;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t6BADB5DCF67A5EAE5AE0E5AED0A3F7E49A158FB3 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_33;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___trafficStatsStopwatch_34;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_35;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t8DA0E544F9390AD6DD00BF565DAF59955137C0FF * ___peerBase_36;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_37;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_38;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_39;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___PayloadEncryptionSecret_40;
	// ExitGames.Client.Photon.EncryptorManaged.Encryptor ExitGames.Client.Photon.PhotonPeer::DgramEncryptor
	Encryptor_t4B7965DFA59B5353F6A4B3F45F37EBF07757387E * ___DgramEncryptor_41;
	// ExitGames.Client.Photon.EncryptorManaged.Decryptor ExitGames.Client.Photon.PhotonPeer::DgramDecryptor
	Decryptor_t911865ADBF50A0B6FD2A2609C138724962571E07 * ___DgramDecryptor_42;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_6() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___ClientSdkId_6)); }
	inline uint8_t get_ClientSdkId_6() const { return ___ClientSdkId_6; }
	inline uint8_t* get_address_of_ClientSdkId_6() { return &___ClientSdkId_6; }
	inline void set_ClientSdkId_6(uint8_t value)
	{
		___ClientSdkId_6 = value;
	}

	inline static int32_t get_offset_of_clientVersion_7() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___clientVersion_7)); }
	inline String_t* get_clientVersion_7() const { return ___clientVersion_7; }
	inline String_t** get_address_of_clientVersion_7() { return &___clientVersion_7; }
	inline void set_clientVersion_7(String_t* value)
	{
		___clientVersion_7 = value;
		Il2CppCodeGenWriteBarrier((&___clientVersion_7), value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CSerializationProtocolTypeU3Ek__BackingField_8)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_8() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_8() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_8; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_8(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_9() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___SocketImplementationConfig_9)); }
	inline Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 * get_SocketImplementationConfig_9() const { return ___SocketImplementationConfig_9; }
	inline Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 ** get_address_of_SocketImplementationConfig_9() { return &___SocketImplementationConfig_9; }
	inline void set_SocketImplementationConfig_9(Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 * value)
	{
		___SocketImplementationConfig_9 = value;
		Il2CppCodeGenWriteBarrier((&___SocketImplementationConfig_9), value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CSocketImplementationU3Ek__BackingField_10)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_10() const { return ___U3CSocketImplementationU3Ek__BackingField_10; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_10() { return &___U3CSocketImplementationU3Ek__BackingField_10; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_10(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSocketImplementationU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_DebugOut_11() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___DebugOut_11)); }
	inline uint8_t get_DebugOut_11() const { return ___DebugOut_11; }
	inline uint8_t* get_address_of_DebugOut_11() { return &___DebugOut_11; }
	inline void set_DebugOut_11(uint8_t value)
	{
		___DebugOut_11 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CListenerU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_12() const { return ___U3CListenerU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_12() { return &___U3CListenerU3Ek__BackingField_12; }
	inline void set_U3CListenerU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CListenerU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_13() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___reuseEventInstance_13)); }
	inline bool get_reuseEventInstance_13() const { return ___reuseEventInstance_13; }
	inline bool* get_address_of_reuseEventInstance_13() { return &___reuseEventInstance_13; }
	inline void set_reuseEventInstance_13(bool value)
	{
		___reuseEventInstance_13 = value;
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CEnableServerTracingU3Ek__BackingField_14)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_14() const { return ___U3CEnableServerTracingU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_14() { return &___U3CEnableServerTracingU3Ek__BackingField_14; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_14(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_15() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___quickResendAttempts_15)); }
	inline uint8_t get_quickResendAttempts_15() const { return ___quickResendAttempts_15; }
	inline uint8_t* get_address_of_quickResendAttempts_15() { return &___quickResendAttempts_15; }
	inline void set_quickResendAttempts_15(uint8_t value)
	{
		___quickResendAttempts_15 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_16() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___RhttpMinConnections_16)); }
	inline int32_t get_RhttpMinConnections_16() const { return ___RhttpMinConnections_16; }
	inline int32_t* get_address_of_RhttpMinConnections_16() { return &___RhttpMinConnections_16; }
	inline void set_RhttpMinConnections_16(int32_t value)
	{
		___RhttpMinConnections_16 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_17() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___RhttpMaxConnections_17)); }
	inline int32_t get_RhttpMaxConnections_17() const { return ___RhttpMaxConnections_17; }
	inline int32_t* get_address_of_RhttpMaxConnections_17() { return &___RhttpMaxConnections_17; }
	inline void set_RhttpMaxConnections_17(int32_t value)
	{
		___RhttpMaxConnections_17 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_18() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___ChannelCount_18)); }
	inline uint8_t get_ChannelCount_18() const { return ___ChannelCount_18; }
	inline uint8_t* get_address_of_ChannelCount_18() { return &___ChannelCount_18; }
	inline void set_ChannelCount_18(uint8_t value)
	{
		___ChannelCount_18 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_19() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___crcEnabled_19)); }
	inline bool get_crcEnabled_19() const { return ___crcEnabled_19; }
	inline bool* get_address_of_crcEnabled_19() { return &___crcEnabled_19; }
	inline void set_crcEnabled_19(bool value)
	{
		___crcEnabled_19 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_20() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___SentCountAllowance_20)); }
	inline int32_t get_SentCountAllowance_20() const { return ___SentCountAllowance_20; }
	inline int32_t* get_address_of_SentCountAllowance_20() { return &___SentCountAllowance_20; }
	inline void set_SentCountAllowance_20(int32_t value)
	{
		___SentCountAllowance_20 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_21() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___InitialResendTimeMax_21)); }
	inline int32_t get_InitialResendTimeMax_21() const { return ___InitialResendTimeMax_21; }
	inline int32_t* get_address_of_InitialResendTimeMax_21() { return &___InitialResendTimeMax_21; }
	inline void set_InitialResendTimeMax_21(int32_t value)
	{
		___InitialResendTimeMax_21 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_22() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___TimePingInterval_22)); }
	inline int32_t get_TimePingInterval_22() const { return ___TimePingInterval_22; }
	inline int32_t* get_address_of_TimePingInterval_22() { return &___TimePingInterval_22; }
	inline void set_TimePingInterval_22(int32_t value)
	{
		___TimePingInterval_22 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_23() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___DisconnectTimeout_23)); }
	inline int32_t get_DisconnectTimeout_23() const { return ___DisconnectTimeout_23; }
	inline int32_t* get_address_of_DisconnectTimeout_23() { return &___DisconnectTimeout_23; }
	inline void set_DisconnectTimeout_23(int32_t value)
	{
		___DisconnectTimeout_23 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CTransportProtocolU3Ek__BackingField_24)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_24() const { return ___U3CTransportProtocolU3Ek__BackingField_24; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_24() { return &___U3CTransportProtocolU3Ek__BackingField_24; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_24(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_mtu_26() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___mtu_26)); }
	inline int32_t get_mtu_26() const { return ___mtu_26; }
	inline int32_t* get_address_of_mtu_26() { return &___mtu_26; }
	inline void set_mtu_26(int32_t value)
	{
		___mtu_26 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CIsSendingOnlyAcksU3Ek__BackingField_27)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_27() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_27() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_27; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_27(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_29() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___RandomizeSequenceNumbers_29)); }
	inline bool get_RandomizeSequenceNumbers_29() const { return ___RandomizeSequenceNumbers_29; }
	inline bool* get_address_of_RandomizeSequenceNumbers_29() { return &___RandomizeSequenceNumbers_29; }
	inline void set_RandomizeSequenceNumbers_29(bool value)
	{
		___RandomizeSequenceNumbers_29 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_30() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___RandomizedSequenceNumbers_30)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_RandomizedSequenceNumbers_30() const { return ___RandomizedSequenceNumbers_30; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_RandomizedSequenceNumbers_30() { return &___RandomizedSequenceNumbers_30; }
	inline void set_RandomizedSequenceNumbers_30(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___RandomizedSequenceNumbers_30 = value;
		Il2CppCodeGenWriteBarrier((&___RandomizedSequenceNumbers_30), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CTrafficStatsIncomingU3Ek__BackingField_31)); }
	inline TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4 * get_U3CTrafficStatsIncomingU3Ek__BackingField_31() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_31; }
	inline TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_31() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_31; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_31(TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsIncomingU3Ek__BackingField_31), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CTrafficStatsOutgoingU3Ek__BackingField_32)); }
	inline TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_32() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_32; }
	inline TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_32() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_32; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_32(TrafficStats_t17761FAE93176E8FC18003AC5D7671890ECC39B4 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsOutgoingU3Ek__BackingField_32), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___U3CTrafficStatsGameLevelU3Ek__BackingField_33)); }
	inline TrafficStatsGameLevel_t6BADB5DCF67A5EAE5AE0E5AED0A3F7E49A158FB3 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_33() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_33; }
	inline TrafficStatsGameLevel_t6BADB5DCF67A5EAE5AE0E5AED0A3F7E49A158FB3 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_33() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_33; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_33(TrafficStatsGameLevel_t6BADB5DCF67A5EAE5AE0E5AED0A3F7E49A158FB3 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsGameLevelU3Ek__BackingField_33), value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_34() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___trafficStatsStopwatch_34)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_trafficStatsStopwatch_34() const { return ___trafficStatsStopwatch_34; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_trafficStatsStopwatch_34() { return &___trafficStatsStopwatch_34; }
	inline void set_trafficStatsStopwatch_34(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___trafficStatsStopwatch_34 = value;
		Il2CppCodeGenWriteBarrier((&___trafficStatsStopwatch_34), value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_35() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___trafficStatsEnabled_35)); }
	inline bool get_trafficStatsEnabled_35() const { return ___trafficStatsEnabled_35; }
	inline bool* get_address_of_trafficStatsEnabled_35() { return &___trafficStatsEnabled_35; }
	inline void set_trafficStatsEnabled_35(bool value)
	{
		___trafficStatsEnabled_35 = value;
	}

	inline static int32_t get_offset_of_peerBase_36() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___peerBase_36)); }
	inline PeerBase_t8DA0E544F9390AD6DD00BF565DAF59955137C0FF * get_peerBase_36() const { return ___peerBase_36; }
	inline PeerBase_t8DA0E544F9390AD6DD00BF565DAF59955137C0FF ** get_address_of_peerBase_36() { return &___peerBase_36; }
	inline void set_peerBase_36(PeerBase_t8DA0E544F9390AD6DD00BF565DAF59955137C0FF * value)
	{
		___peerBase_36 = value;
		Il2CppCodeGenWriteBarrier((&___peerBase_36), value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_37() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___SendOutgoingLockObject_37)); }
	inline RuntimeObject * get_SendOutgoingLockObject_37() const { return ___SendOutgoingLockObject_37; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_37() { return &___SendOutgoingLockObject_37; }
	inline void set_SendOutgoingLockObject_37(RuntimeObject * value)
	{
		___SendOutgoingLockObject_37 = value;
		Il2CppCodeGenWriteBarrier((&___SendOutgoingLockObject_37), value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_38() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___DispatchLockObject_38)); }
	inline RuntimeObject * get_DispatchLockObject_38() const { return ___DispatchLockObject_38; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_38() { return &___DispatchLockObject_38; }
	inline void set_DispatchLockObject_38(RuntimeObject * value)
	{
		___DispatchLockObject_38 = value;
		Il2CppCodeGenWriteBarrier((&___DispatchLockObject_38), value);
	}

	inline static int32_t get_offset_of_EnqueueLock_39() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___EnqueueLock_39)); }
	inline RuntimeObject * get_EnqueueLock_39() const { return ___EnqueueLock_39; }
	inline RuntimeObject ** get_address_of_EnqueueLock_39() { return &___EnqueueLock_39; }
	inline void set_EnqueueLock_39(RuntimeObject * value)
	{
		___EnqueueLock_39 = value;
		Il2CppCodeGenWriteBarrier((&___EnqueueLock_39), value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_40() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___PayloadEncryptionSecret_40)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_PayloadEncryptionSecret_40() const { return ___PayloadEncryptionSecret_40; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_PayloadEncryptionSecret_40() { return &___PayloadEncryptionSecret_40; }
	inline void set_PayloadEncryptionSecret_40(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___PayloadEncryptionSecret_40 = value;
		Il2CppCodeGenWriteBarrier((&___PayloadEncryptionSecret_40), value);
	}

	inline static int32_t get_offset_of_DgramEncryptor_41() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___DgramEncryptor_41)); }
	inline Encryptor_t4B7965DFA59B5353F6A4B3F45F37EBF07757387E * get_DgramEncryptor_41() const { return ___DgramEncryptor_41; }
	inline Encryptor_t4B7965DFA59B5353F6A4B3F45F37EBF07757387E ** get_address_of_DgramEncryptor_41() { return &___DgramEncryptor_41; }
	inline void set_DgramEncryptor_41(Encryptor_t4B7965DFA59B5353F6A4B3F45F37EBF07757387E * value)
	{
		___DgramEncryptor_41 = value;
		Il2CppCodeGenWriteBarrier((&___DgramEncryptor_41), value);
	}

	inline static int32_t get_offset_of_DgramDecryptor_42() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33, ___DgramDecryptor_42)); }
	inline Decryptor_t911865ADBF50A0B6FD2A2609C138724962571E07 * get_DgramDecryptor_42() const { return ___DgramDecryptor_42; }
	inline Decryptor_t911865ADBF50A0B6FD2A2609C138724962571E07 ** get_address_of_DgramDecryptor_42() { return &___DgramDecryptor_42; }
	inline void set_DgramDecryptor_42(Decryptor_t911865ADBF50A0B6FD2A2609C138724962571E07 * value)
	{
		___DgramDecryptor_42 = value;
		Il2CppCodeGenWriteBarrier((&___DgramDecryptor_42), value);
	}
};

struct PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33_StaticFields
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_28;

public:
	inline static int32_t get_offset_of_OutgoingStreamBufferSize_25() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33_StaticFields, ___OutgoingStreamBufferSize_25)); }
	inline int32_t get_OutgoingStreamBufferSize_25() const { return ___OutgoingStreamBufferSize_25; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_25() { return &___OutgoingStreamBufferSize_25; }
	inline void set_OutgoingStreamBufferSize_25(int32_t value)
	{
		___OutgoingStreamBufferSize_25 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_28() { return static_cast<int32_t>(offsetof(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33_StaticFields, ___AsyncKeyExchange_28)); }
	inline bool get_AsyncKeyExchange_28() const { return ___AsyncKeyExchange_28; }
	inline bool* get_address_of_AsyncKeyExchange_28() { return &___AsyncKeyExchange_28; }
	inline void set_AsyncKeyExchange_28(bool value)
	{
		___AsyncKeyExchange_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONPEER_TF82D092F7E40D65096AF67EDBC4D1BE161959C33_H
#ifndef SENDOPTIONS_TF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_H
#define SENDOPTIONS_TF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SendOptions
struct  SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields, ___SendReliable_0)); }
	inline SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  value)
	{
		___SendUnreliable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
#endif // SENDOPTIONS_TF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_H
#ifndef AUTHENTICATIONVALUES_TE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_H
#define AUTHENTICATIONVALUES_TE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.AuthenticationValues
struct  AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78  : public RuntimeObject
{
public:
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.String Photon.Chat.AuthenticationValues::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthGetParametersU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthPostDataU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTokenU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIdU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONVALUES_TE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_H
#ifndef CHATCLIENT_T00238E132CA795D7F98C1DE6F433BB231F875505_H
#define CHATCLIENT_T00238E132CA795D7F98C1DE6F433BB231F875505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatClient
struct  ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_2;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_4;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_5;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_6;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_7;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_8;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___U3CAuthValuesU3Ek__BackingField_9;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_10;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * ___PublicChannels_11;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * ___PrivateChannels_12;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * ___PublicChannelsUnsubscribing_13;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_14;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * ___chatPeer_15;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_17;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___statusToSetWhenConnected_18;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject * ___messageToSetWhenConnected_19;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_20;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_21;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CNameServerAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CNameServerAddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameServerAddressU3Ek__BackingField_2() const { return ___U3CNameServerAddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameServerAddressU3Ek__BackingField_2() { return &___U3CNameServerAddressU3Ek__BackingField_2; }
	inline void set_U3CNameServerAddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameServerAddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameServerAddressU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CFrontendAddressU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CFrontendAddressU3Ek__BackingField_3)); }
	inline String_t* get_U3CFrontendAddressU3Ek__BackingField_3() const { return ___U3CFrontendAddressU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CFrontendAddressU3Ek__BackingField_3() { return &___U3CFrontendAddressU3Ek__BackingField_3; }
	inline void set_U3CFrontendAddressU3Ek__BackingField_3(String_t* value)
	{
		___U3CFrontendAddressU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFrontendAddressU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_chatRegion_4() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___chatRegion_4)); }
	inline String_t* get_chatRegion_4() const { return ___chatRegion_4; }
	inline String_t** get_address_of_chatRegion_4() { return &___chatRegion_4; }
	inline void set_chatRegion_4(String_t* value)
	{
		___chatRegion_4 = value;
		Il2CppCodeGenWriteBarrier((&___chatRegion_4), value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CStateU3Ek__BackingField_5)); }
	inline int32_t get_U3CStateU3Ek__BackingField_5() const { return ___U3CStateU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_5() { return &___U3CStateU3Ek__BackingField_5; }
	inline void set_U3CStateU3Ek__BackingField_5(int32_t value)
	{
		___U3CStateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CDisconnectedCauseU3Ek__BackingField_6)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_6() const { return ___U3CDisconnectedCauseU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_6() { return &___U3CDisconnectedCauseU3Ek__BackingField_6; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_6(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAppVersionU3Ek__BackingField_7)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_7() const { return ___U3CAppVersionU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_7() { return &___U3CAppVersionU3Ek__BackingField_7; }
	inline void set_U3CAppVersionU3Ek__BackingField_7(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppVersionU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAppIdU3Ek__BackingField_8)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_8() const { return ___U3CAppIdU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_8() { return &___U3CAppIdU3Ek__BackingField_8; }
	inline void set_U3CAppIdU3Ek__BackingField_8(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppIdU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAuthValuesU3Ek__BackingField_9)); }
	inline AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * get_U3CAuthValuesU3Ek__BackingField_9() const { return ___U3CAuthValuesU3Ek__BackingField_9; }
	inline AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 ** get_address_of_U3CAuthValuesU3Ek__BackingField_9() { return &___U3CAuthValuesU3Ek__BackingField_9; }
	inline void set_U3CAuthValuesU3Ek__BackingField_9(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthValuesU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_MessageLimit_10() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___MessageLimit_10)); }
	inline int32_t get_MessageLimit_10() const { return ___MessageLimit_10; }
	inline int32_t* get_address_of_MessageLimit_10() { return &___MessageLimit_10; }
	inline void set_MessageLimit_10(int32_t value)
	{
		___MessageLimit_10 = value;
	}

	inline static int32_t get_offset_of_PublicChannels_11() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PublicChannels_11)); }
	inline Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * get_PublicChannels_11() const { return ___PublicChannels_11; }
	inline Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 ** get_address_of_PublicChannels_11() { return &___PublicChannels_11; }
	inline void set_PublicChannels_11(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * value)
	{
		___PublicChannels_11 = value;
		Il2CppCodeGenWriteBarrier((&___PublicChannels_11), value);
	}

	inline static int32_t get_offset_of_PrivateChannels_12() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PrivateChannels_12)); }
	inline Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * get_PrivateChannels_12() const { return ___PrivateChannels_12; }
	inline Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 ** get_address_of_PrivateChannels_12() { return &___PrivateChannels_12; }
	inline void set_PrivateChannels_12(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * value)
	{
		___PrivateChannels_12 = value;
		Il2CppCodeGenWriteBarrier((&___PrivateChannels_12), value);
	}

	inline static int32_t get_offset_of_PublicChannelsUnsubscribing_13() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PublicChannelsUnsubscribing_13)); }
	inline HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * get_PublicChannelsUnsubscribing_13() const { return ___PublicChannelsUnsubscribing_13; }
	inline HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 ** get_address_of_PublicChannelsUnsubscribing_13() { return &___PublicChannelsUnsubscribing_13; }
	inline void set_PublicChannelsUnsubscribing_13(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * value)
	{
		___PublicChannelsUnsubscribing_13 = value;
		Il2CppCodeGenWriteBarrier((&___PublicChannelsUnsubscribing_13), value);
	}

	inline static int32_t get_offset_of_listener_14() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___listener_14)); }
	inline RuntimeObject* get_listener_14() const { return ___listener_14; }
	inline RuntimeObject** get_address_of_listener_14() { return &___listener_14; }
	inline void set_listener_14(RuntimeObject* value)
	{
		___listener_14 = value;
		Il2CppCodeGenWriteBarrier((&___listener_14), value);
	}

	inline static int32_t get_offset_of_chatPeer_15() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___chatPeer_15)); }
	inline ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * get_chatPeer_15() const { return ___chatPeer_15; }
	inline ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 ** get_address_of_chatPeer_15() { return &___chatPeer_15; }
	inline void set_chatPeer_15(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * value)
	{
		___chatPeer_15 = value;
		Il2CppCodeGenWriteBarrier((&___chatPeer_15), value);
	}

	inline static int32_t get_offset_of_didAuthenticate_17() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___didAuthenticate_17)); }
	inline bool get_didAuthenticate_17() const { return ___didAuthenticate_17; }
	inline bool* get_address_of_didAuthenticate_17() { return &___didAuthenticate_17; }
	inline void set_didAuthenticate_17(bool value)
	{
		___didAuthenticate_17 = value;
	}

	inline static int32_t get_offset_of_statusToSetWhenConnected_18() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___statusToSetWhenConnected_18)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_statusToSetWhenConnected_18() const { return ___statusToSetWhenConnected_18; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_statusToSetWhenConnected_18() { return &___statusToSetWhenConnected_18; }
	inline void set_statusToSetWhenConnected_18(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___statusToSetWhenConnected_18 = value;
	}

	inline static int32_t get_offset_of_messageToSetWhenConnected_19() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___messageToSetWhenConnected_19)); }
	inline RuntimeObject * get_messageToSetWhenConnected_19() const { return ___messageToSetWhenConnected_19; }
	inline RuntimeObject ** get_address_of_messageToSetWhenConnected_19() { return &___messageToSetWhenConnected_19; }
	inline void set_messageToSetWhenConnected_19(RuntimeObject * value)
	{
		___messageToSetWhenConnected_19 = value;
		Il2CppCodeGenWriteBarrier((&___messageToSetWhenConnected_19), value);
	}

	inline static int32_t get_offset_of_msDeltaForServiceCalls_20() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___msDeltaForServiceCalls_20)); }
	inline int32_t get_msDeltaForServiceCalls_20() const { return ___msDeltaForServiceCalls_20; }
	inline int32_t* get_address_of_msDeltaForServiceCalls_20() { return &___msDeltaForServiceCalls_20; }
	inline void set_msDeltaForServiceCalls_20(int32_t value)
	{
		___msDeltaForServiceCalls_20 = value;
	}

	inline static int32_t get_offset_of_msTimestampOfLastServiceCall_21() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___msTimestampOfLastServiceCall_21)); }
	inline int32_t get_msTimestampOfLastServiceCall_21() const { return ___msTimestampOfLastServiceCall_21; }
	inline int32_t* get_address_of_msTimestampOfLastServiceCall_21() { return &___msTimestampOfLastServiceCall_21; }
	inline void set_msTimestampOfLastServiceCall_21(int32_t value)
	{
		___msTimestampOfLastServiceCall_21 = value;
	}

	inline static int32_t get_offset_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22)); }
	inline bool get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() const { return ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() { return &___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22; }
	inline void set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22(bool value)
	{
		___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATCLIENT_T00238E132CA795D7F98C1DE6F433BB231F875505_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
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
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef CHATPEER_T9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_H
#define CHATPEER_T9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatPeer
struct  ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989  : public PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33
{
public:

public:
};

struct ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * ___ProtocolToNameServerPort_45;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_45() { return static_cast<int32_t>(offsetof(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields, ___ProtocolToNameServerPort_45)); }
	inline Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * get_ProtocolToNameServerPort_45() const { return ___ProtocolToNameServerPort_45; }
	inline Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 ** get_address_of_ProtocolToNameServerPort_45() { return &___ProtocolToNameServerPort_45; }
	inline void set_ProtocolToNameServerPort_45(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * value)
	{
		___ProtocolToNameServerPort_45 = value;
		Il2CppCodeGenWriteBarrier((&___ProtocolToNameServerPort_45), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATPEER_T9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_H
#ifndef FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
#define FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8A209D312FD08A21AFB5551881E7A6946A07C0D5_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210  KeyCollection_GetEnumerator_m5266F82C7802D6360C7309C1F1AFBF418E2720A4_gshared (KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5_gshared (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD31B08C2C495C4E36212D895023AA5FF66C8519A_gshared (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m68022351A81C9EF02FD42CFB383B00B5FD3CEA70_gshared (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Add_m1A3167674F8646F908B2AF4977144E4D8175D695_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m46AC83542050A403FDE1B6323623C4DDC36A83B8_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1_Clear_m8FD867FBD3B9D33C35B1770AC9903EC08460D77F_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_gshared (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_gshared (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_gshared (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_gshared (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7CC3DCFFF5FCC679FE6F67EFE2F18D5C6B9B6781_gshared (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m28A31CB3DBF7F8272C72C9109E19480C1827C365_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28_gshared (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m4594EB8357F5E4068DEE99E351ADE10202D2AF10_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mEB09A437606B0D2679971F0EEE253752EB5230EF_gshared (Dictionary_2_t6F4A67DD06CAE1E4F84595FF415C0CED28AD4759 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC7508A337DF9C700BD3A57266584F22AC03B4E4A_gshared (Dictionary_2_tA8D3E016EE46BB1BC90748D0B3AE8D8BDBA254D5 * __this, uint8_t p0, int32_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAAB5CE555F17A67FEBFAB5FF6796401D8574528F_gshared (Dictionary_2_tA8D3E016EE46BB1BC90748D0B3AE8D8BDBA254D5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD4E28DBE06769DA74C800555DF594B56D2EE36B9_gshared (Dictionary_2_tA8D3E016EE46BB1BC90748D0B3AE8D8BDBA254D5 * __this, uint8_t p0, int32_t p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925 (String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m65F83CD3189C8D6268E6102D8ED41AF39FEAC13B (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_Token()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_mBF95992786D1F113ACB638C0FA65CD3BD56E7A84 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m78D58423114E19C19CA7C0E74F7636B1CEF65978 (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 *, const RuntimeMethod*))HashSet_1__ctor_m8A209D312FD08A21AFB5551881E7A6946A07C0D5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mD612A98620C52EC0C487AC2607D13BFE5883DF3C (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m88DAB47C8CD8CB4C432BFB6252AFAF8423E9DCB1 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_mA2F79A5F2CAA91B9F7917C0EB2B381357A395609 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
inline Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210  KeyCollection_GetEnumerator_m5266F82C7802D6360C7309C1F1AFBF418E2720A4 (KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210  (*) (KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C *, const RuntimeMethod*))KeyCollection_GetEnumerator_m5266F82C7802D6360C7309C1F1AFBF418E2720A4_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5 (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 *, const RuntimeMethod*))Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mD31B08C2C495C4E36212D895023AA5FF66C8519A (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 *, const RuntimeMethod*))Enumerator_MoveNext_mD31B08C2C495C4E36212D895023AA5FF66C8519A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
inline void Enumerator_Dispose_m68022351A81C9EF02FD42CFB383B00B5FD3CEA70 (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 *, const RuntimeMethod*))Enumerator_Dispose_m68022351A81C9EF02FD42CFB383B00B5FD3CEA70_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, p0, p1, method);
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m3B96679B4F495C5A34F6508E1B782A03025FF0A8 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_mBB18A6C1987D39B790FFEC3510EEDDA9A47792EF (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67 (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 *, String_t*, const RuntimeMethod*))HashSet_1_Add_m1A3167674F8646F908B2AF4977144E4D8175D695_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
inline void Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared)(__this, method);
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m19B67631E3168539C3430F820AF289EC84A92C71 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0)
inline bool HashSet_1_Contains_m89784DA0061E40D90808D577E8FA56F7F1FD864B (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 *, String_t*, const RuntimeMethod*))HashSet_1_Contains_m46AC83542050A403FDE1B6323623C4DDC36A83B8_gshared)(__this, p0, method);
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
extern "C" IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m0353B82A64DB8EB949ADBC7FB540F2CBA82766C7 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_TransportProtocol()
extern "C" IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_m80596B1CCC64E1C4E6A8357BE0B31092AAF71E38 (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C" IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_PeerState_m23C482340BFFC31C609099EFE02D25F66288EB4F (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_m189345FB252CD5580637751E546283784611836B (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void ChatPeer__ctor_m2542C0FD85A9D537ABCBF2631C1B304C8C634478 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SerializationProtocolType(ExitGames.Client.Photon.SerializationProtocol)
extern "C" IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_m7FF0070D27ED5B70FECD1A4103F97CB41D9AAF53 (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::.ctor()
inline void Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AppId_mE95E1ABE8A25C1A6E81B0AD13B664D1252EF3B7E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m5A5E34A9C7E5988B95BE2B97B4B9E629388CDF60 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void PhotonPeer_set_QuickResendAttempts_m052CEDDEF81A3698FADBF6BA314916F505883FAE (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Clear()
inline void Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, const RuntimeMethod*))Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
inline void HashSet_1_Clear_m298FD643F827492F4CBFDD6D3AFA7C98D5613D82 (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 *, const RuntimeMethod*))HashSet_1_Clear_m8FD867FBD3B9D33C35B1770AC9903EC08460D77F_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m0C540F3B95F33ECE2ACFCFC0849CBFEB52A254CE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::Connect()
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared)(__this, p0, p1, method);
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m8489A43D338F59809B82EA6435B773375E1D16AC (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * p0, int32_t p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, p0, method);
}
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C (const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
extern "C" IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9 (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, const RuntimeMethod*))Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_gshared)(__this, p0, p1, method);
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_m11D003F58860AF1E9247189738E70020F492A68E (SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m3E44E2CEEB609A39081A7C89EEF1ACA98465B788 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_gshared)(__this, p0, p1, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, String_t* p0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, String_t*, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, p0, p1, method);
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userName0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_mBA3E5590CD58F581BD6D4BCF9C6271E63838F059 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_m66912AAC5F414B5006D0632DE02F47A5A93A5986 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_mE241965F5577B2C1E4A8E779049138AE7EC0D8D3 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_mB02E035F17170A3B08745F67B84CD024123ABE5B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_mC3D8AF899C58C99D991FCB8BE782FF7E95615226 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_m3124E5CC450BC2856BE354D41B437DFC1DF015FF (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m70FB80F29B2F2B314E77619D0BC790C5B30F8278 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_m77C9D1F0666CE7756CE1650606EE7BC7DDBD7E72 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * ___operationResponse0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C" IL2CPP_METHOD_ATTR bool PhotonPeer_EstablishEncryption_mEB77FABA6A0F1BC4C00E232F23C5ABF56B0E2E7A (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppId()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m4A04DF9B4147EE862D8011D4DABF01676FA9B46E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m78125B682E98DF9E51EBCA68E56339F1B0DF87F2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues3, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5 (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_gshared)(__this, p0, method);
}
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mF639F430B4D39B8E99CD0592F5378BBAF4389261 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Add(!0,!1)
inline void Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, String_t* p0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, String_t*, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___senders0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m7CC3DCFFF5FCC679FE6F67EFE2F18D5C6B9B6781 (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, RuntimeObject ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, uint8_t, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m7CC3DCFFF5FCC679FE6F67EFE2F18D5C6B9B6781_gshared)(__this, p0, p1, method);
}
// System.Void Photon.Chat.ChatChannel::ClearProperties()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::ReadProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___newProperties0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
extern "C" IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___users0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.EventData::get_Item(System.Byte)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * EventData_get_Item_m5E9B2E4D668F9C4C7739500A356FDBBAB67775CF (EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(!0)
inline bool Dictionary_2_Remove_m7696A01224568B5D3C5E220A8BF743D2240A14FD (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(!0)
inline bool HashSet_1_Remove_mEDCA9F54B3B975CB449577381947B8A63D208E21 (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 *, String_t*, const RuntimeMethod*))HashSet_1_Remove_m28A31CB3DBF7F8272C72C9109E19480C1827C365_gshared)(__this, p0, method);
}
// System.String ExitGames.Client.Photon.OperationResponse::ToStringFull()
extern "C" IL2CPP_METHOD_ATTR String_t* OperationResponse_ToStringFull_m70633F7313F41CDFC1EEDFE258FE2BFDB89C89E5 (OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28 (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * __this, uint8_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28_gshared)(__this, p0, method);
}
// System.Object ExitGames.Client.Photon.OperationResponse::get_Item(System.Byte)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * OperationResponse_get_Item_m3725B8F5CF7321ACB2A84F3139C9D53B47178058 (OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m8C003146B195901AB47692F9BED186E857D7329E (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_m07693D7264F012BF7FF2331F6773996DDEB50525 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mA768DE355902F1F4CE336618560A1F8CA97C3B5A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
inline int32_t HashSet_1_get_Count_m65D5678595A3788455F478546825DF7A0A69AB91 (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 *, const RuntimeMethod*))HashSet_1_get_Count_m4594EB8357F5E4068DEE99E351ADE10202D2AF10_gshared)(__this, method);
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
extern "C" IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m5ADB67E62EA5959B1B40B3AA29817694D732BD6A (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
extern "C" IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m21ADD2DE29B58D86F4442B98515AEC8560F6435B (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C" IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_UsedProtocol_mB61F95111B1386EFCAB0436EAD7A317D6C28D2CC (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void PhotonPeer__ctor_m527039C38BA59B40F2C39AD210FE00E43AEE237C (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, RuntimeObject* p0, uint8_t p1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
extern "C" IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A (String_t* p0, bool p1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mA5F89C097556DFC9B7D4510C7BB66320304A145C (Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 * __this, uint8_t p0, Type_t * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 *, uint8_t, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_mEB09A437606B0D2679971F0EEE253752EB5230EF_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0B3F9FC4994D9E98DA63E950E3154C0313F6F925 (Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * __this, uint8_t p0, int32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 *, uint8_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mC7508A337DF9C700BD3A57266584F22AC03B4E4A_gshared)(__this, p0, p1, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_mF9009788F989B2EC27E3AF7EB4B884DEA4A4D6E4 (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, const RuntimeMethod* method);
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
extern "C" IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C" IL2CPP_METHOD_ATTR bool PhotonPeer_get_IsEncryptionAvailable_m667743E521D982F6744117BB0CFEE4991ADEDDA8 (PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m9CFA56AB41DC6245B77CD2AC8D3B77FE23167266 (Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 *, const RuntimeMethod*))Dictionary_2__ctor_mAAB5CE555F17A67FEBFAB5FF6796401D8574528F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D (Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * __this, uint8_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 *, uint8_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mD4E28DBE06769DA74C800555DF594B56D2EE36B9_gshared)(__this, p0, p1, method);
}
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
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
extern "C" IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_mF54F5EEA08F655FE0E308C2A67D67BDE23B5B353 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { authType = value; }
		uint8_t L_0 = ___value0;
		__this->set_authType_0(L_0);
		// set { authType = value; }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m65F83CD3189C8D6268E6102D8ED41AF39FEAC13B (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_Token()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m8C003146B195901AB47692F9BED186E857D7329E (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m0353B82A64DB8EB949ADBC7FB540F2CBA82766C7 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_mB355B96F4FBC4B9BB401A26F3EF096DE8B5424B8 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues(string userId)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.UserId = userId;
		String_t* L_0 = ___userId0;
		AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m1BC9852150349878F25D6AC19ECDA739F45C6BDC (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___stringData0, const RuntimeMethod* method)
{
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B2_0 = NULL;
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B3_1 = NULL;
	{
		// this.AuthPostData = (string.IsNullOrEmpty(stringData)) ? null : stringData;
		String_t* L_0 = ___stringData0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		String_t* L_2 = ___stringData0;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m864D065CDB33FAE39B05258C895CBF3416F05A2E (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteData0, const RuntimeMethod* method)
{
	{
		// this.AuthPostData = byteData;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___byteData0;
		AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060(__this, (RuntimeObject *)(RuntimeObject *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_AddAuthParameter_m139C90C8BC229C6C2859F4C331BCBB2F85DFF6B9 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_AddAuthParameter_m139C90C8BC229C6C2859F4C331BCBB2F85DFF6B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// string ampersand = string.IsNullOrEmpty(this.AuthGetParameters) ? string.Empty : "&";
		String_t* L_0 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84(__this, /*hidden argument*/NULL);
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = _stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996;
		goto IL_0019;
	}

IL_0014:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_2;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		// this.AuthGetParameters = string.Format("{0}{1}{2}={3}", this.AuthGetParameters, ampersand, System.Uri.EscapeDataString(key), System.Uri.EscapeDataString(value));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_6;
		String_t* L_9 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		String_t* L_10 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		String_t* L_12 = ___value1;
		String_t* L_13 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		String_t* L_14 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9663A08052B2B050231926A22F7DC859D93D44FF, L_11, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthGetParameters_m65F83CD3189C8D6268E6102D8ED41AF39FEAC13B(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_ToString_m680E3644014EC3FA293F6907A45E60EA69CC0145 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_ToString_m680E3644014EC3FA293F6907A45E60EA69CC0145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("AuthenticationValues UserId: {0}, GetParameters: {1} Token available: {2}", UserId, this.AuthGetParameters, Token != null);
		String_t* L_0 = AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3(__this, /*hidden argument*/NULL);
		String_t* L_1 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84(__this, /*hidden argument*/NULL);
		String_t* L_2 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A(__this, /*hidden argument*/NULL);
		bool L_3 = ((bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0));
		RuntimeObject * L_4 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral17993E6AA42390896507EF1DDDB2A0E8ABD42D12, L_0, L_1, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
extern "C" IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m21ADD2DE29B58D86F4442B98515AEC8560F6435B (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_PublishSubscribers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_PublishSubscribers_mDAE604CDFEDD027C09DDB833E2F739C6CBC6E378 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
extern "C" IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m5ADB67E62EA5959B1B40B3AA29817694D732BD6A (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_MaxSubscribers(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_MaxSubscribers_m19EFDD7FFE47202FF4A21C8B1E69BF55C8F748F0 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_mBF95992786D1F113ACB638C0FA65CD3BD56E7A84 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions__cctor_m42D194A5B5D34EF9DD71AA10DABCA4366846A84D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelCreationOptions__cctor_m42D194A5B5D34EF9DD71AA10DABCA4366846A84D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ChannelCreationOptions Default = new ChannelCreationOptions();
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_0 = (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D *)il2cpp_codegen_object_new(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var);
		ChannelCreationOptions__ctor_mBF95992786D1F113ACB638C0FA65CD3BD56E7A84(L_0, /*hidden argument*/NULL);
		((ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Chat.ChannelWellKnownProperties::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelWellKnownProperties__ctor_m197CE07A15E68A1204264D5DF98E5650BC62E6DC (ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Chat.ChatChannel::get_IsPrivate()
extern "C" IL2CPP_METHOD_ATTR bool ChatChannel_get_IsPrivate_m633BCD8499F4E7DD30105EF27E331D76C2EFD532 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = __this->get_U3CIsPrivateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mF639F430B4D39B8E99CD0592F5378BBAF4389261 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MessageCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MessageCount_m9A22F494E044E317761F13C334C401912D7CCB01 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_get_MessageCount_m9A22F494E044E317761F13C334C401912D7CCB01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MessageCount { get { return this.Messages.Count; } }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = __this->get_Messages_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22(L_0, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_LastMsgId()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatChannel_get_LastMsgId_m5CFD10C550032EBBF21B2154F8DCC1D1D9BEFAEE (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = __this->get_U3CLastMsgIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
extern "C" IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m3B96679B4F495C5A34F6508E1B782A03025FF0A8 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_mBB18A6C1987D39B790FFEC3510EEDDA9A47792EF (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<string> Senders = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_Senders_1(L_0);
		// public readonly List<object> Messages = new List<object>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var);
		List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3(L_1, /*hidden argument*/List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var);
		__this->set_Messages_2(L_1);
		// public readonly HashSet<string> Subscribers = new HashSet<string>();
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_2 = (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 *)il2cpp_codegen_object_new(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m78D58423114E19C19CA7C0E74F7636B1CEF65978(L_2, /*hidden argument*/HashSet_1__ctor_m78D58423114E19C19CA7C0E74F7636B1CEF65978_RuntimeMethod_var);
		__this->set_Subscribers_9(L_2);
		// public ChatChannel(string name)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_3 = ___name0;
		__this->set_Name_0(L_3);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Add(sender);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		String_t* L_1 = ___sender0;
		NullCheck(L_0);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_0, L_1, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// this.Messages.Add(message);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = __this->get_Messages_2();
		RuntimeObject * L_3 = ___message1;
		NullCheck(L_2);
		List_1_Add_m6930161974C7504C80F52EC379EF012387D43138(L_2, L_3, /*hidden argument*/List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var);
		// this.LastMsgId = msgId;
		int32_t L_4 = ___msgId2;
		ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___senders0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.AddRange(senders);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___senders0;
		NullCheck(L_0);
		List_1_AddRange_mD612A98620C52EC0C487AC2607D13BFE5883DF3C(L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1_AddRange_mD612A98620C52EC0C487AC2607D13BFE5883DF3C_RuntimeMethod_var);
		// this.Messages.AddRange(messages);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = __this->get_Messages_2();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___messages1;
		NullCheck(L_2);
		List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984(L_2, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_RuntimeMethod_var);
		// this.LastMsgId = lastMsgId;
		int32_t L_4 = ___lastMsgId2;
		ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (this.MessageLimit <= 0 || this.Messages.Count <= this.MessageLimit)
		int32_t L_0 = __this->get_MessageLimit_3();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22(L_1, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		int32_t L_3 = __this->get_MessageLimit_3();
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// int excessCount = this.Messages.Count - this.MessageLimit;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = __this->get_Messages_2();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22(L_4, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		int32_t L_6 = __this->get_MessageLimit_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		// this.Senders.RemoveRange(0, excessCount);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_7 = __this->get_Senders_1();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_RemoveRange_m88DAB47C8CD8CB4C432BFB6252AFAF8423E9DCB1(L_7, 0, L_8, /*hidden argument*/List_1_RemoveRange_m88DAB47C8CD8CB4C432BFB6252AFAF8423E9DCB1_RuntimeMethod_var);
		// this.Messages.RemoveRange(0, excessCount);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = __this->get_Messages_2();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983(L_9, 0, L_10, /*hidden argument*/List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearMessages()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_m9F330C894A569614B438E1F34AA74BA6B0621A33 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ClearMessages_m9F330C894A569614B438E1F34AA74BA6B0621A33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Clear();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		NullCheck(L_0);
		List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306(L_0, /*hidden argument*/List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306_RuntimeMethod_var);
		// this.Messages.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC(L_1, /*hidden argument*/List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Photon.Chat.ChatChannel::ToStringMessages()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_m4B60A66D61FC42B5B92A4DFB4C9B927C052CAD2C (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ToStringMessages_m4B60A66D61FC42B5B92A4DFB4C9B927C052CAD2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// StringBuilder txt = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < this.Messages.Count; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_000a:
	{
		// txt.AppendLine(string.Format("{0}: {1}", this.Senders[i], this.Messages[i]));
		StringBuilder_t * L_1 = V_0;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = __this->get_Senders_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED(L_2, L_3, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = __this->get_Messages_2();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_7 = List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588(L_5, L_6, /*hidden argument*/List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var);
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral4D3C418A83DE54D710758569DF3FF8391356AFB7, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_AppendLine_mA2F79A5F2CAA91B9F7917C0EB2B381357A395609(L_1, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_10 = V_1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = __this->get_Messages_2();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22(L_11, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000a;
		}
	}
	{
		// return txt.ToString();
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.Void Photon.Chat.ChatChannel::ReadProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___newProperties0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (newProperties != null && newProperties.Count > 0)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_0 = ___newProperties0;
		if (!L_0)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_1 = ___newProperties0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00dd;
		}
	}
	{
		// if (this.properties == null)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_3 = __this->get_properties_6();
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// this.properties = new Dictionary<object, object>(newProperties.Count);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_4 = ___newProperties0;
		NullCheck(L_4);
		int32_t L_5 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_4, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_6 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_RuntimeMethod_var);
		__this->set_properties_6(L_6);
	}

IL_002b:
	{
		// foreach (var k in newProperties.Keys)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_7 = ___newProperties0;
		NullCheck(L_7);
		KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * L_8 = Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3(L_7, /*hidden argument*/Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_RuntimeMethod_var);
		NullCheck(L_8);
		Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210  L_9 = KeyCollection_GetEnumerator_m5266F82C7802D6360C7309C1F1AFBF418E2720A4(L_8, /*hidden argument*/KeyCollection_GetEnumerator_m5266F82C7802D6360C7309C1F1AFBF418E2720A4_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007a;
		}

IL_0039:
		{
			// foreach (var k in newProperties.Keys)
			RuntimeObject * L_10 = Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5((Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5_RuntimeMethod_var);
			V_2 = L_10;
			// if (newProperties[k] == null)
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_11 = ___newProperties0;
			RuntimeObject * L_12 = V_2;
			NullCheck(L_11);
			RuntimeObject * L_13 = Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0067;
			}
		}

IL_004a:
		{
			// if (this.properties.ContainsKey(k))
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_14 = __this->get_properties_6();
			RuntimeObject * L_15 = V_2;
			NullCheck(L_14);
			bool L_16 = Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9(L_14, L_15, /*hidden argument*/Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var);
			if (!L_16)
			{
				goto IL_007a;
			}
		}

IL_0058:
		{
			// this.properties.Remove(k);
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_17 = __this->get_properties_6();
			RuntimeObject * L_18 = V_2;
			NullCheck(L_17);
			Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_17, L_18, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
			// }
			goto IL_007a;
		}

IL_0067:
		{
			// this.properties[k] = newProperties[k];
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_19 = __this->get_properties_6();
			RuntimeObject * L_20 = V_2;
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_21 = ___newProperties0;
			RuntimeObject * L_22 = V_2;
			NullCheck(L_21);
			RuntimeObject * L_23 = Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B(L_21, L_22, /*hidden argument*/Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_RuntimeMethod_var);
			NullCheck(L_19);
			Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_19, L_20, L_23, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
		}

IL_007a:
		{
			// foreach (var k in newProperties.Keys)
			bool L_24 = Enumerator_MoveNext_mD31B08C2C495C4E36212D895023AA5FF66C8519A((Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mD31B08C2C495C4E36212D895023AA5FF66C8519A_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0039;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x93, FINALLY_0085);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m68022351A81C9EF02FD42CFB383B00B5FD3CEA70((Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m68022351A81C9EF02FD42CFB383B00B5FD3CEA70_RuntimeMethod_var);
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0093:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.PublishSubscribers, out temp))
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_25 = __this->get_properties_6();
		uint8_t L_26 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_27 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_25);
		bool L_28 = Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3(L_25, L_27, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		// this.PublishSubscribers = (bool)temp;
		RuntimeObject * L_29 = V_0;
		ChatChannel_set_PublishSubscribers_m3B96679B4F495C5A34F6508E1B782A03025FF0A8(__this, ((*(bool*)((bool*)UnBox(L_29, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.MaxSubscribers, out temp))
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_30 = __this->get_properties_6();
		uint8_t L_31 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_32 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_30);
		bool L_33 = Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3(L_30, L_32, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		// this.MaxSubscribers = (int)temp;
		RuntimeObject * L_34 = V_0;
		ChatChannel_set_MaxSubscribers_mBB18A6C1987D39B790FFEC3510EEDDA9A47792EF(__this, ((*(int32_t*)((int32_t*)UnBox(L_34, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___users0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (users == null)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___users0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// for (int i = 0; i < users.Length; i++)
		V_0 = 0;
		goto IL_001b;
	}

IL_0008:
	{
		// this.Subscribers.Add(users[i]);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_1 = __this->get_Subscribers_9();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = ___users0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67(L_1, L_5, /*hidden argument*/HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67_RuntimeMethod_var);
		// for (int i = 0; i < users.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001b:
	{
		// for (int i = 0; i < users.Length; i++)
		int32_t L_7 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = ___users0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearProperties()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.properties != null && this.properties.Count > 0)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_0 = __this->get_properties_6();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_1 = __this->get_properties_6();
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		// this.properties.Clear();
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_3 = __this->get_properties_6();
		NullCheck(L_3);
		Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4(L_3, /*hidden argument*/Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_RuntimeMethod_var);
	}

IL_0021:
	{
		// }
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
// System.String Photon.Chat.ChatClient::get_NameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_NameServerAddress_m7D7B6D70DD084E9F743D533E212BCEB0D21F9AB6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = __this->get_U3CNameServerAddressU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m0C540F3B95F33ECE2ACFCFC0849CBFEB52A254CE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_m07693D7264F012BF7FF2331F6773996DDEB50525 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_ChatRegion()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_ChatRegion_mB20543051AF0671DA116ACEAD9401D40DB4AA50D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatRegion; }
		String_t* L_0 = __this->get_chatRegion_4();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m7289821CA746E71FDFFD006B04AFB4B176EC322D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatRegion = value; }
		String_t* L_0 = ___value0;
		__this->set_chatRegion_4(L_0);
		// set { this.chatRegion = value; }
		return;
	}
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_5(L_0);
		return;
	}
}
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.State == ChatState.ConnectedToFrontEnd && this.HasPeer; }
		int32_t L_0 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Chat.ChatClient::CanChatInChannel(System.String)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_CanChatInChannel_m0E3D8A49CB86A21CBFFFEDAF71C31637C3D676D8 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_CanChatInChannel_m0E3D8A49CB86A21CBFFFEDAF71C31637C3D676D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.CanChat && this.PublicChannels.ContainsKey(channelName) && !this.PublicChannelsUnsubscribing.Contains(channelName);
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_1 = __this->get_PublicChannels_11();
		String_t* L_2 = ___channelName0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m19B67631E3168539C3430F820AF289EC84A92C71(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m19B67631E3168539C3430F820AF289EC84A92C71_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_4 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_5 = ___channelName0;
		NullCheck(L_4);
		bool L_6 = HashSet_1_Contains_m89784DA0061E40D90808D577E8FA56F7F1FD864B(L_4, L_5, /*hidden argument*/HashSet_1_Contains_m89784DA0061E40D90808D577E8FA56F7F1FD864B_RuntimeMethod_var);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatPeer != null; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		return (bool)((!(((RuntimeObject*)(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.String Photon.Chat.ChatClient::get_AppVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m78125B682E98DF9E51EBCA68E56339F1B0DF87F2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m5A5E34A9C7E5988B95BE2B97B4B9E629388CDF60 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_AppId()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m4A04DF9B4147EE862D8011D4DABF01676FA9B46E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AppId_mE95E1ABE8A25C1A6E81B0AD13B664D1252EF3B7E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_8(L_0);
		return;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
extern "C" IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// return (this.AuthValues != null) ? this.AuthValues.UserId : null;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_1 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_1 = (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)il2cpp_codegen_object_new(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m0353B82A64DB8EB949ADBC7FB540F2CBA82766C7(L_1, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2(__this, L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// this.AuthValues.UserId = value;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_2 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_UseBackgroundWorkerForSending(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m7D2F9FCA3BE476FA62C7119BAC85F9A72949BA19 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22(L_0);
		return;
	}
}
// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatClient::get_TransportProtocol()
extern "C" IL2CPP_METHOD_ATTR uint8_t ChatClient_get_TransportProtocol_mBE8F0D73EB74B65519262D7A02ACC64491487C5F (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatPeer.TransportProtocol; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		uint8_t L_1 = PhotonPeer_get_TransportProtocol_m80596B1CCC64E1C4E6A8357BE0B31092AAF71E38(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_m05D798507F5148C392BBB4732F25583E1A2DB0D8 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_set_TransportProtocol_m05D798507F5148C392BBB4732F25583E1A2DB0D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	RuntimeObject* G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B5_3 = NULL;
	{
		// if (this.chatPeer == null || this.chatPeer.PeerState != PeerStateValue.Disconnected)
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_m23C482340BFFC31C609099EFE02D25F66288EB4F(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}

IL_0015:
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Can't set TransportProtocol. Disconnect first! " + ((this.chatPeer != null) ? "PeerState: " + this.chatPeer.PeerState : "The chatPeer is null."));
		RuntimeObject* L_3 = __this->get_listener_14();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_4 = __this->get_chatPeer_15();
		G_B3_0 = _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
		G_B3_1 = 2;
		G_B3_2 = L_3;
		if (L_4)
		{
			G_B4_0 = _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
			G_B4_1 = 2;
			G_B4_2 = L_3;
			goto IL_0030;
		}
	}
	{
		G_B5_0 = _stringLiteralD6CA3F0561CBE6D60E45676F583A5694EA29884B;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_004a;
	}

IL_0030:
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_15();
		NullCheck(L_5);
		uint8_t L_6 = PhotonPeer_get_PeerState_m23C482340BFFC31C609099EFE02D25F66288EB4F(L_5, /*hidden argument*/NULL);
		uint8_t L_7 = L_6;
		RuntimeObject * L_8 = Box(PeerStateValue_tC68AC73191F244AEEB0D04A0FCF947D0DD5C68D0_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral0ED3124668F532717B0D69F6EAA15F42A8393B1D, L_8, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_004a:
	{
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		NullCheck(G_B5_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, G_B5_3, G_B5_2, L_10);
		// return;
		return;
	}

IL_0055:
	{
		// this.chatPeer.TransportProtocol = value;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_11 = __this->get_chatPeer_15();
		uint8_t L_12 = ___value0;
		NullCheck(L_11);
		PhotonPeer_set_TransportProtocol_m189345FB252CD5580637751E546283784611836B(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> Photon.Chat.ChatClient::get_SocketImplementationConfig()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 * ChatClient_get_SocketImplementationConfig_mD6162720E02E8DAFD02CFCF47A97BF56A1CCAFE6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatPeer.SocketImplementationConfig; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 * L_1 = ((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)L_0)->get_SocketImplementationConfig_9();
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void ChatClient__ctor_mFF98B1813B75359BB8BB6FBFEB7A072EE59AB665 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient__ctor_mFF98B1813B75359BB8BB6FBFEB7A072EE59AB665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string chatRegion = "EU";
		__this->set_chatRegion_4(_stringLiteralC82D1B09CF32291761D4D994CF71D150CBFAB21C);
		// private int msDeltaForServiceCalls = 50;
		__this->set_msDeltaForServiceCalls_20(((int32_t)50));
		// public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_14(L_0);
		// this.State = ChatState.Uninitialized;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, 0, /*hidden argument*/NULL);
		// this.chatPeer = new ChatPeer(this, protocol);
		uint8_t L_1 = ___protocol1;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 *)il2cpp_codegen_object_new(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var);
		ChatPeer__ctor_m2542C0FD85A9D537ABCBF2631C1B304C8C634478(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_chatPeer_15(L_2);
		// this.chatPeer.SerializationProtocolType = SerializationProtocol.GpBinaryV18;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_3 = __this->get_chatPeer_15();
		NullCheck(L_3);
		PhotonPeer_set_SerializationProtocolType_m7FF0070D27ED5B70FECD1A4103F97CB41D9AAF53(L_3, 1, /*hidden argument*/NULL);
		// this.PublicChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_4 = (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *)il2cpp_codegen_object_new(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9(L_4, /*hidden argument*/Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9_RuntimeMethod_var);
		__this->set_PublicChannels_11(L_4);
		// this.PrivateChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_5 = (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *)il2cpp_codegen_object_new(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9(L_5, /*hidden argument*/Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9_RuntimeMethod_var);
		__this->set_PrivateChannels_12(L_5);
		// this.PublicChannelsUnsubscribing = new HashSet<string>();
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_6 = (HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 *)il2cpp_codegen_object_new(HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m78D58423114E19C19CA7C0E74F7636B1CEF65978(L_6, /*hidden argument*/HashSet_1__ctor_m78D58423114E19C19CA7C0E74F7636B1CEF65978_RuntimeMethod_var);
		__this->set_PublicChannelsUnsubscribing_13(L_6);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		// this.chatPeer.TimePingInterval = 3000;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)L_0)->set_TimePingInterval_22(((int32_t)3000));
		// this.DisconnectedCause = ChatDisconnectCause.None;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE(__this, 0, /*hidden argument*/NULL);
		// this.AuthValues = authValues;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_1 = ___authValues2;
		ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2(__this, L_1, /*hidden argument*/NULL);
		// this.AppId = appId;
		String_t* L_2 = ___appId0;
		ChatClient_set_AppId_mE95E1ABE8A25C1A6E81B0AD13B664D1252EF3B7E(__this, L_2, /*hidden argument*/NULL);
		// this.AppVersion = appVersion;
		String_t* L_3 = ___appVersion1;
		ChatClient_set_AppVersion_m5A5E34A9C7E5988B95BE2B97B4B9E629388CDF60(__this, L_3, /*hidden argument*/NULL);
		// this.didAuthenticate = false;
		__this->set_didAuthenticate_17((bool)0);
		// this.chatPeer.QuickResendAttempts = 2;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_4 = __this->get_chatPeer_15();
		NullCheck(L_4);
		PhotonPeer_set_QuickResendAttempts_m052CEDDEF81A3698FADBF6BA314916F505883FAE(L_4, (uint8_t)2, /*hidden argument*/NULL);
		// this.chatPeer.SentCountAllowance = 7;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_15();
		NullCheck(L_5);
		((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)L_5)->set_SentCountAllowance_20(7);
		// this.PublicChannels.Clear();
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PublicChannels_11();
		NullCheck(L_6);
		Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5(L_6, /*hidden argument*/Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5_RuntimeMethod_var);
		// this.PrivateChannels.Clear();
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_7 = __this->get_PrivateChannels_12();
		NullCheck(L_7);
		Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5(L_7, /*hidden argument*/Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Clear();
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_8 = __this->get_PublicChannelsUnsubscribing_13();
		NullCheck(L_8);
		HashSet_1_Clear_m298FD643F827492F4CBFDD6D3AFA7C98D5613D82(L_8, /*hidden argument*/HashSet_1_Clear_m298FD643F827492F4CBFDD6D3AFA7C98D5613D82_RuntimeMethod_var);
		// this.NameServerAddress = this.chatPeer.NameServerAddress;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_9 = __this->get_chatPeer_15();
		NullCheck(L_9);
		String_t* L_10 = ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02(L_9, /*hidden argument*/NULL);
		ChatClient_set_NameServerAddress_m0C540F3B95F33ECE2ACFCFC0849CBFEB52A254CE(__this, L_10, /*hidden argument*/NULL);
		// bool isConnecting = this.chatPeer.Connect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_11 = __this->get_chatPeer_15();
		NullCheck(L_11);
		bool L_12 = ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35(L_11, /*hidden argument*/NULL);
		// if (isConnecting)
		bool L_13 = L_12;
		G_B1_0 = L_13;
		if (!L_13)
		{
			G_B2_0 = L_13;
			goto IL_0092;
		}
	}
	{
		// this.State = ChatState.ConnectingToNameServer;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, 1, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_0092:
	{
		// if (this.UseBackgroundWorkerForSending)
		bool L_14 = ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96(__this, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (!L_14)
		{
			G_B4_0 = G_B2_0;
			goto IL_00b7;
		}
	}
	{
		// SupportClass.StartBackgroundCalls(this.SendOutgoingInBackground, this.msDeltaForServiceCalls, "ChatClient Service Thread");
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_15 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_15, __this, (intptr_t)((intptr_t)ChatClient_SendOutgoingInBackground_mFCE2C7CB1440F773487CFD739D99E07772F8EC3D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		int32_t L_16 = __this->get_msDeltaForServiceCalls_20();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t3851BE3E18B855C4EA3E2167668E403FB7C05B61_il2cpp_TypeInfo_var);
		SupportClass_StartBackgroundCalls_m8489A43D338F59809B82EA6435B773375E1D16AC(L_15, L_16, _stringLiteral8CBF6943194FAE819E8AFA76DB6AA5FEDEF2323B, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_00b7:
	{
		// return isConnecting;
		return G_B4_0;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectAndSetStatus(System.String,System.String,Photon.Chat.AuthenticationValues,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_ConnectAndSetStatus_m162558B2D8D1C60B39E7DB974A927D8425E72EA9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, int32_t ___status3, RuntimeObject * ___message4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectAndSetStatus_m162558B2D8D1C60B39E7DB974A927D8425E72EA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statusToSetWhenConnected = status;
		int32_t L_0 = ___status3;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		__this->set_statusToSetWhenConnected_18(L_1);
		// messageToSetWhenConnected = message;
		RuntimeObject * L_2 = ___message4;
		__this->set_messageToSetWhenConnected_19(L_2);
		// return Connect(appId, appVersion, authValues);
		String_t* L_3 = ___appId0;
		String_t* L_4 = ___appVersion1;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_5 = ___authValues2;
		bool L_6 = ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Photon.Chat.ChatClient::Service()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_Service_mED248E3187E65DE3848FA9AC5C74CCD77084F31E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{

IL_0000:
	{
		// while (this.HasPeer && this.chatPeer.DispatchIncomingCommands())
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands() */, L_1);
		if (L_2)
		{
			goto IL_0000;
		}
	}

IL_0015:
	{
		// if (!this.UseBackgroundWorkerForSending)
		bool L_3 = ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0059;
		}
	}
	{
		// if (Environment.TickCount - this.msTimestampOfLastServiceCall > this.msDeltaForServiceCalls || this.msTimestampOfLastServiceCall == 0)
		int32_t L_4 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		int32_t L_5 = __this->get_msTimestampOfLastServiceCall_21();
		int32_t L_6 = __this->get_msDeltaForServiceCalls_20();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_6)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_7 = __this->get_msTimestampOfLastServiceCall_21();
		if (L_7)
		{
			goto IL_0059;
		}
	}

IL_0039:
	{
		// this.msTimestampOfLastServiceCall = Environment.TickCount;
		int32_t L_8 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		__this->set_msTimestampOfLastServiceCall_21(L_8);
	}

IL_0044:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_9 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_10 = __this->get_chatPeer_15();
		NullCheck(L_10);
		bool L_11 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_10);
		if (L_11)
		{
			goto IL_0044;
		}
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendOutgoingInBackground()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendOutgoingInBackground_mFCE2C7CB1440F773487CFD739D99E07772F8EC3D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{

IL_0000:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_1);
		if (L_2)
		{
			goto IL_0000;
		}
	}

IL_0015:
	{
		// return this.State != ChatState.Disconnected;
		int32_t L_3 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Photon.Chat.ChatClient::SendAcksOnly()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_SendAcksOnly_mF4F12526351DFEF1834FDC696EA1B1833FEE844D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly() */, L_1);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::Disconnect()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m2809C9E9AE4C42D30A5ACD49E1AC50B0062ED6F0 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// if (this.HasPeer && this.chatPeer.PeerState != PeerStateValue.Disconnected)
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_m23C482340BFFC31C609099EFE02D25F66288EB4F(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// this.chatPeer.Disconnect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_3 = __this->get_chatPeer_15();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_3);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::StopThread()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_StopThread_m61785BBD8497669B402197D0830856ED8979C0B9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// if (this.HasPeer)
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// this.chatPeer.StopThread();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m196511BB250D1E60FCD2722A0B4A9CB119E22089 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, const RuntimeMethod* method)
{
	{
		// return this.Subscribe(channels, 0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___channels0;
		bool L_1 = ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m893C4C80A0E16F7FA6400AB703B108A26D181E6B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___lastMsgIds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m893C4C80A0E16F7FA6400AB703B108A26D181E6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// for (int i = 0; i < channels.Length; i++)
		V_1 = 0;
		goto IL_0080;
	}

IL_004b:
	{
		// if (string.IsNullOrEmpty(channels[i]))
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___channels0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_12 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)1)))
		{
			goto IL_007a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Subscribe can't be called with a null or empty channel name at index {0}.", i));
		RuntimeObject* L_13 = __this->get_listener_14();
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralA31D385B9DEE1897A2E6840A59DF969194B69490, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_13, 1, L_17);
	}

IL_007a:
	{
		// return false;
		return (bool)0;
	}

IL_007c:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0080:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_19 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = ___channels0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004b;
		}
	}
	{
		// if (lastMsgIds == null || lastMsgIds.Length != channels.Length)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = ___lastMsgIds1;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = ___lastMsgIds1;
		NullCheck(L_22);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = ___channels0;
		NullCheck(L_23);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_00ad;
		}
	}

IL_0091:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_24 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe can't be called when \"lastMsgIds\" array is null or does not have the same length as \"channels\" array.");
		RuntimeObject* L_25 = __this->get_listener_14();
		NullCheck(L_25);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_25, 1, _stringLiteralC82DBB40CF62E9201ED272DC15F939C724CD3E7D);
	}

IL_00ab:
	{
		// return false;
		return (bool)0;
	}

IL_00ad:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object>
		// {
		//     { ChatParameterCode.Channels, channels },
		//     { ChatParameterCode.MsgIds,  lastMsgIds},
		//     { ChatParameterCode.HistoryLength, -1 } // server will decide how many messages to send to client
		// };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_26 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_26, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_27 = L_26;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = ___channels0;
		NullCheck(L_27);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_27, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_28, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_29 = L_27;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_30 = ___lastMsgIds1;
		NullCheck(L_29);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_29, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_30, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_31 = L_29;
		int32_t L_32 = (-1);
		RuntimeObject * L_33 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_31, (uint8_t)((int32_t)14), L_33, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		V_0 = L_31;
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_34 = __this->get_chatPeer_15();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_36 = ((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_34);
		bool L_37 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_34, (uint8_t)0, L_35, L_36);
		return L_37;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// return this.SendChannelOperation(channels, (byte)ChatOperationCode.Subscribe, messagesFromHistory);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___channels0;
		int32_t L_8 = ___messagesFromHistory1;
		bool L_9 = ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B(__this, L_7, (uint8_t)0, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_m08903334236B22619BBF51877E1D55F452B744A4 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Unsubscribe_m08903334236B22619BBF51877E1D55F452B744A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Unsubscribe called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral5618474235217E524A45AD712574B23E84EED6AD);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Unsubscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral11B6F3557420C105118FCE7DD35DEC9F19E23C3D);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// foreach (string ch in channels)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___channels0;
		V_0 = L_7;
		V_1 = 0;
		goto IL_0062;
	}

IL_004d:
	{
		// foreach (string ch in channels)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		// this.PublicChannelsUnsubscribing.Add(ch);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_12 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67(L_12, L_13, /*hidden argument*/HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67_RuntimeMethod_var);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0062:
	{
		// foreach (string ch in channels)
		int32_t L_15 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_004d;
		}
	}
	{
		// return this.SendChannelOperation(channels, ChatOperationCode.Unsubscribe, 0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = ___channels0;
		bool L_18 = ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B(__this, L_17, (uint8_t)1, 0, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_mE7E4781C58ED7469BC64F761BA3F89CD1B1F6D22 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		// return this.publishMessage(channelName, message, true, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1(__this, L_0, L_1, (bool)1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessageUnreliable(System.String,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_PublishMessageUnreliable_m94476FE1F5C9CBD843731D302F744FBF66CC6A11 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		// return this.publishMessage(channelName, message, false, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "PublishMessage called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3D618361EC8C202858B123986AEA7B042531080B);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (string.IsNullOrEmpty(channelName) || message == null)
		String_t* L_3 = ___channelName0;
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_5 = ___message1;
		if (L_5)
		{
			goto IL_004b;
		}
	}

IL_002f:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_6 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0049;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "PublishMessage parameters must be non-null and not empty.");
		RuntimeObject* L_7 = __this->get_listener_14();
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_7, 2, _stringLiteral338B2B6C4BBAA566799E30C0FFE0EB3E1AD56F71);
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { (byte)ChatParameterCode.Channel, channelName },
		//         { (byte)ChatParameterCode.Message, message }
		//     };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_8 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_8, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_9 = L_8;
		String_t* L_10 = ___channelName0;
		NullCheck(L_9);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_9, (uint8_t)1, L_10, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_11 = L_9;
		RuntimeObject * L_12 = ___message1;
		NullCheck(L_11);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_11, (uint8_t)3, L_12, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		V_0 = L_11;
		// if (forwardAsWebhook)
		bool L_13 = ___forwardAsWebhook3;
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_14 = V_0;
		uint8_t L_15 = ((uint8_t)1);
		RuntimeObject * L_16 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_14);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_14, (uint8_t)((int32_t)21), L_16, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
	}

IL_0073:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Publish, parameters, new SendOptions() { Reliability = reliable });
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_17 = __this->get_chatPeer_15();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_18 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 ));
		bool L_19 = ___reliable2;
		SendOptions_set_Reliability_m11D003F58860AF1E9247189738E70020F492A68E((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 *)(&V_1), L_19, /*hidden argument*/NULL);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_20 = V_1;
		NullCheck(L_17);
		bool L_21 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)2, L_18, L_20);
		return L_21;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_mDE071B153CA6CF674595F5E18EE27933F6EC9078 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		// return this.SendPrivateMessage(target, message, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_SendPrivateMessage_m3E44E2CEEB609A39081A7C89EEF1ACA98465B788(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m3E44E2CEEB609A39081A7C89EEF1ACA98465B788 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	{
		// return this.sendPrivateMessage(target, message, encrypt, true, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4 = ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B(__this, L_0, L_1, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessageUnreliable(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessageUnreliable_m268D11AD0586400E5DA90EB0D20AE6703550871B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	{
		// return this.sendPrivateMessage(target, message, encrypt, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4 = ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B(__this, L_0, L_1, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SendPrivateMessage called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteralABB11E10EF4F1912CA124A43EDFCF7E4236BF4B3);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (string.IsNullOrEmpty(target) || message == null)
		String_t* L_3 = ___target0;
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_5 = ___message1;
		if (L_5)
		{
			goto IL_004b;
		}
	}

IL_002f:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_6 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0049;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "SendPrivateMessage parameters must be non-null and not empty.");
		RuntimeObject* L_7 = __this->get_listener_14();
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_7, 2, _stringLiteral7BEA53D7765CB5C320CAF9A0C3283A4E5AF00416);
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.UserId, target },
		//         { ChatParameterCode.Message, message }
		//     };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_8 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_8, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_9 = L_8;
		String_t* L_10 = ___target0;
		NullCheck(L_9);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_9, (uint8_t)((int32_t)225), L_10, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_11 = L_9;
		RuntimeObject * L_12 = ___message1;
		NullCheck(L_11);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_11, (uint8_t)3, L_12, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		V_0 = L_11;
		// if (forwardAsWebhook)
		bool L_13 = ___forwardAsWebhook4;
		if (!L_13)
		{
			goto IL_0077;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_14 = V_0;
		uint8_t L_15 = ((uint8_t)1);
		RuntimeObject * L_16 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_14);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_14, (uint8_t)((int32_t)21), L_16, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
	}

IL_0077:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.SendPrivate, parameters, new SendOptions() { Reliability = reliable, Encrypt = encrypt });
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_17 = __this->get_chatPeer_15();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_18 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 ));
		bool L_19 = ___reliable3;
		SendOptions_set_Reliability_m11D003F58860AF1E9247189738E70020F492A68E((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 *)(&V_1), L_19, /*hidden argument*/NULL);
		bool L_20 = ___encrypt2;
		(&V_1)->set_Encrypt_3(L_20);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_21 = V_1;
		NullCheck(L_17);
		bool L_22 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)3, L_18, L_21);
		return L_22;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SetOnlineStatus called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral21D80703A6C8D4036492B5E5021EDB6DA533D41D);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Status, status },
		//     };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_3 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_3, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_4 = L_3;
		int32_t L_5 = ___status0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_4, (uint8_t)((int32_t)10), L_7, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		V_0 = L_4;
		// if (skipMessage)
		bool L_8 = ___skipMessage2;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// parameters[ChatParameterCode.SkipMessage] = true;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_9 = V_0;
		bool L_10 = ((bool)1);
		RuntimeObject * L_11 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_9, (uint8_t)((int32_t)12), L_11, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
		// }
		goto IL_0053;
	}

IL_004b:
	{
		// parameters[ChatParameterCode.Message] = message;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_12 = V_0;
		RuntimeObject * L_13 = ___message1;
		NullCheck(L_12);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_12, (uint8_t)3, L_13, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
	}

IL_0053:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.UpdateStatus, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_14 = __this->get_chatPeer_15();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_16 = ((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_14);
		bool L_17 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_14, (uint8_t)5, L_15, L_16);
		return L_17;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m4033915D5F5EBE6DDAABC71BAF8C4ED03AB4B882 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	{
		// return this.SetOnlineStatus(status, null, true);
		int32_t L_0 = ___status0;
		bool L_1 = ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726(__this, L_0, NULL, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mA768DE355902F1F4CE336618560A1F8CA97C3B5A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method)
{
	{
		// return this.SetOnlineStatus(status, message, false);
		int32_t L_0 = ___status0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_mEAEC8761F53432233CE0D9F7B7DCB49AAA911BE0 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_AddFriends_mEAEC8761F53432233CE0D9F7B7DCB49AAA911BE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "AddFriends called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral68E21592360E435244D8BD55506FC51CCA67E430);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___friends0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___friends0;
		NullCheck(L_4);
		if ((((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends can't be called for empty or null list.");
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_6, 2, _stringLiteralCC8A9D016C6E2C07A8B03493514472F62C594C42);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___friends0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_009b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_0099;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_9 = __this->get_listener_14();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = ___friends0;
		NullCheck(L_13);
		int32_t L_14 = (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))));
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = ((int32_t)1024);
		RuntimeObject * L_19 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		String_t* L_20 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_9, 2, L_20);
	}

IL_0099:
	{
		// return false;
		return (bool)0;
	}

IL_009b:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_21 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_21, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_22 = L_21;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = ___friends0;
		NullCheck(L_22);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_22, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_23, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		V_0 = L_22;
		// return this.chatPeer.SendOperation(ChatOperationCode.AddFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_24 = __this->get_chatPeer_15();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_26 = ((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_24);
		bool L_27 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_24, (uint8_t)6, L_25, L_26);
		return L_27;
	}
}
// System.Boolean Photon.Chat.ChatClient::RemoveFriends(System.String[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_RemoveFriends_m47EB90FCB9DF43FDF98FFB258B56EBD7AB35578D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_RemoveFriends_m47EB90FCB9DF43FDF98FFB258B56EBD7AB35578D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "RemoveFriends called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteralABF28A6D84BA34B35ADF7EB356198FF5875435E5);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___friends0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___friends0;
		NullCheck(L_4);
		if ((((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends can't be called for empty or null list.");
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral29683C1799AE0C427BB58C8BF974A0FB8AA9BFC9);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___friends0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_009b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_0099;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_9 = __this->get_listener_14();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = ___friends0;
		NullCheck(L_13);
		int32_t L_14 = (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))));
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = ((int32_t)1024);
		RuntimeObject * L_19 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		String_t* L_20 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_9, 2, L_20);
	}

IL_0099:
	{
		// return false;
		return (bool)0;
	}

IL_009b:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_21 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_21, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_22 = L_21;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = ___friends0;
		NullCheck(L_22);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_22, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_23, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		V_0 = L_22;
		// return this.chatPeer.SendOperation(ChatOperationCode.RemoveFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_24 = __this->get_chatPeer_15();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_26 = ((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_24);
		bool L_27 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_24, (uint8_t)7, L_25, L_26);
		return L_27;
	}
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}:{1}", this.UserId, userName);
		String_t* L_0 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userName0;
		String_t* L_2 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannelU26)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isPrivate)
		bool L_0 = ___isPrivate1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// return this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_1 = __this->get_PublicChannels_11();
		String_t* L_2 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_3 = ___channel2;
		NullCheck(L_1);
		bool L_4 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_1, L_2, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_3, /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		return L_4;
	}

IL_0011:
	{
		// return this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_5 = __this->get_PrivateChannels_12();
		String_t* L_6 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_7 = ___channel2;
		NullCheck(L_5);
		bool L_8 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_5, L_6, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_7, /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		return L_8;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannelU26)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m3010392F7956037B208A9373C681A29A818B4BD6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryGetChannel_m3010392F7956037B208A9373C681A29A818B4BD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// found = this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_0 = __this->get_PublicChannels_11();
		String_t* L_1 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_2 = ___channel1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_0, L_1, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		// if (found) return true;
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// if (found) return true;
		return (bool)1;
	}

IL_0011:
	{
		// found = this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_4 = __this->get_PrivateChannels_12();
		String_t* L_5 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_6 = ___channel1;
		NullCheck(L_4);
		bool L_7 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_4, L_5, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_6, /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		// return found;
		return L_7;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetPrivateChannelByUser(System.String,Photon.Chat.ChatChannelU26)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_TryGetPrivateChannelByUser_m05B3C8258646C847C1BE0E967C40DEC05E52816C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userId0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// channel = null;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_0 = ___channel1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_0, (RuntimeObject *)NULL);
		// if (string.IsNullOrEmpty(userId))
		String_t* L_1 = ___userId0;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// string channelName = this.GetPrivateChannelNameByUser(userId);
		String_t* L_3 = ___userId0;
		String_t* L_4 = ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// return this.TryGetChannel(channelName, true, out channel);
		String_t* L_5 = V_0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_6 = ___channel1;
		bool L_7 = ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7(__this, L_5, (bool)1, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_mA71C6BB745CEE6F8A6845293921B6E44B36375A7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatPeer.DebugOut = value; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)L_0)->set_DebugOut_11(L_1);
		// set { this.chatPeer.DebugOut = value; }
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
extern "C" IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatPeer.DebugOut; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		uint8_t L_1 = ((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)L_0)->get_DebugOut_11();
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_mAFFB1A1E0C4C5330629A92CD03E065F112491DE4 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_mAFFB1A1E0C4C5330629A92CD03E065F112491DE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.listener.DebugReturn(level, message);
		RuntimeObject* L_0 = __this->get_listener_14();
		uint8_t L_1 = ___level0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m956A9F68138C8D3EC504DBD2CE9B10147DCBDB72 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// switch (eventData.Code)
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_0 = ___eventData0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_Code_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0046;
			}
			case 5:
			{
				goto IL_004e;
			}
			case 6:
			{
				goto IL_0056;
			}
			case 7:
			{
				goto IL_006d;
			}
			case 8:
			{
				goto IL_005e;
			}
			case 9:
			{
				goto IL_0066;
			}
		}
	}
	{
		return;
	}

IL_0036:
	{
		// this.HandleChatMessagesEvent(eventData);
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_3 = ___eventData0;
		ChatClient_HandleChatMessagesEvent_mBA3E5590CD58F581BD6D4BCF9C6271E63838F059(__this, L_3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003e:
	{
		// this.HandlePrivateMessageEvent(eventData);
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_4 = ___eventData0;
		ChatClient_HandlePrivateMessageEvent_m66912AAC5F414B5006D0632DE02F47A5A93A5986(__this, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0046:
	{
		// this.HandleStatusUpdate(eventData);
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_5 = ___eventData0;
		ChatClient_HandleStatusUpdate_mE241965F5577B2C1E4A8E779049138AE7EC0D8D3(__this, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004e:
	{
		// this.HandleSubscribeEvent(eventData);
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_6 = ___eventData0;
		ChatClient_HandleSubscribeEvent_mB02E035F17170A3B08745F67B84CD024123ABE5B(__this, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0056:
	{
		// this.HandleUnsubscribeEvent(eventData);
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_7 = ___eventData0;
		ChatClient_HandleUnsubscribeEvent_mC3D8AF899C58C99D991FCB8BE782FF7E95615226(__this, L_7, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_005e:
	{
		// this.HandleUserSubscribedEvent(eventData);
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_8 = ___eventData0;
		ChatClient_HandleUserSubscribedEvent_m3124E5CC450BC2856BE354D41B437DFC1DF015FF(__this, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0066:
	{
		// this.HandleUserUnsubscribedEvent(eventData);
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_9 = ___eventData0;
		ChatClient_HandleUserUnsubscribedEvent_m70FB80F29B2F2B314E77619D0BC790C5B30F8278(__this, L_9, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m3B44E6DDAF54FEFEDB0097CADAEAD21874A93A9B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m3B44E6DDAF54FEFEDB0097CADAEAD21874A93A9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// switch (operationResponse.OperationCode)
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_0 = ___operationResponse0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_OperationCode_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)3))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)230)))))
		{
			goto IL_001b;
		}
	}
	{
		// this.HandleAuthResponse(operationResponse);
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_4 = ___operationResponse0;
		ChatClient_HandleAuthResponse_m77C9D1F0666CE7756CE1650606EE7BC7DDBD7E72(__this, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_001b:
	{
		// if ((operationResponse.ReturnCode != 0) && (this.DebugOut >= DebugLevel.ERROR))
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_5 = ___operationResponse0;
		NullCheck(L_5);
		int16_t L_6 = L_5->get_ReturnCode_1();
		if (!L_6)
		{
			goto IL_008a;
		}
	}
	{
		uint8_t L_7 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		// if (operationResponse.ReturnCode == -2)
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_8 = ___operationResponse0;
		NullCheck(L_8);
		int16_t L_9 = L_8->get_ReturnCode_1();
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0058;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} unknown on server. Check your AppId and make sure it's for a Chat application.", operationResponse.OperationCode));
		RuntimeObject* L_10 = __this->get_listener_14();
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_11 = ___operationResponse0;
		NullCheck(L_11);
		uint8_t L_12 = L_11->get_OperationCode_0();
		uint8_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBCB5C68DA61EECD91A7CBF61D41B0938CEDBCD34, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 1, L_15);
		// }
		return;
	}

IL_0058:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} failed (Code: {1}). Debug Message: {2}", operationResponse.OperationCode, operationResponse.ReturnCode, operationResponse.DebugMessage));
		RuntimeObject* L_16 = __this->get_listener_14();
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_17 = ___operationResponse0;
		NullCheck(L_17);
		uint8_t L_18 = L_17->get_OperationCode_0();
		uint8_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_19);
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_21 = ___operationResponse0;
		NullCheck(L_21);
		int16_t L_22 = L_21->get_ReturnCode_1();
		int16_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_23);
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_25 = ___operationResponse0;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_DebugMessage_2();
		String_t* L_27 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralA8B9D506307E302D77308D7E4A5DB319E04C3EC0, L_20, L_24, L_26, /*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_16, 1, L_27);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_mB2E20B145A102113E8A0E53F1CF4D7C7C4B4CFB3 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___statusCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_mB2E20B145A102113E8A0E53F1CF4D7C7C4B4CFB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (statusCode)
		int32_t L_0 = ___statusCode0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1025))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___statusCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = ___statusCode0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1025))))
		{
			goto IL_0158;
		}
	}
	{
		return;
	}

IL_001c:
	{
		int32_t L_3 = ___statusCode0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1048))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_4 = ___statusCode0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1049))))
		{
			goto IL_0144;
		}
	}
	{
		return;
	}

IL_0033:
	{
		// if (!this.chatPeer.IsProtocolSecure)
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_15();
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure() */, L_5);
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		// this.chatPeer.EstablishEncryption();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_7 = __this->get_chatPeer_15();
		NullCheck(L_7);
		PhotonPeer_EstablishEncryption_mEB77FABA6A0F1BC4C00E232F23C5ABF56B0E2E7A(L_7, /*hidden argument*/NULL);
		// }
		goto IL_00ac;
	}

IL_004e:
	{
		// if (!this.didAuthenticate)
		bool L_8 = __this->get_didAuthenticate_17();
		if (L_8)
		{
			goto IL_00ac;
		}
	}
	{
		// this.didAuthenticate = this.chatPeer.AuthenticateOnNameServer(this.AppId, this.AppVersion, this.chatRegion, this.AuthValues);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_9 = __this->get_chatPeer_15();
		String_t* L_10 = ChatClient_get_AppId_m4A04DF9B4147EE862D8011D4DABF01676FA9B46E(__this, /*hidden argument*/NULL);
		String_t* L_11 = ChatClient_get_AppVersion_m78125B682E98DF9E51EBCA68E56339F1B0DF87F2(__this, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_chatRegion_4();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_13 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_14 = ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B(L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->set_didAuthenticate_17(L_14);
		// if (!this.didAuthenticate)
		bool L_15 = __this->get_didAuthenticate_17();
		if (L_15)
		{
			goto IL_00ac;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_16 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)1)))
		{
			goto IL_00ac;
		}
	}
	{
		// ((IPhotonPeerListener)this).DebugReturn(DebugLevel.ERROR, "Error calling OpAuthenticate! Did not work. Check log output, AuthValues and if you're connected. State: " + this.State);
		int32_t L_17 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral59D052E9640AFA04CB695842D8194CECDAE484D8, L_19, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t40F2BA59CF7C550190687A1B54CEC544B715D8D4_il2cpp_TypeInfo_var, __this, 1, L_20);
	}

IL_00ac:
	{
		// if (this.State == ChatState.ConnectingToNameServer)
		int32_t L_21 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00ce;
		}
	}
	{
		// this.State = ChatState.ConnectedToNameServer;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, 2, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_22 = __this->get_listener_14();
		int32_t L_23 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_22, L_23);
		// }
		return;
	}

IL_00ce:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_24 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)6))))
		{
			goto IL_0188;
		}
	}
	{
		// this.AuthenticateOnFrontEnd();
		ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00e2:
	{
		// if (!this.didAuthenticate)
		bool L_25 = __this->get_didAuthenticate_17();
		if (L_25)
		{
			goto IL_0188;
		}
	}
	{
		// this.didAuthenticate = this.chatPeer.AuthenticateOnNameServer(this.AppId, this.AppVersion, this.chatRegion, this.AuthValues);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_26 = __this->get_chatPeer_15();
		String_t* L_27 = ChatClient_get_AppId_m4A04DF9B4147EE862D8011D4DABF01676FA9B46E(__this, /*hidden argument*/NULL);
		String_t* L_28 = ChatClient_get_AppVersion_m78125B682E98DF9E51EBCA68E56339F1B0DF87F2(__this, /*hidden argument*/NULL);
		String_t* L_29 = __this->get_chatRegion_4();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_30 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_31 = ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B(L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		__this->set_didAuthenticate_17(L_31);
		// if (!this.didAuthenticate)
		bool L_32 = __this->get_didAuthenticate_17();
		if (L_32)
		{
			goto IL_0188;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_33 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_33) < ((int32_t)1)))
		{
			goto IL_0188;
		}
	}
	{
		// ((IPhotonPeerListener)this).DebugReturn(DebugLevel.ERROR, "Error calling OpAuthenticate! Did not work. Check log output, AuthValues and if you're connected. State: " + this.State);
		int32_t L_34 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral59D052E9640AFA04CB695842D8194CECDAE484D8, L_36, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t40F2BA59CF7C550190687A1B54CEC544B715D8D4_il2cpp_TypeInfo_var, __this, 1, L_37);
		// break;
		return;
	}

IL_0144:
	{
		// this.State = ChatState.Disconnecting;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, ((int32_t)10), /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_38 = __this->get_chatPeer_15();
		NullCheck(L_38);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_38);
		// break;
		return;
	}

IL_0158:
	{
		// if (this.State == ChatState.Authenticated)
		int32_t L_39 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)4))))
		{
			goto IL_0168;
		}
	}
	{
		// this.ConnectToFrontEnd();
		ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0168:
	{
		// this.State = ChatState.Disconnected;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, ((int32_t)11), /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(ChatState.Disconnected);
		RuntimeObject* L_40 = __this->get_listener_14();
		NullCheck(L_40);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_40, ((int32_t)11));
		// this.listener.OnDisconnected();
		RuntimeObject* L_41 = __this->get_listener_14();
		NullCheck(L_41);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Photon.Chat.IChatClientListener::OnDisconnected() */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_41);
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Channels, channels } };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_0 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_0, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_1 = L_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = ___channels0;
		NullCheck(L_1);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_1, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		V_0 = L_1;
		// if (historyLength != 0)
		int32_t L_3 = ___historyLength2;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// opParameters.Add((byte)ChatParameterCode.HistoryLength, historyLength);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_4 = V_0;
		int32_t L_5 = ___historyLength2;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_4, (uint8_t)((int32_t)14), L_7, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
	}

IL_001f:
	{
		// return this.chatPeer.SendOperation(operation, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_8 = __this->get_chatPeer_15();
		uint8_t L_9 = ___operation1;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_11 = ((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_8);
		bool L_12 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_m66912AAC5F414B5006D0632DE02F47A5A93A5986 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandlePrivateMessageEvent_m66912AAC5F414B5006D0632DE02F47A5A93A5986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// object message = (object)eventData.Parameters[(byte)ChatParameterCode.Message];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_1, (uint8_t)3, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_0 = L_2;
		// string sender = (string)eventData.Parameters[(byte)ChatParameterCode.Sender];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_4, (uint8_t)5, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// int msgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_7, (uint8_t)8, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// if (this.UserId != null && this.UserId.Equals(sender))
		String_t* L_9 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_10 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// string target = (string)eventData.Parameters[(byte)ChatParameterCode.UserId];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_13 = ___eventData0;
		NullCheck(L_13);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_14 = L_13->get_Parameters_1();
		NullCheck(L_14);
		RuntimeObject * L_15 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_14, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var));
		// channelName = this.GetPrivateChannelNameByUser(target);
		String_t* L_16 = V_5;
		String_t* L_17 = ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564(__this, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// }
		goto IL_0071;
	}

IL_0069:
	{
		// channelName = this.GetPrivateChannelNameByUser(sender);
		String_t* L_18 = V_1;
		String_t* L_19 = ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564(__this, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_0071:
	{
		// if (!this.PrivateChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_20 = __this->get_PrivateChannels_12();
		String_t* L_21 = V_3;
		NullCheck(L_20);
		bool L_22 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_20, L_21, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_00b2;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_23 = V_3;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_24 = (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *)il2cpp_codegen_object_new(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342(L_24, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		// channel.IsPrivate = true;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_25 = V_4;
		NullCheck(L_25);
		ChatChannel_set_IsPrivate_mF639F430B4D39B8E99CD0592F5378BBAF4389261(L_25, (bool)1, /*hidden argument*/NULL);
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_26 = V_4;
		int32_t L_27 = __this->get_MessageLimit_10();
		NullCheck(L_26);
		L_26->set_MessageLimit_3(L_27);
		// this.PrivateChannels.Add(channel.Name, channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_28 = __this->get_PrivateChannels_12();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_29 = V_4;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_Name_0();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_31 = V_4;
		NullCheck(L_28);
		Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5(L_28, L_30, L_31, /*hidden argument*/Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5_RuntimeMethod_var);
	}

IL_00b2:
	{
		// channel.Add(sender, message, msgId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_32 = V_4;
		String_t* L_33 = V_1;
		RuntimeObject * L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_32);
		ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008(L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		// this.listener.OnPrivateMessage(sender, message, channelName);
		RuntimeObject* L_36 = __this->get_listener_14();
		String_t* L_37 = V_1;
		RuntimeObject * L_38 = V_0;
		String_t* L_39 = V_3;
		NullCheck(L_36);
		InterfaceActionInvoker3< String_t*, RuntimeObject *, String_t* >::Invoke(5 /* System.Void Photon.Chat.IChatClientListener::OnPrivateMessage(System.String,System.Object,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_36, L_37, L_38, L_39);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_mBA3E5590CD58F581BD6D4BCF9C6271E63838F059 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleChatMessagesEvent_mBA3E5590CD58F581BD6D4BCF9C6271E63838F059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_4 = NULL;
	{
		// object[] messages = (object[])eventData.Parameters[(byte)ChatParameterCode.Messages];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_1, (uint8_t)2, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_0 = ((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var));
		// string[] senders = (string[])eventData.Parameters[(byte)ChatParameterCode.Senders];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_4, (uint8_t)4, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_1 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_5, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// string channelName = (string)eventData.Parameters[(byte)ChatParameterCode.Channel];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_7, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		// int lastMsgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_9 = ___eventData0;
		NullCheck(L_9);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_10 = L_9->get_Parameters_1();
		NullCheck(L_10);
		RuntimeObject * L_11 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_10, (uint8_t)8, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_11, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_12 = __this->get_PublicChannels_11();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		bool L_14 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_12, L_13, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_007e;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_15 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)2)))
		{
			goto IL_007d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Channel " + channelName + " for incoming message event not found.");
		RuntimeObject* L_16 = __this->get_listener_14();
		String_t* L_17 = V_2;
		String_t* L_18 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F1AC3BB2037F1143E5E5853C9E7E3990ABDFDEE, L_17, _stringLiteral187DB917BF8928E28C35D9C1A3ACCC7FFE7357D3, /*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_16, 2, L_18);
	}

IL_007d:
	{
		// return;
		return;
	}

IL_007e:
	{
		// channel.Add(senders, messages, lastMsgId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_19 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = V_0;
		int32_t L_22 = V_3;
		NullCheck(L_19);
		ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		// this.listener.OnGetMessages(channelName, senders, messages);
		RuntimeObject* L_23 = __this->get_listener_14();
		String_t* L_24 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = V_0;
		NullCheck(L_23);
		InterfaceActionInvoker3< String_t*, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void Photon.Chat.IChatClientListener::OnGetMessages(System.String,System.String[],System.Object[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_23, L_24, L_25, L_26);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_mB02E035F17170A3B08745F67B84CD024123ABE5B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleSubscribeEvent_mB02E035F17170A3B08745F67B84CD024123ABE5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * V_3 = NULL;
	String_t* V_4 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_5 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_9 = NULL;
	{
		// string[] channelsInResponse = (string[])eventData.Parameters[ChatParameterCode.Channels];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_1, (uint8_t)0, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_0 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// bool[] results = (bool[])eventData.Parameters[ChatParameterCode.SubscribeResults];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_4, (uint8_t)((int32_t)15), /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_1 = ((BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)Castclass((RuntimeObject*)L_5, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var));
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.Properties, out temp))
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		bool L_8 = Dictionary_2_TryGetValue_m7CC3DCFFF5FCC679FE6F67EFE2F18D5C6B9B6781(L_7, (uint8_t)((int32_t)22), (RuntimeObject **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m7CC3DCFFF5FCC679FE6F67EFE2F18D5C6B9B6781_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_010b;
		}
	}
	{
		// Dictionary<object, object> channelProperties = temp as Dictionary<object, object>;
		RuntimeObject * L_9 = V_2;
		V_3 = ((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)IsInstClass((RuntimeObject*)L_9, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var));
		// if (channelsInResponse.Length == 1)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = V_0;
		NullCheck(L_10);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_00fa;
		}
	}
	{
		// if (results[0])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (uint8_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (!L_13)
		{
			goto IL_00ec;
		}
	}
	{
		// string channelName = channelsInResponse[0];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_17 = __this->get_PublicChannels_11();
		String_t* L_18 = V_4;
		NullCheck(L_17);
		bool L_19 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_17, L_18, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		// channel.Subscribers.Clear();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_20 = V_5;
		NullCheck(L_20);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_21 = L_20->get_Subscribers_9();
		NullCheck(L_21);
		HashSet_1_Clear_m298FD643F827492F4CBFDD6D3AFA7C98D5613D82(L_21, /*hidden argument*/HashSet_1_Clear_m298FD643F827492F4CBFDD6D3AFA7C98D5613D82_RuntimeMethod_var);
		// channel.ClearProperties();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_22 = V_5;
		NullCheck(L_22);
		ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD(L_22, /*hidden argument*/NULL);
		// }
		goto IL_00a6;
	}

IL_007c:
	{
		// channel = new ChatChannel(channelName);
		String_t* L_23 = V_4;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_24 = (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *)il2cpp_codegen_object_new(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342(L_24, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_25 = V_5;
		int32_t L_26 = __this->get_MessageLimit_10();
		NullCheck(L_25);
		L_25->set_MessageLimit_3(L_26);
		// this.PublicChannels.Add(channel.Name, channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_27 = __this->get_PublicChannels_11();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_28 = V_5;
		NullCheck(L_28);
		String_t* L_29 = L_28->get_Name_0();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_30 = V_5;
		NullCheck(L_27);
		Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5(L_27, L_29, L_30, /*hidden argument*/Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5_RuntimeMethod_var);
	}

IL_00a6:
	{
		// channel.ReadProperties(channelProperties);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_31 = V_5;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_32 = V_3;
		NullCheck(L_31);
		ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5(L_31, L_32, /*hidden argument*/NULL);
		// if (channel.PublishSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_33 = V_5;
		NullCheck(L_33);
		bool L_34 = ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00ec;
		}
	}
	{
		// channel.Subscribers.Add(this.UserId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_35 = V_5;
		NullCheck(L_35);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_36 = L_35->get_Subscribers_9();
		String_t* L_37 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67(L_36, L_37, /*hidden argument*/HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67_RuntimeMethod_var);
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.ChannelSubscribers, out temp))
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_38 = ___eventData0;
		NullCheck(L_38);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_39 = L_38->get_Parameters_1();
		NullCheck(L_39);
		bool L_40 = Dictionary_2_TryGetValue_m7CC3DCFFF5FCC679FE6F67EFE2F18D5C6B9B6781(L_39, (uint8_t)((int32_t)23), (RuntimeObject **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m7CC3DCFFF5FCC679FE6F67EFE2F18D5C6B9B6781_RuntimeMethod_var);
		if (!L_40)
		{
			goto IL_00ec;
		}
	}
	{
		// string[] subscribers = temp as string[];
		RuntimeObject * L_41 = V_2;
		V_6 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)IsInst((RuntimeObject*)L_41, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// channel.AddSubscribers(subscribers);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_42 = V_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_43 = V_6;
		NullCheck(L_42);
		ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219(L_42, L_43, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// this.listener.OnSubscribed(channelsInResponse, results);
		RuntimeObject* L_44 = __this->get_listener_14();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_45 = V_0;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_46 = V_1;
		NullCheck(L_44);
		InterfaceActionInvoker2< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_44, L_45, L_46);
		// return;
		return;
	}

IL_00fa:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Unexpected: Subscribe event for multiple channels with channels properties returned. Ignoring properties.");
		RuntimeObject* L_47 = __this->get_listener_14();
		NullCheck(L_47);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_47, 1, _stringLiteral31A8C2A4274E13FF28BD8BEBFAAD8D2908604F0B);
	}

IL_010b:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		V_7 = 0;
		goto IL_015d;
	}

IL_0110:
	{
		// if (results[i])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_48 = V_1;
		int32_t L_49 = V_7;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		uint8_t L_51 = (uint8_t)(L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		if (!L_51)
		{
			goto IL_0157;
		}
	}
	{
		// string channelName = channelsInResponse[i];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_52 = V_0;
		int32_t L_53 = V_7;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_8 = L_55;
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_56 = __this->get_PublicChannels_11();
		String_t* L_57 = V_8;
		NullCheck(L_56);
		bool L_58 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_56, L_57, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_9), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		if (L_58)
		{
			goto IL_0157;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_59 = V_8;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_60 = (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *)il2cpp_codegen_object_new(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342(L_60, L_59, /*hidden argument*/NULL);
		V_9 = L_60;
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_61 = V_9;
		int32_t L_62 = __this->get_MessageLimit_10();
		NullCheck(L_61);
		L_61->set_MessageLimit_3(L_62);
		// this.PublicChannels.Add(channel.Name, channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_63 = __this->get_PublicChannels_11();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_64 = V_9;
		NullCheck(L_64);
		String_t* L_65 = L_64->get_Name_0();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_66 = V_9;
		NullCheck(L_63);
		Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5(L_63, L_65, L_66, /*hidden argument*/Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5_RuntimeMethod_var);
	}

IL_0157:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_67 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_015d:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_68 = V_7;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_69)->max_length)))))))
		{
			goto IL_0110;
		}
	}
	{
		// this.listener.OnSubscribed(channelsInResponse, results);
		RuntimeObject* L_70 = __this->get_listener_14();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_71 = V_0;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_72 = V_1;
		NullCheck(L_70);
		InterfaceActionInvoker2< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_70, L_71, L_72);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_mC3D8AF899C58C99D991FCB8BE782FF7E95615226 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUnsubscribeEvent_mC3D8AF899C58C99D991FCB8BE782FF7E95615226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// string[] channelsInRequest = (string[])eventData[ChatParameterCode.Channels];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject * L_1 = EventData_get_Item_m5E9B2E4D668F9C4C7739500A356FDBBAB67775CF(L_0, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// for (int i = 0; i < channelsInRequest.Length; i++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0011:
	{
		// string channelName = channelsInRequest[i];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// this.PublicChannels.Remove(channelName);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_2;
		NullCheck(L_6);
		Dictionary_2_Remove_m7696A01224568B5D3C5E220A8BF743D2240A14FD(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m7696A01224568B5D3C5E220A8BF743D2240A14FD_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Remove(channelName);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_8 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_9 = V_2;
		NullCheck(L_8);
		HashSet_1_Remove_mEDCA9F54B3B975CB449577381947B8A63D208E21(L_8, L_9, /*hidden argument*/HashSet_1_Remove_mEDCA9F54B3B975CB449577381947B8A63D208E21_RuntimeMethod_var);
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_11 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		// this.listener.OnUnsubscribed(channelsInRequest);
		RuntimeObject* L_13 = __this->get_listener_14();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = V_0;
		NullCheck(L_13);
		InterfaceActionInvoker1< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(7 /* System.Void Photon.Chat.IChatClientListener::OnUnsubscribed(System.String[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_13, L_14);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_m77C9D1F0666CE7756CE1650606EE7BC7DDBD7E72 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleAuthResponse_m77C9D1F0666CE7756CE1650606EE7BC7DDBD7E72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int16_t V_1 = 0;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0030;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, operationResponse.ToStringFull() + " on: " + this.chatPeer.NameServerAddress);
		RuntimeObject* L_1 = __this->get_listener_14();
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_2 = ___operationResponse0;
		NullCheck(L_2);
		String_t* L_3 = OperationResponse_ToStringFull_m70633F7313F41CDFC1EEDFE258FE2BFDB89C89E5(L_2, /*hidden argument*/NULL);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_4 = __this->get_chatPeer_15();
		NullCheck(L_4);
		String_t* L_5 = ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_3, _stringLiteral71EBF5DA4A7DF5D098F0A1BC60250ECE10DBEC80, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_1, 3, L_6);
	}

IL_0030:
	{
		// if (operationResponse.ReturnCode == 0)
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_7 = ___operationResponse0;
		NullCheck(L_7);
		int16_t L_8 = L_7->get_ReturnCode_1();
		if (L_8)
		{
			goto IL_019a;
		}
	}
	{
		// if (this.State == ChatState.ConnectedToNameServer)
		int32_t L_9 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0136;
		}
	}
	{
		// this.State = ChatState.Authenticated;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, 4, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_10 = __this->get_listener_14();
		int32_t L_11 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, L_11);
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.Secret))
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_12 = ___operationResponse0;
		NullCheck(L_12);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_13 = L_12->get_Parameters_3();
		NullCheck(L_13);
		bool L_14 = Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28(L_13, (uint8_t)((int32_t)221), /*hidden argument*/Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_00c2;
		}
	}
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_15 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0084;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_16 = (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)il2cpp_codegen_object_new(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m0353B82A64DB8EB949ADBC7FB540F2CBA82766C7(L_16, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2(__this, L_16, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// this.AuthValues.Token = operationResponse[ParameterCode.Secret] as string;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_17 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_18 = ___operationResponse0;
		NullCheck(L_18);
		RuntimeObject * L_19 = OperationResponse_get_Item_m3725B8F5CF7321ACB2A84F3139C9D53B47178058(L_18, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		NullCheck(L_17);
		AuthenticationValues_set_Token_m8C003146B195901AB47692F9BED186E857D7329E(L_17, ((String_t*)IsInstSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.FrontendAddress = (string)operationResponse[ParameterCode.Address];
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_20 = ___operationResponse0;
		NullCheck(L_20);
		RuntimeObject * L_21 = OperationResponse_get_Item_m3725B8F5CF7321ACB2A84F3139C9D53B47178058(L_20, (uint8_t)((int32_t)230), /*hidden argument*/NULL);
		ChatClient_set_FrontendAddress_m07693D7264F012BF7FF2331F6773996DDEB50525(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_22 = __this->get_chatPeer_15();
		NullCheck(L_22);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_22);
		// }
		goto IL_00dc;
	}

IL_00c2:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_23 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "No secret in authentication response.");
		RuntimeObject* L_24 = __this->get_listener_14();
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_24, 1, _stringLiteral9ECB827BD6D80841068E0AE354CABBDE1FED45C0);
	}

IL_00dc:
	{
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.UserId))
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_25 = ___operationResponse0;
		NullCheck(L_25);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_26 = L_25->get_Parameters_3();
		NullCheck(L_26);
		bool L_27 = Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28(L_26, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_0235;
		}
	}
	{
		// string incomingId = operationResponse.Parameters[ParameterCode.UserId] as string;
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_28 = ___operationResponse0;
		NullCheck(L_28);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_29 = L_28->get_Parameters_3();
		NullCheck(L_29);
		RuntimeObject * L_30 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_29, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_30, String_t_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(incomingId))
		String_t* L_31 = V_0;
		bool L_32 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0235;
		}
	}
	{
		// this.UserId = incomingId;
		String_t* L_33 = V_0;
		ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1(__this, L_33, /*hidden argument*/NULL);
		// this.listener.DebugReturn(DebugLevel.INFO, string.Format("Received your UserID from server. Updating local value to: {0}", this.UserId));
		RuntimeObject* L_34 = __this->get_listener_14();
		String_t* L_35 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		String_t* L_36 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral94B1E34A1FC3B7B63B014BAD58E50115CFB5FC7D, L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_34, 3, L_36);
		// }
		return;
	}

IL_0136:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_37 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)6))))
		{
			goto IL_0235;
		}
	}
	{
		// this.State = ChatState.ConnectedToFrontEnd;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, 7, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_38 = __this->get_listener_14();
		int32_t L_39 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_38, L_39);
		// this.listener.OnConnected();
		RuntimeObject* L_40 = __this->get_listener_14();
		NullCheck(L_40);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Photon.Chat.IChatClientListener::OnConnected() */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_40);
		// if (statusToSetWhenConnected.HasValue)
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_41 = __this->get_address_of_statusToSetWhenConnected_18();
		bool L_42 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)L_41, /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_0235;
		}
	}
	{
		// SetOnlineStatus(statusToSetWhenConnected.Value, messageToSetWhenConnected);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_43 = __this->get_address_of_statusToSetWhenConnected_18();
		int32_t L_44 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)L_43, /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		RuntimeObject * L_45 = __this->get_messageToSetWhenConnected_19();
		ChatClient_SetOnlineStatus_mA768DE355902F1F4CE336618560A1F8CA97C3B5A(__this, L_44, L_45, /*hidden argument*/NULL);
		// statusToSetWhenConnected = null;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_46 = __this->get_address_of_statusToSetWhenConnected_18();
		il2cpp_codegen_initobj(L_46, sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		// }
		return;
	}

IL_019a:
	{
		// switch (operationResponse.ReturnCode)
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_47 = ___operationResponse0;
		NullCheck(L_47);
		int16_t L_48 = L_47->get_ReturnCode_1();
		V_1 = L_48;
		int16_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)-3))))
		{
			goto IL_01eb;
		}
	}
	{
		int16_t L_50 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)32755))))
		{
			case 0:
			{
				goto IL_01cf;
			}
			case 1:
			{
				goto IL_01d9;
			}
			case 2:
			{
				goto IL_01e2;
			}
		}
	}
	{
		int16_t L_51 = V_1;
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)32767)))))
		{
			goto IL_01f3;
		}
	}
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidAuthentication;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE(__this, 6, /*hidden argument*/NULL);
		// break;
		goto IL_01f3;
	}

IL_01cf:
	{
		// this.DisconnectedCause = ChatDisconnectCause.CustomAuthenticationFailed;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE(__this, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_01f3;
	}

IL_01d9:
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidRegion;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE(__this, 8, /*hidden argument*/NULL);
		// break;
		goto IL_01f3;
	}

IL_01e2:
	{
		// this.DisconnectedCause = ChatDisconnectCause.MaxCcuReached;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE(__this, 7, /*hidden argument*/NULL);
		// break;
		goto IL_01f3;
	}

IL_01eb:
	{
		// this.DisconnectedCause = ChatDisconnectCause.OperationNotAllowedInCurrentState;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE(__this, ((int32_t)9), /*hidden argument*/NULL);
	}

IL_01f3:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_52 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_52) < ((int32_t)1)))
		{
			goto IL_0222;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Authentication request error: " + operationResponse.ReturnCode + ". Disconnecting.");
		RuntimeObject* L_53 = __this->get_listener_14();
		OperationResponse_t28743B1D75A106E2558685761C23D4064204A08C * L_54 = ___operationResponse0;
		NullCheck(L_54);
		int16_t L_55 = L_54->get_ReturnCode_1();
		int16_t L_56 = L_55;
		RuntimeObject * L_57 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_56);
		String_t* L_58 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralB00E9FB37139B21C49F8FF7269A71166F5C00A02, L_57, _stringLiteralB69645E52227E7129DDA1A0E76A4F76A91BA1098, /*hidden argument*/NULL);
		NullCheck(L_53);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_53, 1, L_58);
	}

IL_0222:
	{
		// this.State = ChatState.Disconnecting;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, ((int32_t)10), /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_59 = __this->get_chatPeer_15();
		NullCheck(L_59);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_59);
	}

IL_0235:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_mE241965F5577B2C1E4A8E779049138AE7EC0D8D3 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleStatusUpdate_mE241965F5577B2C1E4A8E779049138AE7EC0D8D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	{
		// string user = (string)eventData.Parameters[ChatParameterCode.Sender];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_1, (uint8_t)5, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// int status = (int)eventData.Parameters[ChatParameterCode.Status];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_4, (uint8_t)((int32_t)10), /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// object message = null;
		V_2 = NULL;
		// bool gotMessage = eventData.Parameters.ContainsKey(ChatParameterCode.Message);
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		bool L_8 = Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28(L_7, (uint8_t)3, /*hidden argument*/Dictionary_2_ContainsKey_m2D5E20010D04C2CE581472B275B7098089F9EF28_RuntimeMethod_var);
		V_3 = L_8;
		// if (gotMessage)
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		// message = eventData.Parameters[ChatParameterCode.Message];
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_10 = ___eventData0;
		NullCheck(L_10);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_11 = L_10->get_Parameters_1();
		NullCheck(L_11);
		RuntimeObject * L_12 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_11, (uint8_t)3, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_2 = L_12;
	}

IL_0044:
	{
		// this.listener.OnStatusUpdate(user, status, gotMessage, message);
		RuntimeObject* L_13 = __this->get_listener_14();
		String_t* L_14 = V_0;
		int32_t L_15 = V_1;
		bool L_16 = V_3;
		RuntimeObject * L_17 = V_2;
		NullCheck(L_13);
		InterfaceActionInvoker4< String_t*, int32_t, bool, RuntimeObject * >::Invoke(8 /* System.Void Photon.Chat.IChatClientListener::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_13, L_14, L_15, L_16, L_17);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.State = ChatState.ConnectingToFrontEnd;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6(__this, 6, /*hidden argument*/NULL);
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, "Connecting to frontend " + this.FrontendAddress);
		RuntimeObject* L_1 = __this->get_listener_14();
		String_t* L_2 = ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9(__this, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral70E46A40252ADA773201ED2001C3B5E19AE0D5E2, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_1, 3, L_3);
	}

IL_002c:
	{
		// this.chatPeer.Connect(this.FrontendAddress, ChatAppName);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_4 = __this->get_chatPeer_15();
		String_t* L_5 = ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, L_4, L_5, _stringLiteral7ECDE348FF9CDA2C3BA69A0C4543365039D0D65B);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		// if (string.IsNullOrEmpty(this.AuthValues.Token))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_1 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A(L_1, /*hidden argument*/NULL);
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_4 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Secret is not set");
		RuntimeObject* L_5 = __this->get_listener_14();
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_5, 1, _stringLiteralE8A3C398B4EA2BE3444B33FEC2ABF9939FFE6A33);
	}

IL_0034:
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Secret, this.AuthValues.Token } };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_6 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_6, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_7 = L_6;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_8 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_7, (uint8_t)((int32_t)221), L_9, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		V_0 = L_7;
		// return this.chatPeer.SendOperation(ChatOperationCode.Authenticate, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_10 = __this->get_chatPeer_15();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_12 = ((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_10);
		bool L_13 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_10, (uint8_t)((int32_t)230), L_11, L_12);
		return L_13;
	}

IL_0069:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_14 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)1)))
		{
			goto IL_0083;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Authentication Values are not set");
		RuntimeObject* L_15 = __this->get_listener_14();
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 1, _stringLiteral638067AF521CCE283B94B0DF8899C179DCF25FB3);
	}

IL_0083:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m70FB80F29B2F2B314E77619D0BC790C5B30F8278 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUserUnsubscribedEvent_m70FB80F29B2F2B314E77619D0BC790C5B30F8278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_2 = NULL;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_1, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_4, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0061;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_11 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserUnsubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_12 = __this->get_listener_14();
		String_t* L_13 = V_0;
		String_t* L_14 = V_1;
		String_t* L_15 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralD1E3D9C1B922EB4D0834D565C074EDC474E4C8B1, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_12, 2, L_15);
	}

IL_0061:
	{
		// if (!channel.Subscribers.Remove(userId)) // user not found!
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_16 = V_2;
		NullCheck(L_16);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_17 = L_16->get_Subscribers_9();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		bool L_19 = HashSet_1_Remove_mEDCA9F54B3B975CB449577381947B8A63D208E21(L_17, L_18, /*hidden argument*/HashSet_1_Remove_mEDCA9F54B3B975CB449577381947B8A63D208E21_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_00b3;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_20 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)2)))
		{
			goto IL_00b3;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" does not contain unsubscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_21 = __this->get_listener_14();
		String_t* L_22 = V_0;
		String_t* L_23 = V_1;
		String_t* L_24 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralEF54001782F2548B67B67C09D2133F76EE73079C, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_21, 2, L_24);
		// }
		goto IL_00b3;
	}

IL_0092:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_25 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_25) < ((int32_t)2)))
		{
			goto IL_00b3;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserUnsubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_26 = __this->get_listener_14();
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6AFEA6BD492174EAD3729E74B21354F505CDDCF4, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_26, 2, L_29);
	}

IL_00b3:
	{
		// this.listener.OnUserUnsubscribed(channelName, userId);
		RuntimeObject* L_30 = __this->get_listener_14();
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		NullCheck(L_30);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Photon.Chat.IChatClientListener::OnUserUnsubscribed(System.String,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_30, L_31, L_32);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_m3124E5CC450BC2856BE354D41B437DFC1DF015FF (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUserSubscribedEvent_m3124E5CC450BC2856BE354D41B437DFC1DF015FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_2 = NULL;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_1, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_t7FCDC9E29CEF6BAE7ED480B6E5F7AEE62724D938 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5(L_4, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_mDDB0828C72C317C563E58E0F17347E578B6F1BE5_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_00f1;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_11 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)2)))
		{
			goto IL_0064;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserSubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_12 = __this->get_listener_14();
		String_t* L_13 = V_0;
		String_t* L_14 = V_1;
		String_t* L_15 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE23C1A7928CC6F82A21EE1A76448A0F81B07C4E9, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_12, 2, L_15);
	}

IL_0064:
	{
		// if (!channel.Subscribers.Add(userId)) // user came back from the dead ?
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_16 = V_2;
		NullCheck(L_16);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_17 = L_16->get_Subscribers_9();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		bool L_19 = HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67(L_17, L_18, /*hidden argument*/HashSet_1_Add_mB145212BE1758C5D9D5E1F8FBD56BC088BECDF67_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_0098;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_20 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)2)))
		{
			goto IL_0112;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" already contains newly subscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_21 = __this->get_listener_14();
		String_t* L_22 = V_0;
		String_t* L_23 = V_1;
		String_t* L_24 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral06D8FB7D57518A9D9AD12F37B1762D47BCFEBC34, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_21, 2, L_24);
		// }
		goto IL_0112;
	}

IL_0098:
	{
		// else if (channel.MaxSubscribers > 0 && channel.Subscribers.Count > channel.MaxSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0112;
		}
	}
	{
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_27 = V_2;
		NullCheck(L_27);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_28 = L_27->get_Subscribers_9();
		NullCheck(L_28);
		int32_t L_29 = HashSet_1_get_Count_m65D5678595A3788455F478546825DF7A0A69AB91(L_28, /*hidden argument*/HashSet_1_get_Count_m65D5678595A3788455F478546825DF7A0A69AB91_RuntimeMethod_var);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_29) <= ((int32_t)L_31)))
		{
			goto IL_0112;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_32 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_32) < ((int32_t)2)))
		{
			goto IL_0112;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\"'s MaxSubscribers exceeded. count={1} > MaxSubscribers={2}.", channelName, channel.Subscribers.Count, channel.MaxSubscribers));
		RuntimeObject* L_33 = __this->get_listener_14();
		String_t* L_34 = V_0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_35 = V_2;
		NullCheck(L_35);
		HashSet_1_t7DD58A661EF6FD2C2A4F3D3B66060D974155D351 * L_36 = L_35->get_Subscribers_9();
		NullCheck(L_36);
		int32_t L_37 = HashSet_1_get_Count_m65D5678595A3788455F478546825DF7A0A69AB91(L_36, /*hidden argument*/HashSet_1_get_Count_m65D5678595A3788455F478546825DF7A0A69AB91_RuntimeMethod_var);
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_38);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B(L_40, /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral2C2487EA5D13B73C78A16D4C01B849CC868B9F66, L_34, L_39, L_43, /*hidden argument*/NULL);
		NullCheck(L_33);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_33, 2, L_44);
		// }
		goto IL_0112;
	}

IL_00f1:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_45 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_45) < ((int32_t)2)))
		{
			goto IL_0112;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserSubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_46 = __this->get_listener_14();
		String_t* L_47 = V_0;
		String_t* L_48 = V_1;
		String_t* L_49 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE92B7B36B6E384E44F7E0E2A7CDECA40F4F457DB, L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_46, 2, L_49);
	}

IL_0112:
	{
		// this.listener.OnUserSubscribed(channelName, userId);
		RuntimeObject* L_50 = __this->get_listener_14();
		String_t* L_51 = V_0;
		String_t* L_52 = V_1;
		NullCheck(L_50);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Photon.Chat.IChatClientListener::OnUserSubscribed(System.String,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_50, L_51, L_52);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String,System.Int32,System.Int32,Photon.Chat.ChannelCreationOptions)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m8880A667FC6E5A20137A128CA9E14DC1FD7412F6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channel0, int32_t ___lastMsgId1, int32_t ___messagesFromHistory2, ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m8880A667FC6E5A20137A128CA9E14DC1FD7412F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * V_2 = NULL;
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_3 = NULL;
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_4 = NULL;
	{
		// if (creationOptions == null)
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_0 = ___creationOptions3;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// creationOptions = ChannelCreationOptions.Default;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var);
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_1 = ((ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var))->get_Default_0();
		___creationOptions3 = L_1;
	}

IL_000b:
	{
		// int maxSubscribers = creationOptions.MaxSubscribers;
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_2 = ___creationOptions3;
		NullCheck(L_2);
		int32_t L_3 = ChannelCreationOptions_get_MaxSubscribers_m5ADB67E62EA5959B1B40B3AA29817694D732BD6A(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// bool publishSubscribers = creationOptions.PublishSubscribers;
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_4 = ___creationOptions3;
		NullCheck(L_4);
		bool L_5 = ChannelCreationOptions_get_PublishSubscribers_m21ADD2DE29B58D86F4442B98515AEC8560F6435B(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (maxSubscribers < 0)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_7 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Cannot set MaxSubscribers < 0.");
		RuntimeObject* L_8 = __this->get_listener_14();
		NullCheck(L_8);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_8, 1, _stringLiteralB7A757A62D6F4547652BA320456CD72FF6D7093E);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// if (lastMsgId < 0)
		int32_t L_9 = ___lastMsgId1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_10 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "lastMsgId cannot be < 0.");
		RuntimeObject* L_11 = __this->get_listener_14();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 1, _stringLiteral260B333133E8DC5F239195333A036B63C1EC62B9);
	}

IL_0059:
	{
		// return false;
		return (bool)0;
	}

IL_005b:
	{
		// if (messagesFromHistory < -1)
		int32_t L_12 = ___messagesFromHistory2;
		if ((((int32_t)L_12) >= ((int32_t)(-1))))
		{
			goto IL_007c;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)2)))
		{
			goto IL_0079;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "messagesFromHistory < -1, setting it to -1");
		RuntimeObject* L_14 = __this->get_listener_14();
		NullCheck(L_14);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_14, 2, _stringLiteralAAC3759B75EBB121D5A5F793C49C6496CB466067);
	}

IL_0079:
	{
		// messagesFromHistory = -1;
		___messagesFromHistory2 = (-1);
	}

IL_007c:
	{
		// if (lastMsgId > 0 && messagesFromHistory == 0)
		int32_t L_15 = ___lastMsgId1;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_16 = ___messagesFromHistory2;
		if (L_16)
		{
			goto IL_00a0;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_17 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)2)))
		{
			goto IL_009d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "lastMsgId will be ignored because messagesFromHistory == 0");
		RuntimeObject* L_18 = __this->get_listener_14();
		NullCheck(L_18);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_18, 2, _stringLiteral6A99D68EAA56E7B9EA40ED090FD2E0DDA1EB1E0F);
	}

IL_009d:
	{
		// lastMsgId = 0;
		___lastMsgId1 = 0;
	}

IL_00a0:
	{
		// Dictionary<object, object> properties = null;
		V_2 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)NULL;
		// if (publishSubscribers)
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00ee;
		}
	}
	{
		// if (maxSubscribers > DefaultMaxSubscribers)
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)100))))
		{
			goto IL_00d2;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_21 = ChatClient_get_DebugOut_m007B2C32267F4ECC507BA1E3AF02B8FE2B034397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)1)))
		{
			goto IL_00d0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR,
		//     string.Format("Cannot set MaxSubscribers > {0} when PublishSubscribers == true.", DefaultMaxSubscribers));
		RuntimeObject* L_22 = __this->get_listener_14();
		int32_t L_23 = ((int32_t)100);
		RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD42D8F5361FEC807EFBD78D0B0154513FA3FDEA5, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_22, 1, L_25);
	}

IL_00d0:
	{
		// return false;
		return (bool)0;
	}

IL_00d2:
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_26 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498(L_26, /*hidden argument*/Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var);
		V_2 = L_26;
		// properties[ChannelWellKnownProperties.PublishSubscribers] = true;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_27 = V_2;
		uint8_t L_28 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_29 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_28);
		bool L_30 = ((bool)1);
		RuntimeObject * L_31 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_27, L_29, L_31, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
	}

IL_00ee:
	{
		// if (maxSubscribers > 0)
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		// if (properties == null)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_33 = V_2;
		if (L_33)
		{
			goto IL_00fb;
		}
	}
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_34 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498(L_34, /*hidden argument*/Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var);
		V_2 = L_34;
	}

IL_00fb:
	{
		// properties[ChannelWellKnownProperties.MaxSubscribers] = maxSubscribers;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_35 = V_2;
		uint8_t L_36 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_37 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_36);
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_35);
		Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_35, L_37, L_40, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
	}

IL_0111:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { ChatParameterCode.Channels, new[] { channel } } };
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_41 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_41, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		V_4 = L_41;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_42 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_43 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_44 = L_43;
		String_t* L_45 = ___channel0;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_45);
		NullCheck(L_42);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_42, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_44, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_46 = V_4;
		V_3 = L_46;
		// if (messagesFromHistory != 0)
		int32_t L_47 = ___messagesFromHistory2;
		if (!L_47)
		{
			goto IL_013e;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.HistoryLength, messagesFromHistory);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_48 = V_3;
		int32_t L_49 = ___messagesFromHistory2;
		int32_t L_50 = L_49;
		RuntimeObject * L_51 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_48, (uint8_t)((int32_t)14), L_51, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
	}

IL_013e:
	{
		// if (lastMsgId > 0)
		int32_t L_52 = ___lastMsgId1;
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_0154;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.MsgIds, new[] { lastMsgId });
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_53 = V_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_54 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_55 = L_54;
		int32_t L_56 = ___lastMsgId1;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_56);
		NullCheck(L_53);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_53, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_55, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
	}

IL_0154:
	{
		// if (properties != null && properties.Count > 0)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_57 = V_2;
		if (!L_57)
		{
			goto IL_0169;
		}
	}
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_58, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		if ((((int32_t)L_59) <= ((int32_t)0)))
		{
			goto IL_0169;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.Properties, properties);
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_60 = V_3;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_61 = V_2;
		NullCheck(L_60);
		Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D(L_60, (uint8_t)((int32_t)22), L_61, /*hidden argument*/Dictionary_2_Add_m7C72201E72C4BF19038703FF5B62C2A04458843D_RuntimeMethod_var);
	}

IL_0169:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_62 = __this->get_chatPeer_15();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_63 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_64 = ((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_62);
		bool L_65 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_62, (uint8_t)0, L_63, L_64);
		return L_65;
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
// System.Void Photon.Chat.ChatEventCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChatEventCode__ctor_mCB99ABAA810DBE0BD8CED606CE1D7DB9FF8AFAFA (ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChatOperationCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChatOperationCode__ctor_mE2D67AA29F857091BE74BF29EEF81D1175B1B56A (ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChatParameterCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChatParameterCode__ctor_m3E1C362181F0EEADDE0BC655308F17788CCE85F6 (ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get { return this.GetNameServerAddress(); } }
		String_t* L_0 = ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure()
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_get_IsProtocolSecure_m4F1D4B8A586A7ECF25236CBA4F719DCA72C6C63F (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	{
		// virtual internal bool IsProtocolSecure { get { return this.UsedProtocol == ConnectionProtocol.WebSocketSecure; } }
		uint8_t L_0 = PhotonPeer_get_UsedProtocol_mB61F95111B1386EFCAB0436EAD7A317D6C28D2CC(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void ChatPeer__ctor_m2542C0FD85A9D537ABCBF2631C1B304C8C634478 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer__ctor_m2542C0FD85A9D537ABCBF2631C1B304C8C634478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ChatPeer(IPhotonPeerListener listener, ConnectionProtocol protocol) : base(listener, protocol)
		RuntimeObject* L_0 = ___listener0;
		uint8_t L_1 = ___protocol1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33_il2cpp_TypeInfo_var);
		PhotonPeer__ctor_m527039C38BA59B40F2C39AD210FE00E43AEE237C(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.ConfigUnitySockets();
		ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
extern "C" IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		// Type websocketType = null;
		V_0 = (Type_t *)NULL;
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, PhotonWebSocket", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteral83FEBC0012B2BE602C85FC053159E9EF67600984, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_0;
		// if (websocketType == null)
		Type_t * L_1 = V_0;
		bool L_2 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_1, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp-firstpass", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteralBF11A57FF863BE16C3B8157656862961ACDA3725, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_3;
	}

IL_0023:
	{
		// if (websocketType == null)
		Type_t * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_4, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteral5729A153EC7FAE56800274A78531B43CC0A3112C, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_6;
	}

IL_0038:
	{
		// if (websocketType != null)
		Type_t * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocket] = websocketType;
		Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 * L_9 = ((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)__this)->get_SocketImplementationConfig_9();
		Type_t * L_10 = V_0;
		NullCheck(L_9);
		Dictionary_2_set_Item_mA5F89C097556DFC9B7D4510C7BB66320304A145C(L_9, 4, L_10, /*hidden argument*/Dictionary_2_set_Item_mA5F89C097556DFC9B7D4510C7BB66320304A145C_RuntimeMethod_var);
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocketSecure] = websocketType;
		Dictionary_2_t5B0506B3A9A974790367DCAF8ED965C4BAA0F947 * L_11 = ((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)__this)->get_SocketImplementationConfig_9();
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		Dictionary_2_set_Item_mA5F89C097556DFC9B7D4510C7BB66320304A145C(L_11, 5, L_12, /*hidden argument*/Dictionary_2_set_Item_mA5F89C097556DFC9B7D4510C7BB66320304A145C_RuntimeMethod_var);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0;
	{
		// var protocolPort = 0;
		V_0 = 0;
		// ProtocolToNameServerPort.TryGetValue(this.TransportProtocol, out protocolPort);
		IL2CPP_RUNTIME_CLASS_INIT(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var);
		Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * L_0 = ((ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var))->get_ProtocolToNameServerPort_45();
		uint8_t L_1 = PhotonPeer_get_TransportProtocol_m80596B1CCC64E1C4E6A8357BE0B31092AAF71E38(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m0B3F9FC4994D9E98DA63E950E3154C0313F6F925(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m0B3F9FC4994D9E98DA63E950E3154C0313F6F925_RuntimeMethod_var);
		// switch (this.TransportProtocol)
		uint8_t L_2 = PhotonPeer_get_TransportProtocol_m80596B1CCC64E1C4E6A8357BE0B31092AAF71E38(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		uint8_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_003c:
	{
		// return string.Format("{0}:{1}", NameServerHost, protocolPort);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD, _stringLiteralA595791DAF8A7212368D5CC9A8886085257B5A0C, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0052:
	{
		// return string.Format("ws://{0}:{1}", NameServerHost, protocolPort);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral107307FBAF61C580C469AD7BCE2AE293E1C4A281, _stringLiteralA595791DAF8A7212368D5CC9A8886085257B5A0C, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0068:
	{
		// return string.Format("wss://{0}:{1}", NameServerHost, protocolPort);
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral74E0537A883E3EB77F6D19BD02E970E3B8CAA800, _stringLiteralA595791DAF8A7212368D5CC9A8886085257B5A0C, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_007e:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_16 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C_RuntimeMethod_var);
	}
}
// System.Boolean Photon.Chat.ChatPeer::Connect()
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)__this)->get_DebugOut_11();
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "Connecting to nameserver " + this.NameServerAddress);
		RuntimeObject* L_1 = PhotonPeer_get_Listener_mF9009788F989B2EC27E3AF7EB4B884DEA4A4D6E4(__this, /*hidden argument*/NULL);
		String_t* L_2 = ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02(__this, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral2EAC14B3D351C8B6836D36173E0E34127AA6A058, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t40F2BA59CF7C550190687A1B54CEC544B715D8D4_il2cpp_TypeInfo_var, L_1, 3, L_3);
	}

IL_0025:
	{
		// return this.Connect(this.NameServerAddress, "NameServer");
		String_t* L_4 = ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02(__this, /*hidden argument*/NULL);
		bool L_5 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, __this, L_4, _stringLiteral5742FE1BDA7AB1FC9AFE28EA777EE363C684E01E);
		return L_5;
	}
}
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * V_0 = NULL;
	SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_tF82D092F7E40D65096AF67EDBC4D1BE161959C33 *)__this)->get_DebugOut_11();
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "OpAuthenticate()");
		RuntimeObject* L_1 = PhotonPeer_get_Listener_mF9009788F989B2EC27E3AF7EB4B884DEA4A4D6E4(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t40F2BA59CF7C550190687A1B54CEC544B715D8D4_il2cpp_TypeInfo_var, L_1, 3, _stringLiteral0C9BC8A9EA08F5764E66418E04C783D7C5EA550E);
	}

IL_001a:
	{
		// var opParameters = new Dictionary<byte, object>();
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_2 = (Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *)il2cpp_codegen_object_new(Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9(L_2, /*hidden argument*/Dictionary_2__ctor_m07648F89A15C3040B97FBF07BB91E02F3680D1C9_RuntimeMethod_var);
		V_0 = L_2;
		// opParameters[ParameterCode.AppVersion] = appVersion;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_3 = V_0;
		String_t* L_4 = ___appVersion1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_3, (uint8_t)((int32_t)220), L_4, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
		// opParameters[ParameterCode.ApplicationId] = appId;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_5 = V_0;
		String_t* L_6 = ___appId0;
		NullCheck(L_5);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_5, (uint8_t)((int32_t)224), L_6, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
		// opParameters[ParameterCode.Region] = region;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_7 = V_0;
		String_t* L_8 = ___region2;
		NullCheck(L_7);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_7, (uint8_t)((int32_t)210), L_8, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
		// if (authValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_9 = ___authValues3;
		if (!L_9)
		{
			goto IL_00f4;
		}
	}
	{
		// if (!string.IsNullOrEmpty(authValues.UserId))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_10 = ___authValues3;
		NullCheck(L_10);
		String_t* L_11 = AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3(L_10, /*hidden argument*/NULL);
		bool L_12 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006b;
		}
	}
	{
		// opParameters[ParameterCode.UserId] = authValues.UserId;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_13 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_14 = ___authValues3;
		NullCheck(L_14);
		String_t* L_15 = AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_13, (uint8_t)((int32_t)225), L_15, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
	}

IL_006b:
	{
		// if (authValues != null && authValues.AuthType != CustomAuthenticationType.None)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_16 = ___authValues3;
		if (!L_16)
		{
			goto IL_00f4;
		}
	}
	{
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_17 = ___authValues3;
		NullCheck(L_17);
		uint8_t L_18 = AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)255))))
		{
			goto IL_00f4;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationType] = (byte) authValues.AuthType;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_19 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_20 = ___authValues3;
		NullCheck(L_20);
		uint8_t L_21 = AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137(L_20, /*hidden argument*/NULL);
		uint8_t L_22 = ((uint8_t)L_21);
		RuntimeObject * L_23 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_19, (uint8_t)((int32_t)217), L_23, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
		// if (!string.IsNullOrEmpty(authValues.Token))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_24 = ___authValues3;
		NullCheck(L_24);
		String_t* L_25 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A(L_24, /*hidden argument*/NULL);
		bool L_26 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00b9;
		}
	}
	{
		// opParameters[ParameterCode.Secret] = authValues.Token;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_27 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_28 = ___authValues3;
		NullCheck(L_28);
		String_t* L_29 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_27, (uint8_t)((int32_t)221), L_29, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
		// }
		goto IL_00f4;
	}

IL_00b9:
	{
		// if (!string.IsNullOrEmpty(authValues.AuthGetParameters))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_30 = ___authValues3;
		NullCheck(L_30);
		String_t* L_31 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84(L_30, /*hidden argument*/NULL);
		bool L_32 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00d9;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationParams] = authValues.AuthGetParameters;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_33 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_34 = ___authValues3;
		NullCheck(L_34);
		String_t* L_35 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_33, (uint8_t)((int32_t)216), L_35, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
	}

IL_00d9:
	{
		// if (authValues.AuthPostData != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_36 = ___authValues3;
		NullCheck(L_36);
		RuntimeObject * L_37 = AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00f4;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationData] = authValues.AuthPostData;
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_38 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_39 = ___authValues3;
		NullCheck(L_39);
		RuntimeObject * L_40 = AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA(L_38, (uint8_t)((int32_t)214), L_40, /*hidden argument*/Dictionary_2_set_Item_m251F2F40BB42564308C834F247D88896199A49BA_RuntimeMethod_var);
	}

IL_00f4:
	{
		// return this.SendOperation(ChatOperationCode.Authenticate, opParameters, new SendOptions() { Reliability = true, Encrypt = this.IsEncryptionAvailable });
		Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E * L_41 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 ));
		SendOptions_set_Reliability_m11D003F58860AF1E9247189738E70020F492A68E((SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		bool L_42 = PhotonPeer_get_IsEncryptionAvailable_m667743E521D982F6744117BB0CFEE4991ADEDDA8(__this, /*hidden argument*/NULL);
		(&V_1)->set_Encrypt_3(L_42);
		SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  L_43 = V_1;
		bool L_44 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_tF60AC634A2F87885281BEA4855A5EE729E6B0E7E *, SendOptions_tF7722C11C5AAFE25A4FB7A8951B3E11A750BB244  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, __this, (uint8_t)((int32_t)230), L_41, L_43);
		return L_44;
	}
}
// System.Void Photon.Chat.ChatPeer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ChatPeer__cctor_mE74E176F6B3D98A4BDDE9DBC3175FB9C7C187DBF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer__cctor_mE74E176F6B3D98A4BDDE9DBC3175FB9C7C187DBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort = new Dictionary<ConnectionProtocol, int>() { { ConnectionProtocol.Udp, 5058 }, { ConnectionProtocol.Tcp, 4533 }, { ConnectionProtocol.WebSocket, 9093 }, { ConnectionProtocol.WebSocketSecure, 19093 } }; //, { ConnectionProtocol.RHttp, 6063 } };
		Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * L_0 = (Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 *)il2cpp_codegen_object_new(Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9CFA56AB41DC6245B77CD2AC8D3B77FE23167266(L_0, /*hidden argument*/Dictionary_2__ctor_m9CFA56AB41DC6245B77CD2AC8D3B77FE23167266_RuntimeMethod_var);
		Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D(L_1, 0, ((int32_t)5058), /*hidden argument*/Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D_RuntimeMethod_var);
		Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D(L_2, 1, ((int32_t)4533), /*hidden argument*/Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D_RuntimeMethod_var);
		Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D(L_3, 4, ((int32_t)9093), /*hidden argument*/Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D_RuntimeMethod_var);
		Dictionary_2_t658FBAEA30D22026FE3AB3C11FD0CF0748CC5E99 * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D(L_4, 5, ((int32_t)19093), /*hidden argument*/Dictionary_2_Add_m1922C2948F5FF32BFFD268D80BBE81F4CDCC1E0D_RuntimeMethod_var);
		((ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var))->set_ProtocolToNameServerPort_45(L_4);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ErrorCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ErrorCode__ctor_mFFD6C6BF1ABBDDF249BC5D67EBBC235EBFF5DAD4 (ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ParameterCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterCode__ctor_m3B8407750190EE8AD994D1A4B3ADB6016BC8BC92 (ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
