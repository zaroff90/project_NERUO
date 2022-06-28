﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<JSNodeMap.Node,JSNodeMap.Node>
struct Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104;
// System.Collections.Generic.Dictionary`2<JSNodeMap.Node,System.Single>
struct Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB;
// System.Func`2<JSNodeMap.MovementOverride,System.Boolean>
struct Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2;
// System.Func`2<JSNodeMap.Node,System.Collections.Generic.IEnumerable`1<JSNodeMap.Path>>
struct Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2;
// System.Func`2<JSNodeMap.Node,System.Boolean>
struct Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2;
// System.Func`2<JSNodeMap.Node,System.String>
struct Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5;
// System.Func`2<JSNodeMap.NodeType,System.String>
struct Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<JSNodeMap.Path,System.Boolean>
struct Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<JSNodeMap.Node>
struct HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t76B18C44D8838F955CF8C0F53336D6C7006E0B53;
// System.Collections.Generic.IEnumerable`1<JSNodeMap.Agent>
struct IEnumerable_1_tC16F574B83E7345A82D0F80F20BAB378F6230E4A;
// System.Collections.Generic.IEnumerable`1<JSNodeMap.MovementOverride>
struct IEnumerable_1_t0597465BC2F941C5CCC567F0069BA76A2691A3B4;
// System.Collections.Generic.IEnumerable`1<JSNodeMap.Node>
struct IEnumerable_1_t233D7A0E03240692750C71243105F7A1A4084B53;
// System.Collections.Generic.IEnumerable`1<JSNodeMap.NodeType>
struct IEnumerable_1_tBEAF4A9293C19283D43DC900C39C53257C9867B9;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<JSNodeMap.Path>
struct IEnumerable_1_tC9563980C43DC1977092930640DB39D439EDCB2E;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEqualityComparer`1<JSNodeMap.Node>
struct IEqualityComparer_1_tB2A35A69C6F3608581CFC783880F1FD0CF67C35D;
// System.Collections.Generic.Dictionary`2/KeyCollection<JSNodeMap.Node,JSNodeMap.Node>
struct KeyCollection_t43B202EDCE71AA1C81FCC2C3F59D318D5B204C2E;
// System.Collections.Generic.Dictionary`2/KeyCollection<JSNodeMap.Node,System.Single>
struct KeyCollection_t05F091049A70F7DE5363464BB60EE0097F2C73D6;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Single,JSNodeMap.Node>>
struct List_1_t146432D13F06FB710B1FF310DB79D59AEB3DBB98;
// System.Collections.Generic.List`1<JSNodeMap.Agent>
struct List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<JSNodeMap.MovementOverride>
struct List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420;
// System.Collections.Generic.List`1<JSNodeMap.Node>
struct List_1_t655259B818E9860056FF46909A95E99467EDA337;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<JSNodeMap.Path>
struct List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Predicate`1<JSNodeMap.Agent>
struct Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB;
// System.Predicate`1<JSNodeMap.NodeType>
struct Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// PriorityQueue`2<System.Single,JSNodeMap.Node>
struct PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528;
// PriorityQueue`2<System.Single,System.Object>
struct PriorityQueue_2_tFD2291E82C173BBE07FA98B4F65E5BBA103ABCAF;
// System.Collections.Generic.Queue`1<JSNodeMap.Node>
struct Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<JSNodeMap.Node,JSNodeMap.Node>
struct ValueCollection_t92E3D59E30F268892A53C4590B6A3E1FE33E71DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<JSNodeMap.Node,System.Single>
struct ValueCollection_t009CA67866F22A7E2A9F11E141CEFA3BD1C4AE3D;
// PriorityQueue`2/ValueCollection<System.Single,JSNodeMap.Node>
struct ValueCollection_t14B5BCEE59A2F2EDEE427377D5F7CC627A325BEC;
// System.Collections.Generic.Dictionary`2/Entry<JSNodeMap.Node,JSNodeMap.Node>[]
struct EntryU5BU5D_t5CCB19A930E0B6825A49138EE6FB0A1D43A466A3;
// System.Collections.Generic.Dictionary`2/Entry<JSNodeMap.Node,System.Single>[]
struct EntryU5BU5D_t07BE86D40C96A63722E85B8C2A210351630A38CF;
// System.Collections.Generic.HashSet`1/Slot<JSNodeMap.Node>[]
struct SlotU5BU5D_t5C9101E8646FAEDB1C59F2DF9770EEB97A82BCD6;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// JSNodeMap.Agent[]
struct AgentU5BU5D_tBA03BC9DAD075105F73511F5DC2BDA1DA85F4818;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// JSNodeMap.Marker[]
struct MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// JSNodeMap.MovementOverride[]
struct MovementOverrideU5BU5D_tE99FF7D331B0D5D7801A3CD9A335864FA3750BA4;
// JSNodeMap.Node[]
struct NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11;
// JSNodeMap.NodeType[]
struct NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// JSNodeMap.Path[]
struct PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// JSNodeMap.Agent
struct Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92;
// AgentControls
struct AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ClickMove
struct ClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DirectMove
struct DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// LookCamera
struct LookCamera_tA4F0603492EBAE87D7EE5DD8710A788E6118CAEA;
// JSNodeMap.Map
struct Map_t79AD168245EE60863408C85B6F3C996626E98A8B;
// JSNodeMap.Marker
struct Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// JSNodeMap.MovementOverride
struct MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222;
// JSNodeMap.Node
struct Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0;
// JSNodeMap.NodeType
struct NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5;
// JSNodeMap.NodeTypeData
struct NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// JSNodeMap.Path
struct Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41;
// PathLight
struct PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB;
// Patrol
struct Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TurnBasedManager
struct TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Wander
struct Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90;
// JSNodeMap.Agent/<MoveToTarget>d__57
struct U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03;
// JSNodeMap.Agent/<Retreat>d__58
struct U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34;
// JSNodeMap.Agent/AgentHandler
struct AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499;
// JSNodeMap.Agent/MarkerHandler
struct MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD;
// JSNodeMap.Agent/NodeHandler
struct NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58;
// JSNodeMap.Agent/NodeHandlerBool
struct NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865;
// JSNodeMap.Agent/SelfHandler
struct SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// JSNodeMap.Map/<>c
struct U3CU3Ec_t7130047096722E1057A70161B316705357013632;
// JSNodeMap.Map/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18;
// JSNodeMap.Map/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE;
// JSNodeMap.Map/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82;
// JSNodeMap.Map/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// JSNodeMap.NodeTypeData/<>c
struct U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A;
// JSNodeMap.Path/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3;
// JSNodeMap.Path/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA;
// PathLight/<>c
struct U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC;
// PathLight/<HideBattleText>d__20
struct U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E;
// JSNodeMap.Pathfinding/<>c
struct U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47;
// JSNodeMap.Pathfinding/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430;
// JSNodeMap.Pathfinding/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD;
// TurnBasedManager/<>c
struct U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A;

IL2CPP_EXTERN_C RuntimeClass* AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC9563980C43DC1977092930640DB39D439EDCB2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t60AB00C4696613F07A21F701E6D4B1D807E28A2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01895DA2F84292303D1E410CF8F1031D5BC57FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral0955B403C92742259B4A757C63231304F1075D6D;
IL2CPP_EXTERN_C String_t* _stringLiteral0BC2DE4D1965473D58200363E37A5A152D10F1C5;
IL2CPP_EXTERN_C String_t* _stringLiteral11AC5E2BD66016383281878F99D761B6B9AB5F11;
IL2CPP_EXTERN_C String_t* _stringLiteral1675D6425A9D1DF5F36821091541750969A98CBC;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral21049EC8716EC0ADF829B7827C722840273652C1;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2AC7FD7CC94509C07A4AC56E1FB2D29F0A76AFF2;
IL2CPP_EXTERN_C String_t* _stringLiteral34A4CD6D33663C3C2510C07501BFAF9766F780B4;
IL2CPP_EXTERN_C String_t* _stringLiteral363FAA193D467B8EB790C44C108C4DE7BA71E890;
IL2CPP_EXTERN_C String_t* _stringLiteral3D838401D6756FD730C26B5688339920DAF9CE9B;
IL2CPP_EXTERN_C String_t* _stringLiteral40235F6C58596B2C0C9AAF0F131B1AD067251647;
IL2CPP_EXTERN_C String_t* _stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006;
IL2CPP_EXTERN_C String_t* _stringLiteral459AE86B951E84FD1DBF22C71E4CA8F79B5B4079;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral5EDD8117445B0C65D0EF74581D08D35328543EBE;
IL2CPP_EXTERN_C String_t* _stringLiteral69936F262B12784D1F22116C4C46651677C0B697;
IL2CPP_EXTERN_C String_t* _stringLiteral6D3AC7E48849F6113D21618556C4EE3FD2AF08E0;
IL2CPP_EXTERN_C String_t* _stringLiteral74CDE587F3A0A180B82A71B5CC32DC029F2CEEA7;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7587AF6153BD42555080B40207DCE4743A62926F;
IL2CPP_EXTERN_C String_t* _stringLiteral79FA64EDC378DF92501CD435758D9851CF694602;
IL2CPP_EXTERN_C String_t* _stringLiteral7E02C8B976A270EF1419A221F0A229515D802A8C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C;
IL2CPP_EXTERN_C String_t* _stringLiteral800887583098E85FC30F11258ADBB87A8CDBED7E;
IL2CPP_EXTERN_C String_t* _stringLiteral84862A9A48CA0D10DD1BF7D797086F982800A64F;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral95A87E5E9775CEF8B7D6182F57FB470C2AF90907;
IL2CPP_EXTERN_C String_t* _stringLiteral9D3BB40C5EFF32A77A4AA24C2CC9389FB03667D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralA1199751D5F6E95E02FD1FFED9FFDB3F6259B76A;
IL2CPP_EXTERN_C String_t* _stringLiteralA386C11022F7A83C03D66206D18F9D73557A280A;
IL2CPP_EXTERN_C String_t* _stringLiteralB280845452024CC3BF8AEBDCFA41178D61AF9A9A;
IL2CPP_EXTERN_C String_t* _stringLiteralB4231333934B21CA12AF7D73F664F2A8F7A29712;
IL2CPP_EXTERN_C String_t* _stringLiteralB86D22A551B961AAFD8C558750FC5B6FFAFACDDC;
IL2CPP_EXTERN_C String_t* _stringLiteralBB358AC4079DAD46C2E537571A3FD79F34C90FD3;
IL2CPP_EXTERN_C String_t* _stringLiteralBD50ACC0C58B6ED656070AF1B16651CC7022A96C;
IL2CPP_EXTERN_C String_t* _stringLiteralC2660CCEC3C01D9B8235D4C3B8BA229A7DC5082E;
IL2CPP_EXTERN_C String_t* _stringLiteralC623FAF0357811C867BA686AA45673349089F969;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD7788843796112A3333A86F2131B749DCE62B516;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE05CAA18002BCABBAF16170575EBB15EC0B81CE;
IL2CPP_EXTERN_C String_t* _stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D;
IL2CPP_EXTERN_C String_t* _stringLiteralE12D5B6226653A6E7AF9CA8F95B321EECA211AC4;
IL2CPP_EXTERN_C String_t* _stringLiteralE366688218C4FC506EA8269E62224B37209508EB;
IL2CPP_EXTERN_C String_t* _stringLiteralE92130916A0BEE559645CFE9C53810F250D0809D;
IL2CPP_EXTERN_C String_t* _stringLiteralEA47EE6A3C6E42C332F0EF138AA8F7CB709B079D;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3C1E5D14859B50C2329439E0A8D06675C69979;
IL2CPP_EXTERN_C String_t* _stringLiteralECF78ADD54C605E9B284F747704AC53A581EDEE8;
IL2CPP_EXTERN_C String_t* _stringLiteralFA2F57448E1620460E44308B7438DD880E494CFD;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_AgentCollide_m52FB6942CFAC5C524A1302B94734D56AE848E77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_CannotReach_mE486110BDA81FBAF372374B11D39BE8DFCAFCC31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_MarkerTick_mF8BA894728B59ED1CE9F650A51394CA178D7A571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_MoveEnd_m184C8FBD043881FBDF693B9E1C90F4DFBACDF530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_MoveStart_mE609E46DE4936F94937B8C6E0B10B7B13BC7DD90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_NodeArrive_m4043FBB33C3F15188C99D2D12D78597872CB177C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_OnPause_m00576973C635DD2BD8A3BF58A03550700AB42FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_OnResume_m24D3EC1F062A64CCF46DD708CA5D647879109108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentControls_Retreat_mC12C3F406A84262BEC307BDFBEDEDDAB2BBB12F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_m3546D285CA595CF914C57DC1463DF14F8F439511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisString_t_m9107AABCE77608D1D21B9ECB6DA42D0D4334AF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mF0EE1B4FEF03F256178F1E29C8CBAF60ABA15ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C_mE9817CD3F84A5791214AAD8B9EDE492548ADFD3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C_m2C69AA5DFD87275C29D34945D75E3654F90056E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m9071239DD22F91636F03EE2635D7AF8277967153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPatrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697_mC578D46FF4B8ED875E0748C99F84DA78BCC6AFCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWander_t16D8853FE159F6274D7E938344FCF92D24D69E90_m666A5B0B2877D63F9E6D11A137785CF34ECBD03B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m0BFCFA930C3843F9B0087E7C9DBAFD35D5DDBE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m54224B8D23176C84FBC97F77754B113AD7005C0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B7516703986A0C7CCCA178CD5DFFF84CB1C9D35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m1FC1BC11C13E776D03C76C98BB840B55D1D59FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m85B6F60234DBC6A1E4E810CD3A604D2E386F20B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0391D62745B54C5A6C4FC9B9893363133C48D036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mAC2AE72DC8A59CE25A70201C5B3ECC76F7847AD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m6FE86E5ABE54748C772FFAE3A9BEB33409894414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mEF32A6D489769E95C2B80DA3CFA9EBEC90B7FD45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E4DD83E5AA52E1346572493F3F9FD52DE17AE27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m510AB99D1BE42EFD69C2A691C8C83D0E900BF2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m23846E1021C3A13697C7D1320F51D6BC290E455A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_TisString_t_m660D6AE569202A7658562B679DAB48CA5E75DFD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisString_t_m6C821210389C1A9A9351F68924FE647577720BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mCF6D432845186A61BE3D3BCCD11FCA73949D3CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mBE8463D568DB43B7C29149972FF34548636B931A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m06AA2F401C60886DC963EF3F8CB2A17717EAC37A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m530BF61FF09C20AEF9B6945B09877D50E370A026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m469EEAF33BFCB3D19CFF14A90CAABBECD629F273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0CBE94E5841E09F83CE40453E43270C448551795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mF8F72AAC87DD0BC1F8F446644AFE6B61CB489D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_m54F10936E83042F05E851CA7A0C7E18767F29A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m57C810460D278689E1EB4D76F996B99E82558A3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m7955F78D8A34713193F96A1F5BE02050B45E1202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m22ACD7E47CF44EA9C8A99613308777E244D81BC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mBE215F95440DAB5DDCDFE508BEB334DF7136EB26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mEC1B707B2437973B1A7B26C1D83324B397CD4E77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mB1B320D56ADBE63978A83212A4BE28E0E75C4BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7B99A619827AAFA32C2BA36279146AF3C1823D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m28BAF2D21404E6B86F22BAF0516DF53563ACE627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8D17D0E32B3F5D31ED3A94EEC621B4243239C629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD620A7974C8D360B9FA4D64DD9F2F18F99D2197A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m82691D58449D93B23B00144B73B3C65059FEFD67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0CACFCB8F3E5FA3F60B8DF68A397D83DC7F8A1DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mFAC47DFB4C7E4101D80AE119F00A79E6E53F77CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD843643B675C8DB54CBDDB3777548DCEC42A59F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mEAEEC29A5D2E7FEBC7731698C44277655572A3E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF107E9FEEE65CA84E1F282F6EBCDFC854DDA3EAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_mC2F40D0ABA5CD9602FAC2E98F488A3A3F7D6A9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m673D454A7079A687E37DD761A0F039FDCFC0B96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m01125645B2BA4542B32A3D6675A49C334C73C362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m72E1E786359C506306BD51117CB3B26CEA33FCDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m81BBF48063C93D68EBDEE6E6D85399E06E4FD2EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC4134BA9FB5609BF222D79C3C0C5DB52F45ED10E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3258C5A7A54E2BAD994DBC96C02ED9395DF90951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6C41FB8D537D7DADB853D470C78C5497E88A5B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathLight_NpcNodeArrive_m386D0B00F9F897E302D5C055AEB7B878277877EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathLight_PlayerNodeArrive_mB0F2648948F2BA9A8F52E5233F023540D4770C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathLight_ProcessNextTurn_m7C6FC1733FF753037C1C512C40F0B1AFB65F6CBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Patrol_NextWaypoint_mF00CC20045FBE6631AF9DE2D2A6BA93D0C1C77B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_2_Contains_m4776FED1FCD3E33540BEC951865C1D22FF7AD53E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_2_Pop_mD81AEB45B27F9A6D73E399B361E68F75D78E1DDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_2_Push_mDCFB59B5D87FD68CAF3EF963FF74CA80FB6571CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_2__ctor_mBB7D42A017E95EC8771F6D98D1004AF020C96CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_2_get_Count_mCF478E2780E9181F3485732FD84E99AEEF6BDAE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_2_get_Top_mEF985F096AE4F6F425423B48CF5D970EF15DE71B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m33695B3593B3804844113DBEE52C8780A6DADD6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mB56BED6F063241818B7BE4ABF52899B5D2ABB4DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m479378A012437171A242B4D3928B2F0882C447FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m7F69757625D9434E1AE3AC81832D6571440F343D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m1C7D61994AFFD7E101E2614AEECEB52D5B3AA679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TurnBasedManager_NpcNodeArrive_mF6D1D349908158BCCFF041AF26F9C71CD0CB9C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TurnBasedManager_PlayerNodeArrive_m1DE6901BD76FC966DEB9FA02B847F87BB53B3ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHideBattleTextU3Ed__20_System_Collections_IEnumerator_Reset_m6DD097607D27C9B7CCBF8BB58BD6C2EEB7D70CCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveToTargetU3Ed__57_System_Collections_IEnumerator_Reset_mC4DB2716677F99EC432F2EA322F00205F59B5D12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRetreatU3Ed__58_System_Collections_IEnumerator_Reset_m6C829FA86CE531E8FC8C50ACBD3240D2D4C6DEDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__11_0_m1B20D624C8A0C4CF405E885893CF368E79738990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__11_1_mB6C7FDABEB717DB21C9C3111ACFF5EA4A1D87EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__7_0_mEEB088A0C6EF6C2C3C4AB706A7EE5B26269FF554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__7_1_m9F51D4BACD33013FFA6752EF47A1426BE8D57CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNeighborsU3Eb__2_0_mC5960720D6E368DD83638CD04736E6AD2B0B5A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetPathsToNodeU3Eb__27_0_m039E18F5D8B4B99C441F2CF5F676C9F68F1E580B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateNpcStatusU3Eb__14_0_m48AB85AE2B4688667C8210C055AEE140A4FDEC19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdatePlayerStatusU3Eb__13_0_mFA6CDEB43043075E09AA576F2E02E7EA25799CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_MarkerTypeNamesU3Eb__8_0_mC19F70D6215BB0B1BAADC0AC12A7CD1990C451B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_NodeTypeNamesU3Eb__6_0_mA5D0C4F771A9358D0781F610312AF79599CA1E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CGetNodeByNameU3Eb__0_mD625C3C7EB8D55E704190A90DEF254950652BA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CGetPathsToNodeU3Eb__1_mE6F50D90451BDE87ECF74F44CC68F5A73EAE9F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass28_0_U3CGetNodeTypeIndexByNameU3Eb__0_m308C64E60817A9370748BC355A1F9928AEED5ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CGetMarkerTypeIndexByNameU3Eb__0_m3FFCA3511D9708CA057DF22C06A1F4D51F0F0670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetNeighborsU3Eb__1_m4C651BBFE2BEE4137EB019B50FE959D022030C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CAddOverrideU3Eb__0_m10247CC512C77792CBB81CC671DFFC7B1A9FE98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CRemoveOverrideU3Eb__0_mAAA31A7BF0C96B00D4E24B774D0D3BEE2FD97EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CAgentCanMoveAcrossU3Eb__0_m7F95C55B0F6F289B4D76E194028B5855B26E7F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wander_FindNewNode_m613196EBD1EBBDC9759A3E263EEB3165713B7265_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AgentU5BU5D_tBA03BC9DAD075105F73511F5DC2BDA1DA85F4818;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C;
struct NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11;
struct NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<JSNodeMap.Node,JSNodeMap.Node>
struct Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5CCB19A930E0B6825A49138EE6FB0A1D43A466A3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t43B202EDCE71AA1C81FCC2C3F59D318D5B204C2E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t92E3D59E30F268892A53C4590B6A3E1FE33E71DB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<JSNodeMap.Node,System.Single>
struct Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t07BE86D40C96A63722E85B8C2A210351630A38CF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t05F091049A70F7DE5363464BB60EE0097F2C73D6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t009CA67866F22A7E2A9F11E141CEFA3BD1C4AE3D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<JSNodeMap.Node>
struct HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5C9101E8646FAEDB1C59F2DF9770EEB97A82BCD6* ____slots_8;
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
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<JSNodeMap.Agent>
struct List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AgentU5BU5D_tBA03BC9DAD075105F73511F5DC2BDA1DA85F4818* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AgentU5BU5D_tBA03BC9DAD075105F73511F5DC2BDA1DA85F4818* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<JSNodeMap.MovementOverride>
struct List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MovementOverrideU5BU5D_tE99FF7D331B0D5D7801A3CD9A335864FA3750BA4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MovementOverrideU5BU5D_tE99FF7D331B0D5D7801A3CD9A335864FA3750BA4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<JSNodeMap.Node>
struct List_1_t655259B818E9860056FF46909A95E99467EDA337  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t655259B818E9860056FF46909A95E99467EDA337_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<JSNodeMap.Path>
struct List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// PriorityQueue`2<System.Single,JSNodeMap.Node>
struct PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528  : public RuntimeObject
{
	// System.Collections.Generic.IComparer`1<TPriority> PriorityQueue`2::priorityComparer
	RuntimeObject* ___priorityComparer_0;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<TPriority,TValue>> PriorityQueue`2::queue
	List_1_t146432D13F06FB710B1FF310DB79D59AEB3DBB98* ___queue_1;
	// PriorityQueue`2/ValueCollection<TPriority,TValue> PriorityQueue`2::valueCollection
	ValueCollection_t14B5BCEE59A2F2EDEE427377D5F7CC627A325BEC* ___valueCollection_2;
};

// System.Collections.Generic.Queue`1<JSNodeMap.Node>
struct Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// JSNodeMap.MovementOverride
struct MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222  : public RuntimeObject
{
	// System.Int32 JSNodeMap.MovementOverride::agentType
	int32_t ___agentType_0;
	// JSNodeMap.MovementType JSNodeMap.MovementOverride::movement
	int32_t ___movement_1;
};

// JSNodeMap.Pathfinding
struct Pathfinding_t240D90499C5462DB20EF5B8B9BC64AE1763DAEEF  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// JSNodeMap.Agent/<MoveToTarget>d__57
struct U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03  : public RuntimeObject
{
	// System.Int32 JSNodeMap.Agent/<MoveToTarget>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSNodeMap.Agent/<MoveToTarget>d__57::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// JSNodeMap.Agent JSNodeMap.Agent/<MoveToTarget>d__57::<>4__this
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___U3CU3E4__this_2;
};

// JSNodeMap.Agent/<Retreat>d__58
struct U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34  : public RuntimeObject
{
	// System.Int32 JSNodeMap.Agent/<Retreat>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSNodeMap.Agent/<Retreat>d__58::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// JSNodeMap.Agent JSNodeMap.Agent/<Retreat>d__58::<>4__this
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___U3CU3E4__this_2;
};

// JSNodeMap.Map/<>c
struct U3CU3Ec_t7130047096722E1057A70161B316705357013632  : public RuntimeObject
{
};

struct U3CU3Ec_t7130047096722E1057A70161B316705357013632_StaticFields
{
	// JSNodeMap.Map/<>c JSNodeMap.Map/<>c::<>9
	U3CU3Ec_t7130047096722E1057A70161B316705357013632* ___U3CU3E9_0;
	// System.Func`2<JSNodeMap.Node,System.Collections.Generic.IEnumerable`1<JSNodeMap.Path>> JSNodeMap.Map/<>c::<>9__27_0
	Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* ___U3CU3E9__27_0_1;
};

// JSNodeMap.Map/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18  : public RuntimeObject
{
	// System.String JSNodeMap.Map/<>c__DisplayClass26_0::name
	String_t* ___name_0;
};

// JSNodeMap.Map/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE  : public RuntimeObject
{
	// JSNodeMap.Node JSNodeMap.Map/<>c__DisplayClass27_0::node
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node_0;
};

// JSNodeMap.Map/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82  : public RuntimeObject
{
	// System.String JSNodeMap.Map/<>c__DisplayClass28_0::typeName
	String_t* ___typeName_0;
};

// JSNodeMap.Map/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77  : public RuntimeObject
{
	// System.String JSNodeMap.Map/<>c__DisplayClass29_0::typeName
	String_t* ___typeName_0;
};

// JSNodeMap.NodeTypeData/<>c
struct U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A  : public RuntimeObject
{
};

struct U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields
{
	// JSNodeMap.NodeTypeData/<>c JSNodeMap.NodeTypeData/<>c::<>9
	U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A* ___U3CU3E9_0;
	// System.Func`2<JSNodeMap.NodeType,System.String> JSNodeMap.NodeTypeData/<>c::<>9__6_0
	Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* ___U3CU3E9__6_0_1;
	// System.Func`2<JSNodeMap.NodeType,System.String> JSNodeMap.NodeTypeData/<>c::<>9__8_0
	Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* ___U3CU3E9__8_0_2;
};

// JSNodeMap.Path/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3  : public RuntimeObject
{
	// System.Int32 JSNodeMap.Path/<>c__DisplayClass31_0::agentType
	int32_t ___agentType_0;
};

// JSNodeMap.Path/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA  : public RuntimeObject
{
	// System.Int32 JSNodeMap.Path/<>c__DisplayClass32_0::agentType
	int32_t ___agentType_0;
};

// PathLight/<>c
struct U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC  : public RuntimeObject
{
};

struct U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields
{
	// PathLight/<>c PathLight/<>c::<>9
	U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* ___U3CU3E9_0;
	// System.Predicate`1<JSNodeMap.Agent> PathLight/<>c::<>9__11_0
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* ___U3CU3E9__11_0_1;
	// System.Predicate`1<JSNodeMap.Agent> PathLight/<>c::<>9__11_1
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* ___U3CU3E9__11_1_2;
	// System.Func`2<JSNodeMap.Node,System.String> PathLight/<>c::<>9__13_0
	Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* ___U3CU3E9__13_0_3;
	// System.Func`2<JSNodeMap.Node,System.String> PathLight/<>c::<>9__14_0
	Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* ___U3CU3E9__14_0_4;
};

// PathLight/<HideBattleText>d__20
struct U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E  : public RuntimeObject
{
	// System.Int32 PathLight/<HideBattleText>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PathLight/<HideBattleText>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PathLight PathLight/<HideBattleText>d__20::<>4__this
	PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* ___U3CU3E4__this_2;
};

// JSNodeMap.Pathfinding/<>c
struct U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47  : public RuntimeObject
{
};

struct U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_StaticFields
{
	// JSNodeMap.Pathfinding/<>c JSNodeMap.Pathfinding/<>c::<>9
	U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47* ___U3CU3E9_0;
	// System.Func`2<JSNodeMap.Node,System.Collections.Generic.IEnumerable`1<JSNodeMap.Path>> JSNodeMap.Pathfinding/<>c::<>9__2_0
	Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* ___U3CU3E9__2_0_1;
};

// JSNodeMap.Pathfinding/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430  : public RuntimeObject
{
	// JSNodeMap.Node JSNodeMap.Pathfinding/<>c__DisplayClass2_0::node
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node_0;
	// System.Func`2<JSNodeMap.Path,System.Boolean> JSNodeMap.Pathfinding/<>c__DisplayClass2_0::<>9__1
	Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* ___U3CU3E9__1_1;
};

// JSNodeMap.Pathfinding/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD  : public RuntimeObject
{
	// JSNodeMap.Agent JSNodeMap.Pathfinding/<>c__DisplayClass3_0::agent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent_0;
};

// TurnBasedManager/<>c
struct U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A  : public RuntimeObject
{
};

struct U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields
{
	// TurnBasedManager/<>c TurnBasedManager/<>c::<>9
	U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A* ___U3CU3E9_0;
	// System.Predicate`1<JSNodeMap.Agent> TurnBasedManager/<>c::<>9__7_0
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* ___U3CU3E9__7_0_1;
	// System.Predicate`1<JSNodeMap.Agent> TurnBasedManager/<>c::<>9__7_1
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* ___U3CU3E9__7_1_2;
};

// System.Collections.Generic.List`1/Enumerator<JSNodeMap.Agent>
struct Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<JSNodeMap.Node>
struct Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t655259B818E9860056FF46909A95E99467EDA337* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<JSNodeMap.Path>
struct Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Single,JSNodeMap.Node>
struct KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	float ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>
struct KeyValuePair_2_tF57672B734F87478D3D304F7EE80400AD101232B 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	float ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.SortingLayer
struct SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 
{
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// JSNodeMap.NodeType
struct NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5  : public RuntimeObject
{
	// System.String JSNodeMap.NodeType::name
	String_t* ___name_0;
	// UnityEngine.Mesh JSNodeMap.NodeType::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_1;
	// UnityEngine.Sprite JSNodeMap.NodeType::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_2;
	// UnityEngine.SortingLayer JSNodeMap.NodeType::sortingLayer
	SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 ___sortingLayer_3;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Func`2<JSNodeMap.MovementOverride,System.Boolean>
struct Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2  : public MulticastDelegate_t
{
};

// System.Func`2<JSNodeMap.Node,System.Collections.Generic.IEnumerable`1<JSNodeMap.Path>>
struct Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2  : public MulticastDelegate_t
{
};

// System.Func`2<JSNodeMap.Node,System.Boolean>
struct Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2  : public MulticastDelegate_t
{
};

// System.Func`2<JSNodeMap.Node,System.String>
struct Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5  : public MulticastDelegate_t
{
};

// System.Func`2<JSNodeMap.NodeType,System.String>
struct Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7  : public MulticastDelegate_t
{
};

// System.Func`2<JSNodeMap.Path,System.Boolean>
struct Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94  : public MulticastDelegate_t
{
};

// System.Predicate`1<JSNodeMap.Agent>
struct Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB  : public MulticastDelegate_t
{
};

// System.Predicate`1<JSNodeMap.NodeType>
struct Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// JSNodeMap.NodeTypeData
struct NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// JSNodeMap.NodeType[] JSNodeMap.NodeTypeData::nodeTypes
	NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* ___nodeTypes_4;
	// JSNodeMap.NodeType[] JSNodeMap.NodeTypeData::markerTypes
	NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* ___markerTypes_5;
	// UnityEngine.Material JSNodeMap.NodeTypeData::meshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshMaterial_6;
	// UnityEngine.Material JSNodeMap.NodeTypeData::lineMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___lineMaterial_7;
	// UnityEngine.Material JSNodeMap.NodeTypeData::highlightMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___highlightMaterial_8;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// JSNodeMap.Agent/AgentHandler
struct AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499  : public MulticastDelegate_t
{
};

// JSNodeMap.Agent/MarkerHandler
struct MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD  : public MulticastDelegate_t
{
};

// JSNodeMap.Agent/NodeHandler
struct NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58  : public MulticastDelegate_t
{
};

// JSNodeMap.Agent/NodeHandlerBool
struct NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865  : public MulticastDelegate_t
{
};

// JSNodeMap.Agent/SelfHandler
struct SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// JSNodeMap.Agent
struct Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 JSNodeMap.Agent::agentType
	int32_t ___agentType_4;
	// System.Single JSNodeMap.Agent::movementSpeed
	float ___movementSpeed_5;
	// JSNodeMap.Node JSNodeMap.Agent::currentNode
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___currentNode_6;
	// JSNodeMap.Node JSNodeMap.Agent::lastNode
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___lastNode_7;
	// JSNodeMap.Node JSNodeMap.Agent::targetNode
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode_8;
	// System.Collections.Generic.Queue`1<JSNodeMap.Node> JSNodeMap.Agent::nodeRoute
	Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* ___nodeRoute_9;
	// JSNodeMap.Path JSNodeMap.Agent::onPath
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___onPath_10;
	// System.Boolean JSNodeMap.Agent::isMoving
	bool ___isMoving_11;
	// System.Boolean JSNodeMap.Agent::doMove
	bool ___doMove_12;
	// System.Boolean JSNodeMap.Agent::doMoveToTarget
	bool ___doMoveToTarget_13;
	// System.Boolean JSNodeMap.Agent::doRetreat
	bool ___doRetreat_14;
	// System.Int32 JSNodeMap.Agent::nextMarkerIndex
	int32_t ___nextMarkerIndex_15;
	// System.Collections.Generic.List`1<System.Single> JSNodeMap.Agent::markerPosList
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___markerPosList_16;
	// UnityEngine.Vector3 JSNodeMap.Agent::curWayPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___curWayPoint_17;
	// System.Single JSNodeMap.Agent::movementFactor
	float ___movementFactor_18;
	// System.Single JSNodeMap.Agent::distTraveled
	float ___distTraveled_19;
	// System.Single JSNodeMap.Agent::percentTraveled
	float ___percentTraveled_20;
	// UnityEngine.WaitForEndOfFrame JSNodeMap.Agent::wait
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___wait_21;
	// JSNodeMap.Map JSNodeMap.Agent::nodeMap
	Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap_22;
	// JSNodeMap.Agent/NodeHandler JSNodeMap.Agent::OnMoveStart
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___OnMoveStart_23;
	// JSNodeMap.Agent/NodeHandler JSNodeMap.Agent::OnMoveEnd
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___OnMoveEnd_24;
	// JSNodeMap.Agent/NodeHandler JSNodeMap.Agent::OnRetreat
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___OnRetreat_25;
	// JSNodeMap.Agent/NodeHandler JSNodeMap.Agent::OnCannotReach
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___OnCannotReach_26;
	// JSNodeMap.Agent/NodeHandlerBool JSNodeMap.Agent::OnNodeArrive
	NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* ___OnNodeArrive_27;
	// JSNodeMap.Agent/AgentHandler JSNodeMap.Agent::OnAgentCollide
	AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* ___OnAgentCollide_28;
	// JSNodeMap.Agent/MarkerHandler JSNodeMap.Agent::OnMarkerTick
	MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* ___OnMarkerTick_29;
	// JSNodeMap.Agent/SelfHandler JSNodeMap.Agent::OnPause
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* ___OnPause_30;
	// JSNodeMap.Agent/SelfHandler JSNodeMap.Agent::OnResume
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* ___OnResume_31;
};

// AgentControls
struct AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// JSNodeMap.Agent AgentControls::agent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent_4;
	// AgentControls/AgentType AgentControls::agentType
	int32_t ___agentType_5;
	// UnityEngine.UI.Text AgentControls::txtStatus
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtStatus_6;
	// UnityEngine.UI.Text AgentControls::txtLatest
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtLatest_7;
};

// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraFollow::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
};

// ClickMove
struct ClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// JSNodeMap.Agent ClickMove::agent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent_4;
	// System.Boolean ClickMove::active
	bool ___active_5;
	// System.Single ClickMove::maxDistance
	float ___maxDistance_6;
};

// DirectMove
struct DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// JSNodeMap.Agent DirectMove::agent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent_4;
	// System.Boolean DirectMove::active
	bool ___active_5;
	// System.Single DirectMove::detectionAngle
	float ___detectionAngle_6;
	// System.Single DirectMove::deadZone
	float ___deadZone_7;
	// System.Single DirectMove::inputDelay
	float ___inputDelay_8;
	// System.Single DirectMove::currentInputTime
	float ___currentInputTime_9;
	// System.Single DirectMove::inputWait
	float ___inputWait_10;
	// System.Single DirectMove::inputCylce
	float ___inputCylce_11;
	// DirectMove/MovementReference DirectMove::moveRef
	int32_t ___moveRef_12;
};

// LookCamera
struct LookCamera_tA4F0603492EBAE87D7EE5DD8710A788E6118CAEA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single LookCamera::speedNormal
	float ___speedNormal_4;
	// System.Single LookCamera::speedFast
	float ___speedFast_5;
	// System.Single LookCamera::mouseSensitivityX
	float ___mouseSensitivityX_6;
	// System.Single LookCamera::mouseSensitivityY
	float ___mouseSensitivityY_7;
	// System.Single LookCamera::rotY
	float ___rotY_8;
};

// JSNodeMap.Map
struct Map_t79AD168245EE60863408C85B6F3C996626E98A8B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String JSNodeMap.Map::version
	String_t* ___version_4;
	// System.Single JSNodeMap.Map::defaultMarkerSpacing
	float ___defaultMarkerSpacing_5;
	// System.Single JSNodeMap.Map::redrawThreshhold
	float ___redrawThreshhold_6;
	// JSNodeMap.DrawMode JSNodeMap.Map::drawMode
	int32_t ___drawMode_7;
	// System.Single JSNodeMap.Map::nodeScale
	float ___nodeScale_8;
	// System.Boolean JSNodeMap.Map::drawNodes
	bool ___drawNodes_9;
	// System.Boolean JSNodeMap.Map::drawMarkers
	bool ___drawMarkers_10;
	// System.Boolean JSNodeMap.Map::drawLines
	bool ___drawLines_11;
	// System.Single JSNodeMap.Map::lineWidth
	float ___lineWidth_12;
	// UnityEngine.LineAlignment JSNodeMap.Map::lineOrientation
	int32_t ___lineOrientation_13;
	// JSNodeMap.MovementType JSNodeMap.Map::defaultPathDirection
	int32_t ___defaultPathDirection_14;
	// JSNodeMap.NodeTypeData JSNodeMap.Map::nodeData
	NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* ___nodeData_15;
	// System.Collections.Generic.List`1<JSNodeMap.Node> JSNodeMap.Map::mapNodes
	List_1_t655259B818E9860056FF46909A95E99467EDA337* ___mapNodes_16;
	// System.Collections.Generic.List`1<JSNodeMap.Agent> JSNodeMap.Map::mapAgents
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* ___mapAgents_17;
	// System.String[] JSNodeMap.Map::agentTypes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___agentTypes_18;
	// System.Boolean JSNodeMap.Map::allPaused
	bool ___allPaused_19;
};

// JSNodeMap.Marker
struct Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer JSNodeMap.Marker::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_4;
	// UnityEngine.MeshRenderer JSNodeMap.Marker::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_5;
	// UnityEngine.MeshFilter JSNodeMap.Marker::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_6;
	// System.Int32 JSNodeMap.Marker::markerType
	int32_t ___markerType_7;
	// JSNodeMap.Path JSNodeMap.Marker::nodePath
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___nodePath_8;
};

// JSNodeMap.Node
struct Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer JSNodeMap.Node::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_4;
	// UnityEngine.MeshRenderer JSNodeMap.Node::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_5;
	// UnityEngine.MeshFilter JSNodeMap.Node::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_6;
	// UnityEngine.BoxCollider JSNodeMap.Node::col
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___col_7;
	// System.String JSNodeMap.Node::nodeName
	String_t* ___nodeName_8;
	// System.Int32 JSNodeMap.Node::nodeType
	int32_t ___nodeType_9;
	// JSNodeMap.Map JSNodeMap.Node::nodeMap
	Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap_10;
	// System.Collections.Generic.List`1<JSNodeMap.Agent> JSNodeMap.Node::agentsAtNode
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* ___agentsAtNode_11;
	// System.Collections.Generic.List`1<JSNodeMap.Path> JSNodeMap.Node::paths
	List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* ___paths_12;
	// System.Boolean JSNodeMap.Node::drawNode
	bool ___drawNode_13;
};

// JSNodeMap.Path
struct Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// JSNodeMap.Node JSNodeMap.Path::fromNode
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___fromNode_4;
	// JSNodeMap.Node JSNodeMap.Path::toNode
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___toNode_5;
	// System.Boolean JSNodeMap.Path::drawInEdtior
	bool ___drawInEdtior_6;
	// System.Boolean JSNodeMap.Path::drawMarkers
	bool ___drawMarkers_7;
	// System.Boolean JSNodeMap.Path::drawLine
	bool ___drawLine_8;
	// JSNodeMap.MovementType JSNodeMap.Path::pathDirection
	int32_t ___pathDirection_9;
	// System.Single JSNodeMap.Path::toFactor
	float ___toFactor_10;
	// System.Single JSNodeMap.Path::fromFactor
	float ___fromFactor_11;
	// System.Single JSNodeMap.Path::toSpeed
	float ___toSpeed_12;
	// System.Single JSNodeMap.Path::fromSpeed
	float ___fromSpeed_13;
	// System.Boolean JSNodeMap.Path::passableByDefault
	bool ___passableByDefault_14;
	// System.Collections.Generic.List`1<System.String> JSNodeMap.Path::passExemptions
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___passExemptions_15;
	// System.Collections.Generic.List`1<JSNodeMap.MovementOverride> JSNodeMap.Path::movementOverrides
	List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* ___movementOverrides_16;
	// System.Int32 JSNodeMap.Path::markerType
	int32_t ___markerType_17;
	// System.Single JSNodeMap.Path::markerSpacing
	float ___markerSpacing_18;
	// System.Collections.Generic.List`1<System.Single> JSNodeMap.Path::markerPosList
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___markerPosList_19;
	// JSNodeMap.Map JSNodeMap.Path::nodeMap
	Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap_20;
	// UnityEngine.LineRenderer JSNodeMap.Path::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_21;
};

// PathLight
struct PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button PathLight::btnNextTurn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnNextTurn_4;
	// TMPro.TMP_Text PathLight::txtTurnNumber
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___txtTurnNumber_5;
	// TMPro.TMP_Text PathLight::txtPlayerStatus
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___txtPlayerStatus_6;
	// TMPro.TMP_Text PathLight::txtNpcStatus
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___txtNpcStatus_7;
	// UnityEngine.Canvas PathLight::cnvBattleText
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___cnvBattleText_8;
	// JSNodeMap.Map PathLight::map
	Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___map_9;
	// JSNodeMap.Agent PathLight::playerAgent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___playerAgent_10;
	// JSNodeMap.Agent PathLight::npcAgent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___npcAgent_11;
	// System.Int32 PathLight::currentTurn
	int32_t ___currentTurn_12;
	// System.Boolean PathLight::isPlayerTurn
	bool ___isPlayerTurn_13;
	// System.Single PathLight::maxDistance
	float ___maxDistance_14;
};

// Patrol
struct Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// JSNodeMap.Agent Patrol::agent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent_4;
	// System.Boolean Patrol::active
	bool ___active_5;
	// System.Collections.Generic.List`1<JSNodeMap.Node> Patrol::waypoints
	List_1_t655259B818E9860056FF46909A95E99467EDA337* ___waypoints_6;
	// System.Int32 Patrol::currentPointIndex
	int32_t ___currentPointIndex_7;
};

// TurnBasedManager
struct TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// JSNodeMap.Map TurnBasedManager::map
	Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___map_4;
	// JSNodeMap.Agent TurnBasedManager::playerAgent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___playerAgent_5;
	// JSNodeMap.Agent TurnBasedManager::npcAgent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___npcAgent_6;
	// System.Int32 TurnBasedManager::currentTurn
	int32_t ___currentTurn_7;
	// System.Boolean TurnBasedManager::isPlayerTurn
	bool ___isPlayerTurn_8;
	// System.Single TurnBasedManager::maxDistance
	float ___maxDistance_9;
	// UnityEngine.GameObject TurnBasedManager::loseScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loseScreen_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Wander
struct Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// JSNodeMap.Agent Wander::agent
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent_4;
	// System.Boolean Wander::active
	bool ___active_5;
	// JSNodeMap.Node Wander::randomNode
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___randomNode_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// JSNodeMap.Path[]
struct PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2  : public RuntimeArray
{
	ALIGN_FIELD (8) Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* m_Items[1];

	inline Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// JSNodeMap.Node[]
struct NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* m_Items[1];

	inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// JSNodeMap.NodeType[]
struct NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D  : public RuntimeArray
{
	ALIGN_FIELD (8) NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* m_Items[1];

	inline NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// JSNodeMap.Agent[]
struct AgentU5BU5D_tBA03BC9DAD075105F73511F5DC2BDA1DA85F4818  : public RuntimeArray
{
	ALIGN_FIELD (8) Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* m_Items[1];

	inline Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// JSNodeMap.Marker[]
struct MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C  : public RuntimeArray
{
	ALIGN_FIELD (8) Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* m_Items[1];

	inline Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mDFB3CD7FACAF85AFE5750DED2E3222107C996168_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_mA8ADB041F0D522A7D98DCC2759A79A6E98BADE85_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m4052F60F13DF530E12A56A34BC921BA5E262B711_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisRuntimeObject_m128BC4FCACC394916204C26608C561A89C9E2554_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4202FD457BB995E8553D010D1E861B7BD2F60BB0_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E4DD83E5AA52E1346572493F3F9FD52DE17AE27_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void PriorityQueue`2<System.Single,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_2__ctor_m91A075EE5B399F9478ABBDB8D18FB0A202AA7638_gshared (PriorityQueue_2_tFD2291E82C173BBE07FA98B4F65E5BBA103ABCAF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB3364B977072656B662C984B4F7E39394C341B2A_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, RuntimeObject* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void PriorityQueue`2<System.Single,System.Object>::Push(TPriority,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_2_Push_m423246DD1926874D8D66F681C780CD213027EAAC_gshared (PriorityQueue_2_tFD2291E82C173BBE07FA98B4F65E5BBA103ABCAF* __this, float ___priority0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TPriority,TValue> PriorityQueue`2<System.Single,System.Object>::get_Top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tF57672B734F87478D3D304F7EE80400AD101232B PriorityQueue_2_get_Top_m26802B5FBF940A4324E9C4FBFF9EE92B8D573B95_gshared (PriorityQueue_2_tFD2291E82C173BBE07FA98B4F65E5BBA103ABCAF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4E43FBBD9E1DF70C18662CFE03F2E819AFE42A9A_gshared_inline (KeyValuePair_2_tF57672B734F87478D3D304F7EE80400AD101232B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TPriority,TValue> PriorityQueue`2<System.Single,System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tF57672B734F87478D3D304F7EE80400AD101232B PriorityQueue_2_Pop_mC7FC41231A3823CD02148F1816FE93E8043257D3_gshared (PriorityQueue_2_tFD2291E82C173BBE07FA98B4F65E5BBA103ABCAF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean PriorityQueue`2<System.Single,System.Object>::Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityQueue_2_Contains_mA9399A78110194804875D39A58C865A785355E7E_gshared (PriorityQueue_2_tFD2291E82C173BBE07FA98B4F65E5BBA103ABCAF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_m592530FB0319E03D62CA02B0349798F60BC09A31_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 PriorityQueue`2<System.Single,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PriorityQueue_2_get_Count_mC54CEF8240DEEAC25B23DEFE4CC5799E84B602B5_gshared (PriorityQueue_2_tFD2291E82C173BBE07FA98B4F65E5BBA103ABCAF* __this, const RuntimeMethod* method) ;

// System.Void JSNodeMap.Agent/NodeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03 (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnMoveStart(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnMoveStart_m66CE3FB467DACFD5BD0BB9108CCDA8A988335BCB (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent/NodeHandlerBool::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHandlerBool__ctor_m08F394E8D1D081672D71FBE2F85F61AA94C0B2C5 (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnNodeArrive(JSNodeMap.Agent/NodeHandlerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnNodeArrive_mA06D994F366DE7555F61BABD9292EA32920F48D3 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnMoveEnd(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnMoveEnd_m643C7590744FB9B365AA99FB1C3EF7BB52A6A528 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnRetreat(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnRetreat_mDE340E20F509E66785BE8ECA586640A5C51DC95A (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnCannotReach(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnCannotReach_m95879A965B269E6A889ED72629CAF04C88580460 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent/AgentHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentHandler__ctor_mE13731D39BA59D916771DA566ED279A1035AD4C1 (AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnAgentCollide(JSNodeMap.Agent/AgentHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnAgentCollide_m8DCE64D5AE78F6289847218819C62364875A51A7 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent/MarkerHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerHandler__ctor_m1CAB08399A9E12DC1AB916E219303ABFA3800E7A (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnMarkerTick(JSNodeMap.Agent/MarkerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnMarkerTick_m66B3428EF9DD5D0596B9E21DE4440404F2F73A05 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent/SelfHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfHandler__ctor_m220A82F811F8A86DF2AE9EE2C61A55CF6CFD9DB9 (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnPause(JSNodeMap.Agent/SelfHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnPause_m6274A7BC46119D7C4686D9E39F3218ADEB035F18 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::add_OnResume(JSNodeMap.Agent/SelfHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnResume_m0FFDAC008E559EC457436495E8F7825E706ACF15 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ClickMove>()
inline ClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C* Component_GetComponent_TisClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C_mE9817CD3F84A5791214AAD8B9EDE492548ADFD3C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<DirectMove>()
inline DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* Component_GetComponent_TisDirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C_m2C69AA5DFD87275C29D34945D75E3654F90056E0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Patrol>()
inline Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697* Component_GetComponent_TisPatrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697_mC578D46FF4B8ED875E0748C99F84DA78BCC6AFCA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Wander>()
inline Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* Component_GetComponent_TisWander_t16D8853FE159F6274D7E938344FCF92D24D69E90_m666A5B0B2877D63F9E6D11A137785CF34ECBD03B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void AgentControls::UpdateStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_UpdateStatus_m2CC450451B8C42E96DC0C33EF5945B8709CF3CDC (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, String_t* ___status0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void AgentControls::UpdateLatest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_UpdateLatest_m28F275819D2B6F0C804AECDED6FFC261693C5D70 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, String_t* ___status0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<JSNodeMap.Agent>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m626B98099FAB18B7E93E3A17E48DBC5DD3A8511A (Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<JSNodeMap.Agent>::Find(System.Predicate`1<T>)
inline Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* __this, Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* ___match0, const RuntimeMethod* method)
{
	return ((  Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* (*) (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D*, Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Void JSNodeMap.Agent::SetCurrentNodeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_SetCurrentNodeByName_m161C13A3D0D5EA15F68DF7B5A6332A0A56280604 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, String_t* ___nodeName0, const RuntimeMethod* method) ;
// JSNodeMap.Node TurnBasedManager::GetRandomNpcTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* TurnBasedManager_GetRandomNpcTarget_mE3F4EABAD646D4D2933B696261FCD94E9006C85A (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) ;
// System.Void TurnBasedManager::UpdateNpcStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_UpdateNpcStatus_mDAFAF2A6E24C05BD054A38153F4F352EEBF738CC (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<JSNodeMap.Node>()
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void TurnBasedManager::UpdatePlayerStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_UpdatePlayerStatus_m64E31B5CE226AFA895D90FF131D39420A6822E61 (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Map::ClearRouteHighlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_ClearRouteHighlight_m865404158840B4CBE2EC5D58DB00AF0743CED079 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) ;
// JSNodeMap.Path[] JSNodeMap.Node::GetPaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* Node_GetPaths_m57C64AE4B5D9C93E9F3C4A3B766165A271DB153C (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<JSNodeMap.Path>()
inline Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* Component_GetComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m9071239DD22F91636F03EE2635D7AF8277967153 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.Generic.List`1<JSNodeMap.Node> JSNodeMap.Pathfinding::FindRoute(JSNodeMap.Node,JSNodeMap.Node,JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t655259B818E9860056FF46909A95E99467EDA337* Pathfinding_FindRoute_m2934C1CD03C8D449CCC6F249BFA08E8DCA440FCE (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___startNode0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___goalNode1, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent2, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Map::HighlightRoute(System.Collections.Generic.List`1<JSNodeMap.Node>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_HighlightRoute_m3640E740EF42ED3E08D3D3C7BFE08A64A4593890 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, List_1_t655259B818E9860056FF46909A95E99467EDA337* ___route0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<JSNodeMap.Node>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m81BBF48063C93D68EBDEE6E6D85399E06E4FD2EC (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1<JSNodeMap.Node>::Remove(T)
inline bool List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8 (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<JSNodeMap.Node>::get_Count()
inline int32_t List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<JSNodeMap.Node>::get_Item(System.Int32)
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void JSNodeMap.Node::HidePaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_HidePaths_mB214F8C5113769A3EDFE95624B550B469314DDCE (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) ;
// System.Void TurnBasedManager::CheckBattleConditions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_CheckBattleConditions_m27FBC47125DC477C4817EDC14DFDBF8BF3F79E69 (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::MoveToTarget(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) ;
// System.Int32 JSNodeMap.Node::DeadEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_DeadEnd_m29C262C25A85088E6FA7E12212C684297A6445E6 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void TurnBasedManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D53B30E12D532EE2F4BFDE960FFBA27F84EE8B9 (U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<JSNodeMap.Agent>()
inline Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Single DirectMove::GetAngleV2(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DirectMove_GetAngleV2_mFFC42A278033B8493A115ED91A6C53450A69F17E (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point21, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<JSNodeMap.Node> JSNodeMap.Pathfinding::GetNeighbors(JSNodeMap.Node,JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t655259B818E9860056FF46909A95E99467EDA337* Pathfinding_GetNeighbors_mB8771D1E02E0B8586D5831D362B3C1B80671985C (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<JSNodeMap.Node>::GetEnumerator()
inline Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<JSNodeMap.Node>::Dispose()
inline void Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2 (Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<JSNodeMap.Node>::get_Current()
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_inline (Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163* __this, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single DirectMove::GetAngleV3(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DirectMove_GetAngleV3_m1C44DE449260CE9F0C45841692B51852F43298D5 (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point21, const RuntimeMethod* method) ;
// System.Single DirectMove::GetAngleDiff(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DirectMove_GetAngleDiff_m6BD3B12429EB6D78947AC28CB1167EC14F4CDF72 (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, float ___angle10, float ___angle21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<JSNodeMap.Node>::MoveNext()
inline bool Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534 (Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void Patrol::NextWaypoint(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Patrol_NextWaypoint_mF00CC20045FBE6631AF9DE2D2A6BA93D0C1C77B4 (Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<JSNodeMap.Node>::.ctor()
inline void List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203 (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Wander::FindNewNode(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wander_FindNewNode_m613196EBD1EBBDC9759A3E263EEB3165713B7265 (Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) ;
// JSNodeMap.Node Wander::GetRandomNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Wander_GetRandomNode_m849C8F8F455AD37DFF9C119B4193A419B11092AF (Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<JSNodeMap.Agent>::get_Count()
inline int32_t List_1_get_Count_m3258C5A7A54E2BAD994DBC96C02ED9395DF90951_inline (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// JSNodeMap.Node PathLight::GetRandomNpcTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* PathLight_GetRandomNpcTarget_m08D13D535FE9205C24A55BEBC880F2A2B71FDB6F (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) ;
// System.Void PathLight::UpdateNpcStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_UpdateNpcStatus_mF603685753D2B4F07237955F0C058BCB73A1D05D (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) ;
// System.Void PathLight::UpdateTurnStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_UpdateTurnStatus_m8D3593494C392E3A02F7E5C3E7C3CB51387C4ED2 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) ;
// System.Void PathLight::UpdatePlayerStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_UpdatePlayerStatus_m0932173E450452A6704986CD4EB8BD2295F1CC65 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void System.Func`2<JSNodeMap.Node,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4CA1DD8251051AC861CF26891DC30EB12428FA5E (Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<JSNodeMap.Node,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisString_t_m6C821210389C1A9A9351F68924FE647577720BFA (RuntimeObject* ___source0, Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m675422BC1927F19F7135C5211B45EE7AC9F7D632 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void PathLight::CheckBattleConditions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_CheckBattleConditions_mFB0FB73949E9C5BB06C68FC1688B9EF979CB4F40 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PathLight::HideBattleText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PathLight_HideBattleText_mAD9562B39BBA512812CF6A7AC669ADC279C2EDB6 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void PathLight/<HideBattleText>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideBattleTextU3Ed__20__ctor_m3EC233313E393CD6BC0B5875ACD4517013694F72 (U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PathLight/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0B60389C5ABA80007DBE353EE7CF529D2C7C425A (U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<JSNodeMap.Node>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m6FE86E5ABE54748C772FFAE3A9BEB33409894414 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared)(___source0, method);
}
// T System.Collections.Generic.Queue`1<JSNodeMap.Node>::Peek()
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* __this, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A*, const RuntimeMethod*))Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<JSNodeMap.Node>::.ctor()
inline void Queue_1__ctor_m7F69757625D9434E1AE3AC81832D6571440F343D (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<JSNodeMap.Node>()
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* GameObject_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m22ACD7E47CF44EA9C8A99613308777E244D81BC6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void JSNodeMap.Agent/AgentHandler::Invoke(JSNodeMap.Agent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_inline (AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent/<MoveToTarget>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToTargetU3Ed__57__ctor_m82BB3BB0F04ADB25F67926FC8FBE6212A3815C66 (U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent/<Retreat>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetreatU3Ed__58__ctor_m4982074BDF7ECAB71965A4B792B4522E7037F6CE (U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// JSNodeMap.Path JSNodeMap.Map::FindValidPath(JSNodeMap.Node,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* Map_FindValidPath_m9F25634F168EF72B7341E829D11A7452C807A5AF (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___nodeA0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___nodeB1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent::FaceDir(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_FaceDir_m74F893D10A1023C829715B808E1C67A08445D62C (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir0, const RuntimeMethod* method) ;
// JSNodeMap.Node JSNodeMap.Map::GetNodeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Map_GetNodeByName_mBB8C0B15675C812407C53EE15ADE914A9E334B69 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<JSNodeMap.Node>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mFAC47DFB4C7E4101D80AE119F00A79E6E53F77CA (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void JSNodeMap.Agent/NodeHandler::Invoke(JSNodeMap.Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_inline (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<JSNodeMap.Node>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void Queue_1__ctor_m479378A012437171A242B4D3928B2F0882C447FB (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A*, RuntimeObject*, const RuntimeMethod*))Queue_1__ctor_mDFB3CD7FACAF85AFE5750DED2E3222107C996168_gshared)(__this, ___collection0, method);
}
// T System.Collections.Generic.Queue`1<JSNodeMap.Node>::Dequeue()
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Queue_1_Dequeue_mB56BED6F063241818B7BE4ABF52899B5D2ABB4DB (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* __this, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<JSNodeMap.Node>::get_Count()
inline int32_t Queue_1_get_Count_m1C7D61994AFFD7E101E2614AEECEB52D5B3AA679_inline (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void JSNodeMap.Agent/NodeHandlerBool::Invoke(JSNodeMap.Node,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_inline (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<JSNodeMap.Agent>::Remove(T)
inline bool List_1_Remove_mEAEEC29A5D2E7FEBC7731698C44277655572A3E3 (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D*, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void JSNodeMap.Agent::SetupPathAndMarkers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_SetupPathAndMarkers_m6D888AB4374A76885520956AD1073100FA3B66CE (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator JSNodeMap.Agent::MoveToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Agent_MoveToTarget_mB51F46A234A294A842793AEFB0505B2D5BAB4EB8 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean JSNodeMap.Pathfinding::AgentCanMoveAcross(JSNodeMap.Path,JSNodeMap.Node,JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pathfinding_AgentCanMoveAcross_m2EAB5192D0D1A8EA0F4D723BB2ADD5F30A1E2324 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node1, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator JSNodeMap.Agent::Retreat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Agent_Retreat_mB4A3E3C3FD854A4FAD435670D99C6309AB6855A7 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Agent/SelfHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_inline (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Single JSNodeMap.Path::get_Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_get_Distance_mDF7F2DD98AEAB7728FBD7A53B8CA65E58A1D608F (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// System.Void JSNodeMap.Agent/MarkerHandler::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_inline (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<JSNodeMap.Agent>::Add(T)
inline void List_1_Add_m28BAF2D21404E6B86F22BAF0516DF53563ACE627_inline (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D*, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Queue`1<JSNodeMap.Node>::Clear()
inline void Queue_1_Clear_m33695B3593B3804844113DBEE52C8780A6DADD6C (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<JSNodeMap.Node>()
inline NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<JSNodeMap.Path>()
inline PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<JSNodeMap.Path>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mEF32A6D489769E95C2B80DA3CFA9EBEC90B7FD45 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_mA8ADB041F0D522A7D98DCC2759A79A6E98BADE85_gshared)(___first0, ___second1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<JSNodeMap.Path>(System.Collections.Generic.IEnumerable`1<TSource>)
inline PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Boolean JSNodeMap.Path::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsValid_m42E946CA82F60FEB1E456CD0FD5F4750E8ADBB50 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<JSNodeMap.Path>::Remove(T)
inline bool List_1_Remove_mD843643B675C8DB54CBDDB3777548DCEC42A59F1 (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* __this, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<JSNodeMap.Path>::GetEnumerator()
inline Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160 (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 (*) (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<JSNodeMap.Path>::Dispose()
inline void Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45 (Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<JSNodeMap.Path>::get_Current()
inline Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_inline (Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6* __this, const RuntimeMethod* method)
{
	return ((  Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* (*) (Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void JSNodeMap.Map::RemovePath(JSNodeMap.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_RemovePath_m4ABF5CA258C829430522FB4A32D053AADCFD1959 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<JSNodeMap.Path>::MoveNext()
inline bool Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77 (Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void JSNodeMap.Map::ClearPathsToNode(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_ClearPathsToNode_m597376F34C525AA3FE0B348BC83823D274FE1ED7 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___clearNode0, const RuntimeMethod* method) ;
// JSNodeMap.Path[] JSNodeMap.Map::GetPathsToNode(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* Map_GetPathsToNode_m63C889E70D58D45C07870FE0739FDCC3BD6B4200 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Map::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_Refresh_m3766143B274B49B6D0607D8DB6D7483AEA8E2AA2 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<JSNodeMap.Node>()
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Component_GetComponentInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mF0EE1B4FEF03F256178F1E29C8CBAF60ABA15ABD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<JSNodeMap.Agent>()
inline Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* GameObject_AddComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mF8F72AAC87DD0BC1F8F446644AFE6B61CB489D92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void JSNodeMap.Agent::Initialize(JSNodeMap.Map,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_Initialize_mF6B63BF8CF76F6F7D2CD0ACAE816B28F0B26B351 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___startingNode1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_isStatic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_isStatic_m0468F0E4553F5B3DDBE03F3788BE0A1A3736839C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<JSNodeMap.Node>()
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* GameObject_AddComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m57C810460D278689E1EB4D76F996B99E82558A3C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void JSNodeMap.Node::Initialize(JSNodeMap.Map)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Initialize_mFA59D2AC5698FF90B947B3CCA7DBC9254F50A23E (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<JSNodeMap.Node>::Add(T)
inline void List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_inline (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void JSNodeMap.Map/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m2A3F9BF863812499B2902308FE3164B863E37104 (U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<JSNodeMap.Node,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3FD2616646C293C2CBF42EBD91FF31F5C742AD57 (Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<JSNodeMap.Node>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Enumerable_FirstOrDefault_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m510AB99D1BE42EFD69C2A691C8C83D0E900BF2AE (RuntimeObject* ___source0, Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2* ___predicate1, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (RuntimeObject*, Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// System.Void JSNodeMap.Map/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_mBD436E6319495D0F96708FC9AE7DBDAAF1428DE4 (U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<JSNodeMap.Node,System.Collections.Generic.IEnumerable`1<JSNodeMap.Path>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m429C742B27A288E41344FE2CB1A7FCE8CDCEF209 (Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<JSNodeMap.Node,JSNodeMap.Path>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m23846E1021C3A13697C7D1320F51D6BC290E455A (RuntimeObject* ___source0, Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m4052F60F13DF530E12A56A34BC921BA5E262B711_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<JSNodeMap.Path,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m79532BB9BE1562F4A6834A6A15A77F604D0BA1D0 (Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<JSNodeMap.Path>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m06AA2F401C60886DC963EF3F8CB2A17717EAC37A (RuntimeObject* ___source0, Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void JSNodeMap.Map/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m2A3C63764B02CF39D685DA0818B4C0F11CA5C908 (U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<JSNodeMap.NodeType>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m09A55F0B9626C88059B299817A3349A6A260F235 (Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Array::FindIndex<JSNodeMap.NodeType>(T[],System.Predicate`1<T>)
inline int32_t Array_FindIndex_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_m3546D285CA595CF914C57DC1463DF14F8F439511 (NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* ___array0, Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A* ___match1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D*, Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A*, const RuntimeMethod*))Array_FindIndex_TisRuntimeObject_m128BC4FCACC394916204C26608C561A89C9E2554_gshared)(___array0, ___match1, method);
}
// System.Void JSNodeMap.Map/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m740430DE46B1171796CB40E74E234D6B109F3032 (U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.String>(T[],T)
inline int32_t Array_IndexOf_TisString_t_m9107AABCE77608D1D21B9ECB6DA42D0D4334AF32 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4202FD457BB995E8553D010D1E861B7BD2F60BB0_gshared)(___array0, ___value1, method);
}
// System.Int32 JSNodeMap.Map::GetNodeTypeIndexByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Map_GetNodeTypeIndexByName_m33020FBA1F462B2BBF28158379C56B1BE68988AD (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, String_t* ___typeName0, const RuntimeMethod* method) ;
// System.Int32 JSNodeMap.Map::GetMarkerTypeIndexByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Map_GetMarkerTypeIndexByName_m20430DD3C74C06B9695F81D49E51C526FF02AB5B (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, String_t* ___typeName0, const RuntimeMethod* method) ;
// System.Int32 JSNodeMap.Map::GetAgentTypeIndexByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Map_GetAgentTypeIndexByName_m70DED5AFDB035928126DC1A5C65D9DACEB90F81A (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, String_t* ___typeName0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<JSNodeMap.Node>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t655259B818E9860056FF46909A95E99467EDA337* Enumerable_ToList_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mBE8463D568DB43B7C29149972FF34548636B931A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t655259B818E9860056FF46909A95E99467EDA337* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void JSNodeMap.Node::SetDrawMode(JSNodeMap.DrawMode,JSNodeMap.NodeTypeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SetDrawMode_m44B71D8B76BBFDB61EA53DC176A618004E980AD5 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, int32_t ___drawMode0, NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* ___data1, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Node::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SetVisible_m28C300ECB94CFCC5305156892C1CBD337A2D7591 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, bool ___isVisible0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<JSNodeMap.Path>::get_Count()
inline int32_t List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_inline (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<JSNodeMap.Path>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void JSNodeMap.Path::RedrawMarkers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_RedrawMarkers_m54F15670819F11959677E88870658AEBEABB7C8C (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_widthMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_widthMultiplier_mB1B825C2AAE0BB5F05431DEDAC5856EF27478255 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<JSNodeMap.Path>::.ctor()
inline void List_1__ctor_m01125645B2BA4542B32A3D6675A49C334C73C362 (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<JSNodeMap.Path>::get_Item(System.Int32)
inline Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* List_1_get_Item_m6C41FB8D537D7DADB853D470C78C5497E88A5B0B (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* (*) (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<JSNodeMap.Path>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0CACFCB8F3E5FA3F60B8DF68A397D83DC7F8A1DD (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<JSNodeMap.Path>::Add(T)
inline void List_1_Add_mD620A7974C8D360B9FA4D64DD9F2F18F99D2197A_inline (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* __this, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void JSNodeMap.Path::Initialize(JSNodeMap.Map,JSNodeMap.Node,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_Initialize_mCB0831FE80635E7627F6DD97F6D8E8663CE650F0 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___fromNode1, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___toNode2, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<JSNodeMap.Agent>()
inline AgentU5BU5D_tBA03BC9DAD075105F73511F5DC2BDA1DA85F4818* Component_GetComponentsInChildren_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m0BFCFA930C3843F9B0087E7C9DBAFD35D5DDBE11 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AgentU5BU5D_tBA03BC9DAD075105F73511F5DC2BDA1DA85F4818* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<JSNodeMap.Agent>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* Enumerable_ToList_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mCF6D432845186A61BE3D3BCCD11FCA73949D3CCD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<JSNodeMap.Agent>::GetEnumerator()
inline Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D List_1_GetEnumerator_m82691D58449D93B23B00144B73B3C65059FEFD67 (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D (*) (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<JSNodeMap.Agent>::Dispose()
inline void Enumerator_Dispose_m530BF61FF09C20AEF9B6945B09877D50E370A026 (Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<JSNodeMap.Agent>::get_Current()
inline Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* Enumerator_get_Current_m0CBE94E5841E09F83CE40453E43270C448551795_inline (Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D* __this, const RuntimeMethod* method)
{
	return ((  Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* (*) (Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void JSNodeMap.Agent::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_Pause_mA041DC6A39AD6FDE99B3F92799FF934B82E1ECF9 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<JSNodeMap.Agent>::MoveNext()
inline bool Enumerator_MoveNext_m469EEAF33BFCB3D19CFF14A90CAABBECD629F273 (Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void JSNodeMap.Agent::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_Play_mA4260CF4416145C4E68875B7DA18E4A5DF7B59DD (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<JSNodeMap.Marker>()
inline MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<JSNodeMap.Agent>::.ctor()
inline void List_1__ctor_mC4134BA9FB5609BF222D79C3C0C5DB52F45ED10E (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Map/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m661C56F7462BD31F254E5D6368C86BBC9E3AA1EE (U3CU3Ec_t7130047096722E1057A70161B316705357013632* __this, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Marker::SetRenderer(JSNodeMap.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker_SetRenderer_m4F64524B512E2A2D71116C9B9989933DBFFED236 (Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* __this, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<JSNodeMap.Path>()
inline Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* GameObject_AddComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m7955F78D8A34713193F96A1F5BE02050B45E1202 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<JSNodeMap.Path>::ToArray()
inline PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* List_1_ToArray_m673D454A7079A687E37DD761A0F039FDCFC0B96D (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* __this, const RuntimeMethod* method)
{
	return ((  PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* (*) (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void JSNodeMap.Path::SetVisibleLine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_SetVisibleLine_m876CE67BAB24472A4DE36AAC811663F28EAD9520 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, bool ___status0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean JSNodeMap.Map::IsNodeType(JSNodeMap.Node,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Map_IsNodeType_mA0F9C7A448AEAD4E345A8714E333377836C5B18E (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, String_t* ___typeName1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<JSNodeMap.MovementOverride>::.ctor()
inline void List_1__ctor_m72E1E786359C506306BD51117CB3B26CEA33FCDB (List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline)(__this, method);
}
// System.Void JSNodeMap.Path::ClearPathMarkers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_ClearPathMarkers_mFC9D6AB3CD02C5ED699E0746AB639283055AB36A (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 JSNodeMap.Map::GetPointOnPath(JSNodeMap.Path,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Map_GetPointOnPath_mD244D42A53DFEDF7C9B283004846C9C88E0A7807 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, float ___normalizedDistance1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<JSNodeMap.Marker>()
inline Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* GameObject_AddComponent_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_m54F10936E83042F05E851CA7A0C7E18767F29A77 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void JSNodeMap.Marker::Initialize(JSNodeMap.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker_Initialize_m05B0EE89CED8F6E833879B2FBDCD032716573722 (Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* __this, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E4DD83E5AA52E1346572493F3F9FD52DE17AE27 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E4DD83E5AA52E1346572493F3F9FD52DE17AE27_gshared)(___source0, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Path::SetLineDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_SetLineDefaults_mDB7FD619F303240B3661BABE5233BA33A29724A9 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Path::CalculatePathPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_CalculatePathPoints_m2B051A180DF4B12D9903501C46671B59BE9F791D (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_alignment(UnityEngine.LineAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_alignment_m9755D4E7B9FDB0FC455CA17AD5F0EC5F22338466 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Path/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mD0D74FB9D8487DC90FD22A5F45607C8D3F78F5EB (U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<JSNodeMap.MovementOverride,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC300195B494AE4EAED8A70B178868E2F94858C51 (Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<JSNodeMap.MovementOverride>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650 (RuntimeObject* ___source0, Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2* ___predicate1, const RuntimeMethod* method)
{
	return ((  MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* (*) (RuntimeObject*, Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// System.Void JSNodeMap.MovementOverride::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementOverride__ctor_m6C606B77FA949C6C0855FA6E856DDAA46D00E7EE (MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<JSNodeMap.MovementOverride>::Add(T)
inline void List_1_Add_m8D17D0E32B3F5D31ED3A94EEC621B4243239C629_inline (List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* __this, MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420*, MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void JSNodeMap.Path/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mBF943216FAB8C787190D9F27BA3D9E90B3B66EC0 (U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<JSNodeMap.MovementOverride>::Remove(T)
inline bool List_1_Remove_mF107E9FEEE65CA84E1F282F6EBCDFC854DDA3EAA (List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* __this, MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420*, MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void JSNodeMap.Pathfinding/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m58389BDE977C2D71D5208AB1ACEB8BE8E601B6C7 (U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* __this, const RuntimeMethod* method) ;
// System.Void JSNodeMap.Pathfinding/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mC71BCCA9A6CACA7094B9CF816A7B9C531DF70ED9 (U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD* __this, const RuntimeMethod* method) ;
// System.Void PriorityQueue`2<System.Single,JSNodeMap.Node>::.ctor()
inline void PriorityQueue_2__ctor_mBB7D42A017E95EC8771F6D98D1004AF020C96CFB (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528*, const RuntimeMethod*))PriorityQueue_2__ctor_m91A075EE5B399F9478ABBDB8D18FB0A202AA7638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<JSNodeMap.Node>::.ctor()
inline void HashSet_1__ctor_mB1B320D56ADBE63978A83212A4BE28E0E75C4BD6 (HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<JSNodeMap.Node,JSNodeMap.Node>::.ctor()
inline void Dictionary_2__ctor_m5B7516703986A0C7CCCA178CD5DFFF84CB1C9D35 (Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<JSNodeMap.Node,System.Single>::.ctor()
inline void Dictionary_2__ctor_m54224B8D23176C84FBC97F77754B113AD7005C0B (Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092*, const RuntimeMethod*))Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<JSNodeMap.Node,JSNodeMap.Node>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m0391D62745B54C5A6C4FC9B9893363133C48D036 (Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___key0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<JSNodeMap.Node,System.Single>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mAC2AE72DC8A59CE25A70201C5B3ECC76F7847AD3 (Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, float, const RuntimeMethod*))Dictionary_2_set_Item_mB3364B977072656B662C984B4F7E39394C341B2A_gshared)(__this, ___key0, ___value1, method);
}
// System.Single JSNodeMap.Pathfinding::HCost(JSNodeMap.Node,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Pathfinding_HCost_m726446878145D95B1960E9418B0626E7160EA8BB (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___curNode0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___goalNode1, const RuntimeMethod* method) ;
// System.Void PriorityQueue`2<System.Single,JSNodeMap.Node>::Push(TPriority,TValue)
inline void PriorityQueue_2_Push_mDCFB59B5D87FD68CAF3EF963FF74CA80FB6571CE (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* __this, float ___priority0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528*, float, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))PriorityQueue_2_Push_m423246DD1926874D8D66F681C780CD213027EAAC_gshared)(__this, ___priority0, ___value1, method);
}
// System.Collections.Generic.KeyValuePair`2<TPriority,TValue> PriorityQueue`2<System.Single,JSNodeMap.Node>::get_Top()
inline KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0 PriorityQueue_2_get_Top_mEF985F096AE4F6F425423B48CF5D970EF15DE71B (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0 (*) (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528*, const RuntimeMethod*))PriorityQueue_2_get_Top_m26802B5FBF940A4324E9C4FBFF9EE92B8D573B95_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Single,JSNodeMap.Node>::get_Value()
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* KeyValuePair_2_get_Value_m7B99A619827AAFA32C2BA36279146AF3C1823D89_inline (KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0* __this, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0*, const RuntimeMethod*))KeyValuePair_2_get_Value_m4E43FBBD9E1DF70C18662CFE03F2E819AFE42A9A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<JSNodeMap.Node,JSNodeMap.Node>::get_Item(TKey)
inline Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Dictionary_2_get_Item_m85B6F60234DBC6A1E4E810CD3A604D2E386F20B7 (Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___key0, const RuntimeMethod* method)
{
	return ((  Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* (*) (Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<JSNodeMap.Node>::Reverse()
inline void List_1_Reverse_mC2F40D0ABA5CD9602FAC2E98F488A3A3F7D6A9B6 (List_1_t655259B818E9860056FF46909A95E99467EDA337* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t655259B818E9860056FF46909A95E99467EDA337*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TPriority,TValue> PriorityQueue`2<System.Single,JSNodeMap.Node>::Pop()
inline KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0 PriorityQueue_2_Pop_mD81AEB45B27F9A6D73E399B361E68F75D78E1DDE (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0 (*) (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528*, const RuntimeMethod*))PriorityQueue_2_Pop_mC7FC41231A3823CD02148F1816FE93E8043257D3_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<JSNodeMap.Node>::Add(T)
inline bool HashSet_1_Add_mBE215F95440DAB5DDCDFE508BEB334DF7136EB26 (HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<JSNodeMap.Node>::Contains(T)
inline bool HashSet_1_Contains_mEC1B707B2437973B1A7B26C1D83324B397CD4E77 (HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Boolean PriorityQueue`2<System.Single,JSNodeMap.Node>::Contains(TValue)
inline bool PriorityQueue_2_Contains_m4776FED1FCD3E33540BEC951865C1D22FF7AD53E (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))PriorityQueue_2_Contains_mA9399A78110194804875D39A58C865A785355E7E_gshared)(__this, ___value0, method);
}
// TValue System.Collections.Generic.Dictionary`2<JSNodeMap.Node,System.Single>::get_Item(TKey)
inline float Dictionary_2_get_Item_m1FC1BC11C13E776D03C76C98BB840B55D1D59FA6 (Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___key0, const RuntimeMethod* method)
{
	return ((  float (*) (Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*))Dictionary_2_get_Item_m592530FB0319E03D62CA02B0349798F60BC09A31_gshared)(__this, ___key0, method);
}
// System.Single JSNodeMap.Pathfinding::GCost(JSNodeMap.Node,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Pathfinding_GCost_m6F2C14AD9B9A0CD1B442CF40A115157FC880E746 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___curNode0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___neighbor1, const RuntimeMethod* method) ;
// System.Int32 PriorityQueue`2<System.Single,JSNodeMap.Node>::get_Count()
inline int32_t PriorityQueue_2_get_Count_mCF478E2780E9181F3485732FD84E99AEEF6BDAE5 (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528*, const RuntimeMethod*))PriorityQueue_2_get_Count_mC54CEF8240DEEAC25B23DEFE4CC5799E84B602B5_gshared)(__this, method);
}
// System.Void JSNodeMap.Pathfinding/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m195B924C55FB29F5C4ED227DB3F532403152602D (U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<JSNodeMap.NodeType,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2FC67F4E64DB4438CD3159938DF180E1AA727FA0 (Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<JSNodeMap.NodeType,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_TisString_t_m660D6AE569202A7658562B679DAB48CA5E75DFD8 (RuntimeObject* ___source0, Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void JSNodeMap.NodeTypeData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m505C794AD67A6AC645A67BF95F088C9BB5AA50B9 (U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void AgentControls::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_Awake_m5C104486B0C578063CFFF47AE70A24D6611DBF26 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_AgentCollide_m52FB6942CFAC5C524A1302B94734D56AE848E77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_CannotReach_mE486110BDA81FBAF372374B11D39BE8DFCAFCC31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_MarkerTick_mF8BA894728B59ED1CE9F650A51394CA178D7A571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_MoveEnd_m184C8FBD043881FBDF693B9E1C90F4DFBACDF530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_MoveStart_mE609E46DE4936F94937B8C6E0B10B7B13BC7DD90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_NodeArrive_m4043FBB33C3F15188C99D2D12D78597872CB177C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_OnPause_m00576973C635DD2BD8A3BF58A03550700AB42FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_OnResume_m24D3EC1F062A64CCF46DD708CA5D647879109108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentControls_Retreat_mC12C3F406A84262BEC307BDFBEDEDDAB2BBB12F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent.OnMoveStart += MoveStart;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___agent_4;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)il2cpp_codegen_object_new(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03(L_1, __this, (intptr_t)((void*)AgentControls_MoveStart_mE609E46DE4936F94937B8C6E0B10B7B13BC7DD90_RuntimeMethod_var), NULL);
		Agent_add_OnMoveStart_m66CE3FB467DACFD5BD0BB9108CCDA8A988335BCB(L_0, L_1, NULL);
		// agent.OnNodeArrive += NodeArrive;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___agent_4;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_3 = (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)il2cpp_codegen_object_new(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		NodeHandlerBool__ctor_m08F394E8D1D081672D71FBE2F85F61AA94C0B2C5(L_3, __this, (intptr_t)((void*)AgentControls_NodeArrive_m4043FBB33C3F15188C99D2D12D78597872CB177C_RuntimeMethod_var), NULL);
		Agent_add_OnNodeArrive_mA06D994F366DE7555F61BABD9292EA32920F48D3(L_2, L_3, NULL);
		// agent.OnMoveEnd += MoveEnd;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_4 = __this->___agent_4;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_5 = (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)il2cpp_codegen_object_new(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03(L_5, __this, (intptr_t)((void*)AgentControls_MoveEnd_m184C8FBD043881FBDF693B9E1C90F4DFBACDF530_RuntimeMethod_var), NULL);
		Agent_add_OnMoveEnd_m643C7590744FB9B365AA99FB1C3EF7BB52A6A528(L_4, L_5, NULL);
		// agent.OnRetreat += Retreat;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_6 = __this->___agent_4;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)il2cpp_codegen_object_new(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03(L_7, __this, (intptr_t)((void*)AgentControls_Retreat_mC12C3F406A84262BEC307BDFBEDEDDAB2BBB12F1_RuntimeMethod_var), NULL);
		Agent_add_OnRetreat_mDE340E20F509E66785BE8ECA586640A5C51DC95A(L_6, L_7, NULL);
		// agent.OnCannotReach += CannotReach;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_8 = __this->___agent_4;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)il2cpp_codegen_object_new(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03(L_9, __this, (intptr_t)((void*)AgentControls_CannotReach_mE486110BDA81FBAF372374B11D39BE8DFCAFCC31_RuntimeMethod_var), NULL);
		Agent_add_OnCannotReach_m95879A965B269E6A889ED72629CAF04C88580460(L_8, L_9, NULL);
		// agent.OnAgentCollide += AgentCollide;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_10 = __this->___agent_4;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_11 = (AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*)il2cpp_codegen_object_new(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499_il2cpp_TypeInfo_var);
		AgentHandler__ctor_mE13731D39BA59D916771DA566ED279A1035AD4C1(L_11, __this, (intptr_t)((void*)AgentControls_AgentCollide_m52FB6942CFAC5C524A1302B94734D56AE848E77D_RuntimeMethod_var), NULL);
		Agent_add_OnAgentCollide_m8DCE64D5AE78F6289847218819C62364875A51A7(L_10, L_11, NULL);
		// agent.OnMarkerTick += MarkerTick;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_12 = __this->___agent_4;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_13 = (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*)il2cpp_codegen_object_new(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD_il2cpp_TypeInfo_var);
		MarkerHandler__ctor_m1CAB08399A9E12DC1AB916E219303ABFA3800E7A(L_13, __this, (intptr_t)((void*)AgentControls_MarkerTick_mF8BA894728B59ED1CE9F650A51394CA178D7A571_RuntimeMethod_var), NULL);
		Agent_add_OnMarkerTick_m66B3428EF9DD5D0596B9E21DE4440404F2F73A05(L_12, L_13, NULL);
		// agent.OnPause += OnPause;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_14 = __this->___agent_4;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_15 = (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)il2cpp_codegen_object_new(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var);
		SelfHandler__ctor_m220A82F811F8A86DF2AE9EE2C61A55CF6CFD9DB9(L_15, __this, (intptr_t)((void*)AgentControls_OnPause_m00576973C635DD2BD8A3BF58A03550700AB42FF7_RuntimeMethod_var), NULL);
		Agent_add_OnPause_m6274A7BC46119D7C4686D9E39F3218ADEB035F18(L_14, L_15, NULL);
		// agent.OnResume += OnResume;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_16 = __this->___agent_4;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_17 = (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)il2cpp_codegen_object_new(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var);
		SelfHandler__ctor_m220A82F811F8A86DF2AE9EE2C61A55CF6CFD9DB9(L_17, __this, (intptr_t)((void*)AgentControls_OnResume_m24D3EC1F062A64CCF46DD708CA5D647879109108_RuntimeMethod_var), NULL);
		Agent_add_OnResume_m0FFDAC008E559EC457436495E8F7825E706ACF15(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::ToggleActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_ToggleActive_mC57EF50873DC8B681D0AE775490742A5E0BC2B99 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, bool ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C_mE9817CD3F84A5791214AAD8B9EDE492548ADFD3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C_m2C69AA5DFD87275C29D34945D75E3654F90056E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPatrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697_mC578D46FF4B8ED875E0748C99F84DA78BCC6AFCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWander_t16D8853FE159F6274D7E938344FCF92D24D69E90_m666A5B0B2877D63F9E6D11A137785CF34ECBD03B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (agentType) {
		int32_t L_0 = __this->___agentType_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_0054;
			}
		}
	}
	{
		return;
	}

IL_001e:
	{
		// agent.GetComponent<ClickMove>().active = status;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___agent_4;
		ClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C* L_3;
		L_3 = Component_GetComponent_TisClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C_mE9817CD3F84A5791214AAD8B9EDE492548ADFD3C(L_2, Component_GetComponent_TisClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C_mE9817CD3F84A5791214AAD8B9EDE492548ADFD3C_RuntimeMethod_var);
		bool L_4 = ___status0;
		L_3->___active_5 = L_4;
		// break;
		return;
	}

IL_0030:
	{
		// agent.GetComponent<DirectMove>().active = status;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_5 = __this->___agent_4;
		DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* L_6;
		L_6 = Component_GetComponent_TisDirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C_m2C69AA5DFD87275C29D34945D75E3654F90056E0(L_5, Component_GetComponent_TisDirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C_m2C69AA5DFD87275C29D34945D75E3654F90056E0_RuntimeMethod_var);
		bool L_7 = ___status0;
		L_6->___active_5 = L_7;
		// break;
		return;
	}

IL_0042:
	{
		// agent.GetComponent<Patrol>().active = status;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_8 = __this->___agent_4;
		Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697* L_9;
		L_9 = Component_GetComponent_TisPatrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697_mC578D46FF4B8ED875E0748C99F84DA78BCC6AFCA(L_8, Component_GetComponent_TisPatrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697_mC578D46FF4B8ED875E0748C99F84DA78BCC6AFCA_RuntimeMethod_var);
		bool L_10 = ___status0;
		L_9->___active_5 = L_10;
		// break;
		return;
	}

IL_0054:
	{
		// agent.GetComponent<Wander>().active = status;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_11 = __this->___agent_4;
		Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* L_12;
		L_12 = Component_GetComponent_TisWander_t16D8853FE159F6274D7E938344FCF92D24D69E90_m666A5B0B2877D63F9E6D11A137785CF34ECBD03B(L_11, Component_GetComponent_TisWander_t16D8853FE159F6274D7E938344FCF92D24D69E90_m666A5B0B2877D63F9E6D11A137785CF34ECBD03B_RuntimeMethod_var);
		bool L_13 = ___status0;
		L_12->___active_5 = L_13;
		// }
		return;
	}
}
// System.Void AgentControls::MoveStart(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_MoveStart_mE609E46DE4936F94937B8C6E0B10B7B13BC7DD90 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1675D6425A9D1DF5F36821091541750969A98CBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateStatus("Moving to " + targetNode.nodeName);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___targetNode0;
		String_t* L_1 = L_0->___nodeName_8;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1675D6425A9D1DF5F36821091541750969A98CBC, L_1, NULL);
		AgentControls_UpdateStatus_m2CC450451B8C42E96DC0C33EF5945B8709CF3CDC(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::NodeArrive(JSNodeMap.Node,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_NodeArrive_m4043FBB33C3F15188C99D2D12D78597872CB177C (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___arrivedNode0, bool ___isTargetNode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40235F6C58596B2C0C9AAF0F131B1AD067251647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA2F57448E1620460E44308B7438DD880E494CFD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* G_B3_2 = NULL;
	{
		// UpdateLatest("Arrived at " + ((isTargetNode) ? " target: " : "") + arrivedNode.nodeName);
		bool L_0 = ___isTargetNode1;
		G_B1_0 = _stringLiteral40235F6C58596B2C0C9AAF0F131B1AD067251647;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteral40235F6C58596B2C0C9AAF0F131B1AD067251647;
			G_B2_1 = __this;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteralFA2F57448E1620460E44308B7438DD880E494CFD;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0015:
	{
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = ___arrivedNode0;
		String_t* L_2 = L_1->___nodeName_8;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B3_1, G_B3_0, L_2, NULL);
		AgentControls_UpdateLatest_m28F275819D2B6F0C804AECDED6FFC261693C5D70(G_B3_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::MoveEnd(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_MoveEnd_m184C8FBD043881FBDF693B9E1C90F4DFBACDF530 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE92130916A0BEE559645CFE9C53810F250D0809D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateStatus("Reached " + targetNode.nodeName);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___targetNode0;
		String_t* L_1 = L_0->___nodeName_8;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE92130916A0BEE559645CFE9C53810F250D0809D, L_1, NULL);
		AgentControls_UpdateStatus_m2CC450451B8C42E96DC0C33EF5945B8709CF3CDC(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::Retreat(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_Retreat_mC12C3F406A84262BEC307BDFBEDEDDAB2BBB12F1 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1199751D5F6E95E02FD1FFED9FFDB3F6259B76A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateStatus("Retreating to " + targetNode.nodeName);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___targetNode0;
		String_t* L_1 = L_0->___nodeName_8;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA1199751D5F6E95E02FD1FFED9FFDB3F6259B76A, L_1, NULL);
		AgentControls_UpdateStatus_m2CC450451B8C42E96DC0C33EF5945B8709CF3CDC(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::CannotReach(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_CannotReach_mE486110BDA81FBAF372374B11D39BE8DFCAFCC31 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34A4CD6D33663C3C2510C07501BFAF9766F780B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateStatus("Cannot reach " + targetNode.nodeName);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___targetNode0;
		String_t* L_1 = L_0->___nodeName_8;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral34A4CD6D33663C3C2510C07501BFAF9766F780B4, L_1, NULL);
		AgentControls_UpdateStatus_m2CC450451B8C42E96DC0C33EF5945B8709CF3CDC(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::AgentCollide(JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_AgentCollide_m52FB6942CFAC5C524A1302B94734D56AE848E77D (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___otherAgent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E02C8B976A270EF1419A221F0A229515D802A8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateLatest("Contact with " + otherAgent.name);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = ___otherAgent0;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7E02C8B976A270EF1419A221F0A229515D802A8C, L_1, NULL);
		AgentControls_UpdateLatest_m28F275819D2B6F0C804AECDED6FFC261693C5D70(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::MarkerTick(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_MarkerTick_mF8BA894728B59ED1CE9F650A51394CA178D7A571 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, int32_t ___markerIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD50ACC0C58B6ED656070AF1B16651CC7022A96C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateLatest("Passed marker " + markerIndex);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___markerIndex0), NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBD50ACC0C58B6ED656070AF1B16651CC7022A96C, L_0, NULL);
		AgentControls_UpdateLatest_m28F275819D2B6F0C804AECDED6FFC261693C5D70(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::UpdateStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_UpdateStatus_m2CC450451B8C42E96DC0C33EF5945B8709CF3CDC (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, String_t* ___status0, const RuntimeMethod* method) 
{
	{
		// txtStatus.text = status;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtStatus_6;
		String_t* L_1 = ___status0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void AgentControls::UpdateLatest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_UpdateLatest_m28F275819D2B6F0C804AECDED6FFC261693C5D70 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, String_t* ___status0, const RuntimeMethod* method) 
{
	{
		// txtLatest.text = status;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtLatest_7;
		String_t* L_1 = ___status0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void AgentControls::OnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_OnPause_m00576973C635DD2BD8A3BF58A03550700AB42FF7 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateLatest("Paused");
		AgentControls_UpdateLatest_m28F275819D2B6F0C804AECDED6FFC261693C5D70(__this, _stringLiteral9D51F1932AF1EF0CBE73927EBEBA563CF6965837, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::OnResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls_OnResume_m24D3EC1F062A64CCF46DD708CA5D647879109108 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB86D22A551B961AAFD8C558750FC5B6FFAFACDDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateLatest("Resuming");
		AgentControls_UpdateLatest_m28F275819D2B6F0C804AECDED6FFC261693C5D70(__this, _stringLiteralB86D22A551B961AAFD8C558750FC5B6FFAFACDDC, NULL);
		// }
		return;
	}
}
// System.Void AgentControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentControls__ctor_mCD012773DCACC9272DAC55ECB529B19DEA93A6D8 (AgentControls_t3CCB75DC584A2561BFED900C02249FDA2C436E82* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TurnBasedManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_Awake_m9D041FB4E3FCFBDA90FF518AB07BF1E8C338960D (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnBasedManager_NpcNodeArrive_mF6D1D349908158BCCFF041AF26F9C71CD0CB9C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnBasedManager_PlayerNodeArrive_m1DE6901BD76FC966DEB9FA02B847F87BB53B3ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__7_0_mEEB088A0C6EF6C2C3C4AB706A7EE5B26269FF554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__7_1_m9F51D4BACD33013FFA6752EF47A1426BE8D57CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D3BB40C5EFF32A77A4AA24C2CC9389FB03667D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA386C11022F7A83C03D66206D18F9D73557A280A);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* G_B2_0 = NULL;
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* G_B2_1 = NULL;
	TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* G_B2_2 = NULL;
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* G_B1_0 = NULL;
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* G_B1_1 = NULL;
	TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* G_B1_2 = NULL;
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* G_B4_0 = NULL;
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* G_B4_1 = NULL;
	TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* G_B4_2 = NULL;
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* G_B3_0 = NULL;
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* G_B3_1 = NULL;
	TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* G_B3_2 = NULL;
	{
		// playerAgent = map.mapAgents.Find(a => a.agentType == 0);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___map_4;
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_1 = L_0->___mapAgents_17;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var);
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_2 = ((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var);
		U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A* L_4 = ((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_5 = (Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB*)il2cpp_codegen_object_new(Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m626B98099FAB18B7E93E3A17E48DBC5DD3A8511A(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__7_0_mEEB088A0C6EF6C2C3C4AB706A7EE5B26269FF554_RuntimeMethod_var), NULL);
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_6 = L_5;
		((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002b:
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_7;
		L_7 = List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE(G_B2_1, G_B2_0, List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE_RuntimeMethod_var);
		G_B2_2->___playerAgent_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___playerAgent_5), (void*)L_7);
		// playerAgent.OnNodeArrive += PlayerNodeArrive;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_8 = __this->___playerAgent_5;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_9 = (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)il2cpp_codegen_object_new(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		NodeHandlerBool__ctor_m08F394E8D1D081672D71FBE2F85F61AA94C0B2C5(L_9, __this, (intptr_t)((void*)TurnBasedManager_PlayerNodeArrive_m1DE6901BD76FC966DEB9FA02B847F87BB53B3ECC_RuntimeMethod_var), NULL);
		Agent_add_OnNodeArrive_mA06D994F366DE7555F61BABD9292EA32920F48D3(L_8, L_9, NULL);
		// playerAgent.SetCurrentNodeByName("startNode");
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_10 = __this->___playerAgent_5;
		Agent_SetCurrentNodeByName_m161C13A3D0D5EA15F68DF7B5A6332A0A56280604(L_10, _stringLiteralA386C11022F7A83C03D66206D18F9D73557A280A, NULL);
		// npcAgent = map.mapAgents.Find(a => a.agentType == 1);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_11 = __this->___map_4;
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_12 = L_11->___mapAgents_17;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var);
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_13 = ((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2;
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_14 = L_13;
		G_B3_0 = L_14;
		G_B3_1 = L_12;
		G_B3_2 = __this;
		if (L_14)
		{
			G_B4_0 = L_14;
			G_B4_1 = L_12;
			G_B4_2 = __this;
			goto IL_0087;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var);
		U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A* L_15 = ((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_16 = (Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB*)il2cpp_codegen_object_new(Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m626B98099FAB18B7E93E3A17E48DBC5DD3A8511A(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__7_1_m9F51D4BACD33013FFA6752EF47A1426BE8D57CF6_RuntimeMethod_var), NULL);
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_17 = L_16;
		((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2), (void*)L_17);
		G_B4_0 = L_17;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0087:
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_18;
		L_18 = List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE(G_B4_1, G_B4_0, List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE_RuntimeMethod_var);
		G_B4_2->___npcAgent_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___npcAgent_6), (void*)L_18);
		// npcAgent.SetCurrentNodeByName("npcNode");
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_19 = __this->___npcAgent_6;
		Agent_SetCurrentNodeByName_m161C13A3D0D5EA15F68DF7B5A6332A0A56280604(L_19, _stringLiteral9D3BB40C5EFF32A77A4AA24C2CC9389FB03667D2, NULL);
		// npcAgent.targetNode = GetRandomNpcTarget();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_20 = __this->___npcAgent_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_21;
		L_21 = TurnBasedManager_GetRandomNpcTarget_mE3F4EABAD646D4D2933B696261FCD94E9006C85A(__this, NULL);
		L_20->___targetNode_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___targetNode_8), (void*)L_21);
		// npcAgent.OnNodeArrive += NpcNodeArrive;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_22 = __this->___npcAgent_6;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_23 = (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)il2cpp_codegen_object_new(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		NodeHandlerBool__ctor_m08F394E8D1D081672D71FBE2F85F61AA94C0B2C5(L_23, __this, (intptr_t)((void*)TurnBasedManager_NpcNodeArrive_mF6D1D349908158BCCFF041AF26F9C71CD0CB9C68_RuntimeMethod_var), NULL);
		Agent_add_OnNodeArrive_mA06D994F366DE7555F61BABD9292EA32920F48D3(L_22, L_23, NULL);
		// UpdateNpcStatus();
		TurnBasedManager_UpdateNpcStatus_mDAFAF2A6E24C05BD054A38153F4F352EEBF738CC(__this, NULL);
		// }
		return;
	}
}
// System.Void TurnBasedManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_Update_m89ABB432931E49DE00E7A0FA7C49E7CDFD7E7F83 (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	{
		// if (Input.GetMouseButtonDown(0) && isPlayerTurn) {
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		bool L_1 = __this->___isPlayerTurn_8;
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
		L_4 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_2, L_3, NULL);
		// if (Physics.Raycast(ray, out hit, maxDistance)) {
		float L_5 = __this->___maxDistance_9;
		bool L_6;
		L_6 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_4, (&V_0), L_5, NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// Node hitNode = hit.transform.GetComponent<Node>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_8;
		L_8 = Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5(L_7, Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var);
		V_1 = L_8;
		// if (hitNode != null)
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// playerAgent.targetNode = hitNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_11 = __this->___playerAgent_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_12 = V_1;
		L_11->___targetNode_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___targetNode_8), (void*)L_12);
		// UpdatePlayerStatus();
		TurnBasedManager_UpdatePlayerStatus_m64E31B5CE226AFA895D90FF131D39420A6822E61(__this, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void TurnBasedManager::UpdatePlayerStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_UpdatePlayerStatus_m64E31B5CE226AFA895D90FF131D39420A6822E61 (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m9071239DD22F91636F03EE2635D7AF8277967153_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_2 = NULL;
	{
		// Node currentNode = playerAgent.currentNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___playerAgent_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = L_0->___currentNode_6;
		// Node targetNode = playerAgent.targetNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___playerAgent_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = L_2->___targetNode_8;
		// map.ClearRouteHighlight();
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_4 = __this->___map_4;
		Map_ClearRouteHighlight_m865404158840B4CBE2EC5D58DB00AF0743CED079(L_4, NULL);
		// Path[] routes = currentNode.GetComponent<Node>().GetPaths();
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5;
		L_5 = Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5(L_1, Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_6;
		L_6 = Node_GetPaths_m57C64AE4B5D9C93E9F3C4A3B766165A271DB153C(L_5, NULL);
		V_0 = L_6;
		// for (int i=0; i < routes.Length; i++)
		V_1 = 0;
		goto IL_0067;
	}

IL_0031:
	{
		// List<Node> route = Pathfinding.FindRoute(routes[i].GetComponent<Path>().fromNode, routes[i].GetComponent<Path>().toNode, playerAgent);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_11;
		L_11 = Component_GetComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m9071239DD22F91636F03EE2635D7AF8277967153(L_10, Component_GetComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m9071239DD22F91636F03EE2635D7AF8277967153_RuntimeMethod_var);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_12 = L_11->___fromNode_4;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_17;
		L_17 = Component_GetComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m9071239DD22F91636F03EE2635D7AF8277967153(L_16, Component_GetComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m9071239DD22F91636F03EE2635D7AF8277967153_RuntimeMethod_var);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_18 = L_17->___toNode_5;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_19 = __this->___playerAgent_5;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_20;
		L_20 = Pathfinding_FindRoute_m2934C1CD03C8D449CCC6F249BFA08E8DCA440FCE(L_12, L_18, L_19, NULL);
		V_2 = L_20;
		// map.HighlightRoute(route);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_21 = __this->___map_4;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_22 = V_2;
		Map_HighlightRoute_m3640E740EF42ED3E08D3D3C7BFE08A64A4593890(L_21, L_22, NULL);
		// for (int i=0; i < routes.Length; i++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0067:
	{
		// for (int i=0; i < routes.Length; i++)
		int32_t L_24 = V_1;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TurnBasedManager::UpdateNpcStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_UpdateNpcStatus_mDAFAF2A6E24C05BD054A38153F4F352EEBF738CC (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_0 = NULL;
	{
		// Node currentNode = npcAgent.currentNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___npcAgent_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = L_0->___currentNode_6;
		// Node targetNode = npcAgent.targetNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___npcAgent_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = L_2->___targetNode_8;
		V_0 = L_3;
		// List<Node> route = Pathfinding.FindRoute(currentNode, targetNode, npcAgent);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = V_0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_5 = __this->___npcAgent_6;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_6;
		L_6 = Pathfinding_FindRoute_m2934C1CD03C8D449CCC6F249BFA08E8DCA440FCE(L_1, L_4, L_5, NULL);
		// }
		return;
	}
}
// JSNodeMap.Node TurnBasedManager::GetRandomNpcTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* TurnBasedManager_GetRandomNpcTarget_mE3F4EABAD646D4D2933B696261FCD94E9006C85A (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m81BBF48063C93D68EBDEE6E6D85399E06E4FD2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_0 = NULL;
	{
		// List<Node> allNodes = new List<Node>(map.mapNodes);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___map_4;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_1 = L_0->___mapNodes_16;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_2 = (List_1_t655259B818E9860056FF46909A95E99467EDA337*)il2cpp_codegen_object_new(List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		List_1__ctor_m81BBF48063C93D68EBDEE6E6D85399E06E4FD2EC(L_2, L_1, List_1__ctor_m81BBF48063C93D68EBDEE6E6D85399E06E4FD2EC_RuntimeMethod_var);
		V_0 = L_2;
		// allNodes.Remove(npcAgent.currentNode);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_3 = V_0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_4 = __this->___npcAgent_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = L_4->___currentNode_6;
		bool L_6;
		L_6 = List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8(L_3, L_5, List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8_RuntimeMethod_var);
		// return allNodes[Random.Range(0, allNodes.Count - 1)];
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_7 = V_0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_8 = V_0;
		int32_t L_9;
		L_9 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_8, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		int32_t L_10;
		L_10 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_11;
		L_11 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_7, L_10, List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void TurnBasedManager::PlayerNodeArrive(JSNodeMap.Node,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_PlayerNodeArrive_m1DE6901BD76FC966DEB9FA02B847F87BB53B3ECC (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69936F262B12784D1F22116C4C46651677C0B697);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB358AC4079DAD46C2E537571A3FD79F34C90FD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTurn++;
		int32_t L_0 = __this->___currentTurn_7;
		__this->___currentTurn_7 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// GameObject.Find("turns").GetComponent<TextMeshProUGUI>().text = "TURNS: " + currentTurn;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral69936F262B12784D1F22116C4C46651677C0B697, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2;
		L_2 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_1, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		int32_t* L_3 = (&__this->___currentTurn_7);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBB358AC4079DAD46C2E537571A3FD79F34C90FD3, L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		// playerAgent.currentNode.HidePaths();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_6 = __this->___playerAgent_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_7 = L_6->___currentNode_6;
		Node_HidePaths_mB214F8C5113769A3EDFE95624B550B469314DDCE(L_7, NULL);
		// if (target)
		bool L_8 = ___target1;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// playerAgent.targetNode = null;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_9 = __this->___playerAgent_5;
		L_9->___targetNode_8 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___targetNode_8), (void*)(Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL);
	}

IL_0056:
	{
		// CheckBattleConditions();
		TurnBasedManager_CheckBattleConditions_m27FBC47125DC477C4817EDC14DFDBF8BF3F79E69(__this, NULL);
		// UpdatePlayerStatus();
		TurnBasedManager_UpdatePlayerStatus_m64E31B5CE226AFA895D90FF131D39420A6822E61(__this, NULL);
		// npcAgent.MoveToTarget(npcAgent.targetNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_10 = __this->___npcAgent_6;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_11 = __this->___npcAgent_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_12 = L_11->___targetNode_8;
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(L_10, L_12, NULL);
		// int count = playerAgent.currentNode.DeadEnd();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_13 = __this->___playerAgent_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = L_13->___currentNode_6;
		int32_t L_15;
		L_15 = Node_DeadEnd_m29C262C25A85088E6FA7E12212C684297A6445E6(L_14, NULL);
		// if (count <= 0)
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		// loseScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___loseScreen_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void TurnBasedManager::NpcNodeArrive(JSNodeMap.Node,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_NpcNodeArrive_mF6D1D349908158BCCFF041AF26F9C71CD0CB9C68 (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral363FAA193D467B8EB790C44C108C4DE7BA71E890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2660CCEC3C01D9B8235D4C3B8BA229A7DC5082E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"NPC arrive {node.nodeName}");
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___node0;
		String_t* L_1 = L_0->___nodeName_8;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC2660CCEC3C01D9B8235D4C3B8BA229A7DC5082E, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// currentTurn++;
		int32_t L_3 = __this->___currentTurn_7;
		__this->___currentTurn_7 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// if (target)
		bool L_4 = ___target1;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// Debug.Log("NPC reached target. Selecting new destination.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral363FAA193D467B8EB790C44C108C4DE7BA71E890, NULL);
		// npcAgent.targetNode = GetRandomNpcTarget();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_5 = __this->___npcAgent_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_6;
		L_6 = TurnBasedManager_GetRandomNpcTarget_mE3F4EABAD646D4D2933B696261FCD94E9006C85A(__this, NULL);
		L_5->___targetNode_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___targetNode_8), (void*)L_6);
	}

IL_0041:
	{
		// CheckBattleConditions();
		TurnBasedManager_CheckBattleConditions_m27FBC47125DC477C4817EDC14DFDBF8BF3F79E69(__this, NULL);
		// isPlayerTurn = true;
		__this->___isPlayerTurn_8 = (bool)1;
		// UpdatePlayerStatus();
		TurnBasedManager_UpdatePlayerStatus_m64E31B5CE226AFA895D90FF131D39420A6822E61(__this, NULL);
		// UpdateNpcStatus();
		TurnBasedManager_UpdateNpcStatus_mDAFAF2A6E24C05BD054A38153F4F352EEBF738CC(__this, NULL);
		// }
		return;
	}
}
// System.Void TurnBasedManager::CheckBattleConditions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_CheckBattleConditions_m27FBC47125DC477C4817EDC14DFDBF8BF3F79E69 (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerAgent.currentNode == npcAgent.currentNode)
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___playerAgent_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = L_0->___currentNode_6;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___npcAgent_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = L_2->___currentNode_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// loseScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___loseScreen_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void TurnBasedManager::ProcessNextTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_ProcessNextTurn_m4C9EDD2648E7C190D10329DE8DA49E10AAB488CC (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	{
		// isPlayerTurn = false;
		__this->___isPlayerTurn_8 = (bool)0;
		// playerAgent.doMove = true;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___playerAgent_5;
		L_0->___doMove_12 = (bool)1;
		// playerAgent.MoveToTarget(playerAgent.targetNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1 = __this->___playerAgent_5;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___playerAgent_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = L_2->___targetNode_8;
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void TurnBasedManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager_Reset_m9584DF4283778CCC94A059919A2D700177B6921B (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_1, NULL);
		// }
		return;
	}
}
// System.Void TurnBasedManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedManager__ctor_mA4662B08ACD0A9044E4A56D9E7D3B716BD1BF590 (TurnBasedManager_tCEE105B7E230B03CB10095447C871F33E9CC765E* __this, const RuntimeMethod* method) 
{
	{
		// private bool isPlayerTurn = true;
		__this->___isPlayerTurn_8 = (bool)1;
		// private float maxDistance = 1000f;
		__this->___maxDistance_9 = (1000.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TurnBasedManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFBF6DF2CD9069D637ACE090F325FDFBF54757A7F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A* L_0 = (U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A*)il2cpp_codegen_object_new(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2D53B30E12D532EE2F4BFDE960FFBA27F84EE8B9(L_0, NULL);
		((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TurnBasedManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D53B30E12D532EE2F4BFDE960FFBA27F84EE8B9 (U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TurnBasedManager/<>c::<Awake>b__7_0(JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__7_0_mEEB088A0C6EF6C2C3C4AB706A7EE5B26269FF554 (U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___a0, const RuntimeMethod* method) 
{
	{
		// playerAgent = map.mapAgents.Find(a => a.agentType == 0);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = ___a0;
		int32_t L_1 = L_0->___agentType_4;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TurnBasedManager/<>c::<Awake>b__7_1(JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__7_1_m9F51D4BACD33013FFA6752EF47A1426BE8D57CF6 (U3CU3Ec_t74D62E9FAED383E6AA54493958AEE46D2DFDC40A* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___a0, const RuntimeMethod* method) 
{
	{
		// npcAgent = map.mapAgents.Find(a => a.agentType == 1);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = ___a0;
		int32_t L_1 = L_0->___agentType_4;
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
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
// System.Void ClickMove::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickMove_Awake_m0CD4A91575BF6AAFE992E6775566917852016D89 (ClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<Agent>();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0;
		L_0 = Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5(__this, Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		__this->___agent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ClickMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickMove_Update_mD36B715E737762EA64BF053628455B47F618E5D4 (ClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	{
		// if (Input.GetMouseButtonDown(0) && ! agent.isMoving && active) {
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1 = __this->___agent_4;
		bool L_2 = L_1->___isMoving_11;
		if (L_2)
		{
			goto IL_005d;
		}
	}
	{
		bool L_3 = __this->___active_5;
		if (!L_3)
		{
			goto IL_005d;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_4, L_5, NULL);
		// if (Physics.Raycast(ray, out hit, maxDistance)) {
		float L_7 = __this->___maxDistance_6;
		bool L_8;
		L_8 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_6, (&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// Node hitNode = hit.transform.GetComponent<Node>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_10;
		L_10 = Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5(L_9, Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var);
		V_1 = L_10;
		// if (hitNode != null) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		// agent.MoveToTarget(hitNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_13 = __this->___agent_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = V_1;
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(L_13, L_14, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void ClickMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickMove__ctor_m931091672596F135E6332A1F672D9C51D3804180 (ClickMove_t6B86FD0FEB4B396B04DE2A374E1211313E35D83C* __this, const RuntimeMethod* method) 
{
	{
		// public float maxDistance = 1000f;
		__this->___maxDistance_6 = (1000.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DirectMove::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectMove_Awake_m79CD01B3C5DB659E4D1FD83EBC2E7E02F57E9FB5 (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<Agent>();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0;
		L_0 = Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5(__this, Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		__this->___agent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void DirectMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectMove_Update_m9B78C427DDA6D62254C8D8CEC3DAB2AE342E1AF2 (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_2 = NULL;
	float V_3 = 0.0f;
	Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_5 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	{
		// if (! active || agent.isMoving) {
		bool L_0 = __this->___active_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1 = __this->___agent_4;
		bool L_2 = L_1->___isMoving_11;
		if (!L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (inputCylce > 0f) {
		float L_3 = __this->___inputCylce_11;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// inputCylce -= Time.deltaTime;
		float L_4 = __this->___inputCylce_11;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___inputCylce_11 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// return;
		return;
	}

IL_0036:
	{
		// inputCylce = inputWait;
		float L_6 = __this->___inputWait_10;
		__this->___inputCylce_11 = L_6;
		// Vector2 move = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
		float L_7;
		L_7 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_8;
		L_8 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_7, L_8, NULL);
		// if (Mathf.Abs(move.x) < deadZone && Mathf.Abs(move.y) < deadZone) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = fabsf(L_10);
		float L_12 = __this->___deadZone_7;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_008f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		float L_15;
		L_15 = fabsf(L_14);
		float L_16 = __this->___deadZone_7;
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_008f;
		}
	}
	{
		// currentInputTime = 0f;
		__this->___currentInputTime_9 = (0.0f);
		// return;
		return;
	}

IL_008f:
	{
		// currentInputTime += Time.deltaTime;
		float L_17 = __this->___currentInputTime_9;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___currentInputTime_9 = ((float)il2cpp_codegen_add(L_17, L_18));
		// if (currentInputTime > inputDelay) {
		float L_19 = __this->___currentInputTime_9;
		float L_20 = __this->___inputDelay_8;
		if ((!(((float)L_19) > ((float)L_20))))
		{
			goto IL_00bc;
		}
	}
	{
		// currentInputTime = 0f;
		__this->___currentInputTime_9 = (0.0f);
		goto IL_00bd;
	}

IL_00bc:
	{
		// return;
		return;
	}

IL_00bd:
	{
		// float moveAngle = GetAngleV2(Vector2.zero, move);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		float L_23;
		L_23 = DirectMove_GetAngleV2_mFFC42A278033B8493A115ED91A6C53450A69F17E(__this, L_21, L_22, NULL);
		V_1 = L_23;
		// Node targetNode = null;
		V_2 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		// float closestAngleDiff = 500f;
		V_3 = (500.0f);
		// foreach (Node node in Pathfinding.GetNeighbors(agent.currentNode, agent)) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_24 = __this->___agent_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25 = L_24->___currentNode_6;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_26 = __this->___agent_4;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_27;
		L_27 = Pathfinding_GetNeighbors_mB8771D1E02E0B8586D5831D362B3C1B80671985C(L_25, L_26, NULL);
		Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 L_28;
		L_28 = List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA(L_27, List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		V_4 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0156:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2((&V_4), Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014b_1;
			}

IL_00f1_1:
			{
				// foreach (Node node in Pathfinding.GetNeighbors(agent.currentNode, agent)) {
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_29;
				L_29 = Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_inline((&V_4), Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
				V_5 = L_29;
				// fromPos = agent.currentNode.transform.position;
				Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_30 = __this->___agent_4;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_31 = L_30->___currentNode_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
				L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
				V_6 = L_33;
				// toPos = node.transform.position;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_34 = V_5;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
				L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
				L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
				V_7 = L_36;
				// float pathAngle = GetAngleV3(fromPos, toPos);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_7;
				float L_39;
				L_39 = DirectMove_GetAngleV3_m1C44DE449260CE9F0C45841692B51852F43298D5(__this, L_37, L_38, NULL);
				V_8 = L_39;
				// float pathAngleDiff = GetAngleDiff(moveAngle, pathAngle);
				float L_40 = V_1;
				float L_41 = V_8;
				float L_42;
				L_42 = DirectMove_GetAngleDiff_m6BD3B12429EB6D78947AC28CB1167EC14F4CDF72(__this, L_40, L_41, NULL);
				V_9 = L_42;
				// if (pathAngleDiff >= detectionAngle) {
				float L_43 = V_9;
				float L_44 = __this->___detectionAngle_6;
				if ((((float)L_43) >= ((float)L_44)))
				{
					goto IL_014b_1;
				}
			}
			{
				// if (pathAngleDiff < closestAngleDiff) {
				float L_45 = V_9;
				float L_46 = V_3;
				if ((!(((float)L_45) < ((float)L_46))))
				{
					goto IL_014b_1;
				}
			}
			{
				// closestAngleDiff = pathAngleDiff;
				float L_47 = V_9;
				V_3 = L_47;
				// targetNode = node;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_48 = V_5;
				V_2 = L_48;
			}

IL_014b_1:
			{
				// foreach (Node node in Pathfinding.GetNeighbors(agent.currentNode, agent)) {
				bool L_49;
				L_49 = Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534((&V_4), Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_0164;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0164:
	{
		// if (closestAngleDiff > detectionAngle) {
		float L_50 = V_3;
		float L_51 = __this->___detectionAngle_6;
		if ((!(((float)L_50) > ((float)L_51))))
		{
			goto IL_0179;
		}
	}
	{
		// currentInputTime = 1f / 20f;
		__this->___currentInputTime_9 = (0.0500000007f);
		return;
	}

IL_0179:
	{
		// if (targetNode != null) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_52 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_52, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_53)
		{
			goto IL_018e;
		}
	}
	{
		// agent.MoveToTarget(targetNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_54 = __this->___agent_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_55 = V_2;
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(L_54, L_55, NULL);
	}

IL_018e:
	{
		// }
		return;
	}
}
// System.Single DirectMove::GetAngleV2(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DirectMove_GetAngleV2_mFFC42A278033B8493A115ED91A6C53450A69F17E (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point21, const RuntimeMethod* method) 
{
	{
		// point2 -= point1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___point21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___point10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_0, L_1, NULL);
		___point21 = L_2;
		// point1 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		___point10 = L_3;
		// return Mathf.DeltaAngle(Mathf.Atan2(point1.x, point1.y) * Mathf.Rad2Deg, Mathf.Atan2(point2.x, point2.y) * Mathf.Rad2Deg);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___point10;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___point10;
		float L_7 = L_6.___y_1;
		float L_8;
		L_8 = atan2f(L_5, L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___point21;
		float L_10 = L_9.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___point21;
		float L_12 = L_11.___y_1;
		float L_13;
		L_13 = atan2f(L_10, L_12);
		float L_14;
		L_14 = Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline(((float)il2cpp_codegen_multiply(L_8, (57.2957802f))), ((float)il2cpp_codegen_multiply(L_13, (57.2957802f))), NULL);
		return L_14;
	}
}
// System.Single DirectMove::GetAngleV3(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DirectMove_GetAngleV3_m1C44DE449260CE9F0C45841692B51852F43298D5 (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point21, const RuntimeMethod* method) 
{
	{
		// point2 -= point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___point21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___point10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		___point21 = L_2;
		// point1 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		___point10 = L_3;
		// if (moveRef == MovementReference.Camera) {
		int32_t L_4 = __this->___moveRef_12;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		// point2 = Camera.main.WorldToViewportPoint(point2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___point21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_5, L_6, NULL);
		___point21 = L_7;
		// point1 = Camera.main.WorldToViewportPoint(point1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___point10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_8, L_9, NULL);
		___point10 = L_10;
		// return GetAngleV2(new Vector2(point1.x, point1.y), new Vector2(point2.x, point2.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___point10;
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___point10;
		float L_14 = L_13.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_12, L_14, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___point21;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___point21;
		float L_19 = L_18.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), L_17, L_19, /*hidden argument*/NULL);
		float L_21;
		L_21 = DirectMove_GetAngleV2_mFFC42A278033B8493A115ED91A6C53450A69F17E(__this, L_15, L_20, NULL);
		return L_21;
	}

IL_005c:
	{
		// return Mathf.DeltaAngle(Mathf.Atan2(point1.x, point1.z) * Mathf.Rad2Deg, Mathf.Atan2(point2.x, point2.z) * Mathf.Rad2Deg);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___point10;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___point10;
		float L_25 = L_24.___z_4;
		float L_26;
		L_26 = atan2f(L_23, L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___point21;
		float L_28 = L_27.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___point21;
		float L_30 = L_29.___z_4;
		float L_31;
		L_31 = atan2f(L_28, L_30);
		float L_32;
		L_32 = Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline(((float)il2cpp_codegen_multiply(L_26, (57.2957802f))), ((float)il2cpp_codegen_multiply(L_31, (57.2957802f))), NULL);
		return L_32;
	}
}
// System.Single DirectMove::GetAngleDiff(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DirectMove_GetAngleDiff_m6BD3B12429EB6D78947AC28CB1167EC14F4CDF72 (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, float ___angle10, float ___angle21, const RuntimeMethod* method) 
{
	{
		// float angle = 180f - Mathf.Abs(Mathf.Abs(angle1 - angle2) - 180f);
		float L_0 = ___angle10;
		float L_1 = ___angle21;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3;
		L_3 = fabsf(((float)il2cpp_codegen_subtract(L_2, (180.0f))));
		// return (angle + 360f) % 360f;
		return (fmodf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract((180.0f), L_3)), (360.0f))), (360.0f)));
	}
}
// System.Void DirectMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectMove__ctor_m5575D43E534166520FB1C940A986D86D760C5586 (DirectMove_tA066E06BD8D8D9B9381C7477D4237B367642142C* __this, const RuntimeMethod* method) 
{
	{
		// public float detectionAngle = 45f;
		__this->___detectionAngle_6 = (45.0f);
		// public float deadZone = 0.1f;
		__this->___deadZone_7 = (0.100000001f);
		// public float inputDelay = 0.02f;
		__this->___inputDelay_8 = (0.0199999996f);
		// private float inputWait = 0.01f;
		__this->___inputWait_10 = (0.00999999978f);
		// public MovementReference moveRef = MovementReference.Camera;
		__this->___moveRef_12 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Patrol::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Patrol_Awake_m5DFC69B0CFE7564008AFF02CC86316401661718A (Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Patrol_NextWaypoint_mF00CC20045FBE6631AF9DE2D2A6BA93D0C1C77B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<Agent>();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0;
		L_0 = Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5(__this, Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		__this->___agent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_4), (void*)L_0);
		// agent.OnCannotReach += NextWaypoint;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1 = __this->___agent_4;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)il2cpp_codegen_object_new(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03(L_2, __this, (intptr_t)((void*)Patrol_NextWaypoint_mF00CC20045FBE6631AF9DE2D2A6BA93D0C1C77B4_RuntimeMethod_var), NULL);
		Agent_add_OnCannotReach_m95879A965B269E6A889ED72629CAF04C88580460(L_1, L_2, NULL);
		// agent.OnMoveEnd += NextWaypoint;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_3 = __this->___agent_4;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_4 = (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)il2cpp_codegen_object_new(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03(L_4, __this, (intptr_t)((void*)Patrol_NextWaypoint_mF00CC20045FBE6631AF9DE2D2A6BA93D0C1C77B4_RuntimeMethod_var), NULL);
		Agent_add_OnMoveEnd_m643C7590744FB9B365AA99FB1C3EF7BB52A6A528(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Patrol::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Patrol_Start_m0CB2D85E786046800B917EBA01A3E3D10AFF6C87 (Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NextWaypoint(waypoints[currentPointIndex]);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_0 = __this->___waypoints_6;
		int32_t L_1 = __this->___currentPointIndex_7;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2;
		L_2 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_0, L_1, List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		Patrol_NextWaypoint_mF00CC20045FBE6631AF9DE2D2A6BA93D0C1C77B4(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Patrol::NextWaypoint(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Patrol_NextWaypoint_mF00CC20045FBE6631AF9DE2D2A6BA93D0C1C77B4 (Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (active) {
		bool L_0 = __this->___active_5;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// if (currentPointIndex >= waypoints.Count) {
		int32_t L_1 = __this->___currentPointIndex_7;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_2 = __this->___waypoints_6;
		int32_t L_3;
		L_3 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_2, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0022;
		}
	}
	{
		// currentPointIndex = 0;
		__this->___currentPointIndex_7 = 0;
	}

IL_0022:
	{
		// agent.MoveToTarget(waypoints[currentPointIndex]);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_4 = __this->___agent_4;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_5 = __this->___waypoints_6;
		int32_t L_6 = __this->___currentPointIndex_7;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_7;
		L_7 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_5, L_6, List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(L_4, L_7, NULL);
		// currentPointIndex++;
		int32_t L_8 = __this->___currentPointIndex_7;
		__this->___currentPointIndex_7 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Patrol::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Patrol__ctor_mD411CF73FEB63B880E2F283E64B21978A1A065B4 (Patrol_t37657AD6DBC5D6D574DB66CF8D2A86135029A697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Node> waypoints = new List<Node>();
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_0 = (List_1_t655259B818E9860056FF46909A95E99467EDA337*)il2cpp_codegen_object_new(List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203(L_0, List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var);
		__this->___waypoints_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Wander::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wander_Awake_mD13FACD4EA238B26D328E08886DC2A63309B39F4 (Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wander_FindNewNode_m613196EBD1EBBDC9759A3E263EEB3165713B7265_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<Agent>();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0;
		L_0 = Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5(__this, Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		__this->___agent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_4), (void*)L_0);
		// agent.OnCannotReach += FindNewNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1 = __this->___agent_4;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)il2cpp_codegen_object_new(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03(L_2, __this, (intptr_t)((void*)Wander_FindNewNode_m613196EBD1EBBDC9759A3E263EEB3165713B7265_RuntimeMethod_var), NULL);
		Agent_add_OnCannotReach_m95879A965B269E6A889ED72629CAF04C88580460(L_1, L_2, NULL);
		// agent.OnMoveEnd += FindNewNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_3 = __this->___agent_4;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_4 = (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)il2cpp_codegen_object_new(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03(L_4, __this, (intptr_t)((void*)Wander_FindNewNode_m613196EBD1EBBDC9759A3E263EEB3165713B7265_RuntimeMethod_var), NULL);
		Agent_add_OnMoveEnd_m643C7590744FB9B365AA99FB1C3EF7BB52A6A528(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Wander::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wander_Start_m563E5AFF3A71EFB614632F77EE877205651E209E (Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* __this, const RuntimeMethod* method) 
{
	{
		// FindNewNode(null);
		Wander_FindNewNode_m613196EBD1EBBDC9759A3E263EEB3165713B7265(__this, (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL, NULL);
		// }
		return;
	}
}
// JSNodeMap.Node Wander::GetRandomNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Wander_GetRandomNode_m849C8F8F455AD37DFF9C119B4193A419B11092AF (Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return agent.nodeMap.mapNodes[Random.Range(0, agent.nodeMap.mapNodes.Count)];
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___agent_4;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_1 = L_0->___nodeMap_22;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_2 = L_1->___mapNodes_16;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_3 = __this->___agent_4;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_4 = L_3->___nodeMap_22;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_5 = L_4->___mapNodes_16;
		int32_t L_6;
		L_6 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_5, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_6, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_8;
		L_8 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_2, L_7, List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Wander::FindNewNode(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wander_FindNewNode_m613196EBD1EBBDC9759A3E263EEB3165713B7265 (Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	{
		// if (active) {
		bool L_0 = __this->___active_5;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// randomNode = GetRandomNode();
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1;
		L_1 = Wander_GetRandomNode_m849C8F8F455AD37DFF9C119B4193A419B11092AF(__this, NULL);
		__this->___randomNode_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomNode_6), (void*)L_1);
		// agent.MoveToTarget(randomNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___agent_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = __this->___randomNode_6;
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(L_2, L_3, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Wander::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wander__ctor_mC3D1C5EB03A0FF0BB9A609A1E500C0371FBA75CE (Wander_t16D8853FE159F6274D7E938344FCF92D24D69E90* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_m99884706C63F385A5C536C8837C14A38D1B6D78D (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_mFE010EED058E2CE97530268AC64A2C071D5F853A (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = new Vector3(target.transform.position.x, transform.position.y, target.transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___target_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_4, L_7, L_11, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_12, NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m113CC547D419EF599BC487F0F44B06BB2D4EE11B (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PathLight::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_Awake_m957EF08FE5E24EAFBFB599CAF4A6142C516014AB (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3258C5A7A54E2BAD994DBC96C02ED9395DF90951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathLight_NpcNodeArrive_m386D0B00F9F897E302D5C055AEB7B878277877EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathLight_PlayerNodeArrive_mB0F2648948F2BA9A8F52E5233F023540D4770C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathLight_ProcessNextTurn_m7C6FC1733FF753037C1C512C40F0B1AFB65F6CBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__11_0_m1B20D624C8A0C4CF405E885893CF368E79738990_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__11_1_mB6C7FDABEB717DB21C9C3111ACFF5EA4A1D87EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BC2DE4D1965473D58200363E37A5A152D10F1C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7788843796112A3333A86F2131B749DCE62B516);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* G_B4_0 = NULL;
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* G_B4_1 = NULL;
	PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* G_B4_2 = NULL;
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* G_B3_0 = NULL;
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* G_B3_1 = NULL;
	PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* G_B3_2 = NULL;
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* G_B6_0 = NULL;
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* G_B6_1 = NULL;
	PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* G_B6_2 = NULL;
	Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* G_B5_0 = NULL;
	List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* G_B5_1 = NULL;
	PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* G_B5_2 = NULL;
	{
		// btnNextTurn.onClick.AddListener(ProcessNextTurn);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnNextTurn_4;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)PathLight_ProcessNextTurn_m7C6FC1733FF753037C1C512C40F0B1AFB65F6CBB_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// if (map.mapAgents.Count < 2)
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_3 = __this->___map_9;
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_4 = L_3->___mapAgents_17;
		int32_t L_5;
		L_5 = List_1_get_Count_m3258C5A7A54E2BAD994DBC96C02ED9395DF90951_inline(L_4, List_1_get_Count_m3258C5A7A54E2BAD994DBC96C02ED9395DF90951_RuntimeMethod_var);
		if ((((int32_t)L_5) >= ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogError("Agents not properly assigned. Player agent type should be in first slot and NPC in second.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral0BC2DE4D1965473D58200363E37A5A152D10F1C5, NULL);
	}

IL_0039:
	{
		// playerAgent = map.mapAgents.Find(a => a.agentType == 0);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_6 = __this->___map_9;
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_7 = L_6->___mapAgents_17;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_8 = ((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1;
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		G_B3_2 = __this;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			G_B4_2 = __this;
			goto IL_0064;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* L_10 = ((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_11 = (Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB*)il2cpp_codegen_object_new(Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m626B98099FAB18B7E93E3A17E48DBC5DD3A8511A(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__11_0_m1B20D624C8A0C4CF405E885893CF368E79738990_RuntimeMethod_var), NULL);
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_12 = L_11;
		((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0064:
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_13;
		L_13 = List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE(G_B4_1, G_B4_0, List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE_RuntimeMethod_var);
		G_B4_2->___playerAgent_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___playerAgent_10), (void*)L_13);
		// playerAgent.OnNodeArrive += PlayerNodeArrive;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_14 = __this->___playerAgent_10;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_15 = (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)il2cpp_codegen_object_new(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		NodeHandlerBool__ctor_m08F394E8D1D081672D71FBE2F85F61AA94C0B2C5(L_15, __this, (intptr_t)((void*)PathLight_PlayerNodeArrive_mB0F2648948F2BA9A8F52E5233F023540D4770C21_RuntimeMethod_var), NULL);
		Agent_add_OnNodeArrive_mA06D994F366DE7555F61BABD9292EA32920F48D3(L_14, L_15, NULL);
		// playerAgent.doMove = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_16 = __this->___playerAgent_10;
		L_16->___doMove_12 = (bool)0;
		// npcAgent = map.mapAgents.Find(a => a.agentType == 1);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_17 = __this->___map_9;
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_18 = L_17->___mapAgents_17;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_19 = ((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_2;
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_20 = L_19;
		G_B5_0 = L_20;
		G_B5_1 = L_18;
		G_B5_2 = __this;
		if (L_20)
		{
			G_B6_0 = L_20;
			G_B6_1 = L_18;
			G_B6_2 = __this;
			goto IL_00bc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* L_21 = ((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_22 = (Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB*)il2cpp_codegen_object_new(Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m626B98099FAB18B7E93E3A17E48DBC5DD3A8511A(L_22, L_21, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__11_1_mB6C7FDABEB717DB21C9C3111ACFF5EA4A1D87EE2_RuntimeMethod_var), NULL);
		Predicate_1_t8F17D90A2C0A7A44D39F49FEC42DE95A403278CB* L_23 = L_22;
		((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_2 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_2), (void*)L_23);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_00bc:
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_24;
		L_24 = List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE(G_B6_1, G_B6_0, List_1_Find_mD36982A2F8CDF35631313805A8B172F80A25F6FE_RuntimeMethod_var);
		G_B6_2->___npcAgent_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_2->___npcAgent_11), (void*)L_24);
		// npcAgent.SetCurrentNodeByName("C3");
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_25 = __this->___npcAgent_11;
		Agent_SetCurrentNodeByName_m161C13A3D0D5EA15F68DF7B5A6332A0A56280604(L_25, _stringLiteralD7788843796112A3333A86F2131B749DCE62B516, NULL);
		// npcAgent.targetNode = GetRandomNpcTarget();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_26 = __this->___npcAgent_11;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_27;
		L_27 = PathLight_GetRandomNpcTarget_m08D13D535FE9205C24A55BEBC880F2A2B71FDB6F(__this, NULL);
		L_26->___targetNode_8 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___targetNode_8), (void*)L_27);
		// npcAgent.OnNodeArrive += NpcNodeArrive;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_28 = __this->___npcAgent_11;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_29 = (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)il2cpp_codegen_object_new(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		NodeHandlerBool__ctor_m08F394E8D1D081672D71FBE2F85F61AA94C0B2C5(L_29, __this, (intptr_t)((void*)PathLight_NpcNodeArrive_m386D0B00F9F897E302D5C055AEB7B878277877EE_RuntimeMethod_var), NULL);
		Agent_add_OnNodeArrive_mA06D994F366DE7555F61BABD9292EA32920F48D3(L_28, L_29, NULL);
		// npcAgent.doMove = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_30 = __this->___npcAgent_11;
		L_30->___doMove_12 = (bool)0;
		// UpdateNpcStatus();
		PathLight_UpdateNpcStatus_mF603685753D2B4F07237955F0C058BCB73A1D05D(__this, NULL);
		// UpdateTurnStatus();
		PathLight_UpdateTurnStatus_m8D3593494C392E3A02F7E5C3E7C3CB51387C4ED2(__this, NULL);
		// }
		return;
	}
}
// System.Void PathLight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_Update_m0605D23C34A661B34BD8F042707416678A9F9546 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	{
		// if (Input.GetMouseButtonDown(0) && isPlayerTurn)
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		bool L_1 = __this->___isPlayerTurn_13;
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
		L_4 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_2, L_3, NULL);
		// if (Physics.Raycast(ray, out hit, maxDistance))
		float L_5 = __this->___maxDistance_14;
		bool L_6;
		L_6 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_4, (&V_0), L_5, NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// Node hitNode = hit.transform.GetComponent<Node>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_8;
		L_8 = Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5(L_7, Component_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m8B9B1382F0BF545EF7E860C97F1D0D06FC0E2EE5_RuntimeMethod_var);
		V_1 = L_8;
		// if (hitNode != null)
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// playerAgent.targetNode = hitNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_11 = __this->___playerAgent_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_12 = V_1;
		L_11->___targetNode_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___targetNode_8), (void*)L_12);
		// UpdatePlayerStatus();
		PathLight_UpdatePlayerStatus_m0932173E450452A6704986CD4EB8BD2295F1CC65(__this, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void PathLight::UpdatePlayerStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_UpdatePlayerStatus_m0932173E450452A6704986CD4EB8BD2295F1CC65 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisString_t_m6C821210389C1A9A9351F68924FE647577720BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdatePlayerStatusU3Eb__13_0_mFA6CDEB43043075E09AA576F2E02E7EA25799CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D838401D6756FD730C26B5688339920DAF9CE9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79FA64EDC378DF92501CD435758D9851CF694602);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC623FAF0357811C867BA686AA45673349089F969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3C1E5D14859B50C2329439E0A8D06675C69979);
		s_Il2CppMethodInitialized = true;
	}
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_0 = NULL;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_4 = NULL;
	Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* G_B3_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* G_B2_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B8_0 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B6_0 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B9_1 = NULL;
	{
		// Node currentNode = playerAgent.currentNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___playerAgent_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = L_0->___currentNode_6;
		V_0 = L_1;
		// Node targetNode = playerAgent.targetNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___playerAgent_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = L_2->___targetNode_8;
		V_1 = L_3;
		// map.ClearRouteHighlight();
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_4 = __this->___map_9;
		Map_ClearRouteHighlight_m865404158840B4CBE2EC5D58DB00AF0743CED079(L_4, NULL);
		// if (targetNode)
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (!L_6)
		{
			goto IL_0086;
		}
	}
	{
		// List<Node> route = Pathfinding.FindRoute(currentNode, targetNode, playerAgent);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_7 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_8 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_9 = __this->___playerAgent_10;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_10;
		L_10 = Pathfinding_FindRoute_m2934C1CD03C8D449CCC6F249BFA08E8DCA440FCE(L_7, L_8, L_9, NULL);
		V_4 = L_10;
		// targetText = targetNode.nodeName;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_11 = V_1;
		String_t* L_12 = L_11->___nodeName_8;
		V_2 = L_12;
		// routeText = string.Join(", ", route.Select(n => n.nodeName).ToList());
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_13 = V_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* L_14 = ((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_3;
		Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* L_15 = L_14;
		G_B2_0 = L_15;
		G_B2_1 = L_13;
		G_B2_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		if (L_15)
		{
			G_B3_0 = L_15;
			G_B3_1 = L_13;
			G_B3_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* L_16 = ((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* L_17 = (Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5*)il2cpp_codegen_object_new(Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5_il2cpp_TypeInfo_var);
		Func_2__ctor_m4CA1DD8251051AC861CF26891DC30EB12428FA5E(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3CUpdatePlayerStatusU3Eb__13_0_mFA6CDEB43043075E09AA576F2E02E7EA25799CBE_RuntimeMethod_var), NULL);
		Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* L_18 = L_17;
		((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_3), (void*)L_18);
		G_B3_0 = L_18;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0067:
	{
		RuntimeObject* L_19;
		L_19 = Enumerable_Select_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisString_t_m6C821210389C1A9A9351F68924FE647577720BFA(G_B3_1, G_B3_0, Enumerable_Select_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisString_t_m6C821210389C1A9A9351F68924FE647577720BFA_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20;
		L_20 = Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5(L_19, Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		String_t* L_21;
		L_21 = String_Join_m675422BC1927F19F7135C5211B45EE7AC9F7D632(G_B3_2, L_20, NULL);
		V_3 = L_21;
		// map.HighlightRoute(route);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_22 = __this->___map_9;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_23 = V_4;
		Map_HighlightRoute_m3640E740EF42ED3E08D3D3C7BFE08A64A4593890(L_22, L_23, NULL);
		goto IL_0092;
	}

IL_0086:
	{
		// targetText = "None";
		V_2 = _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
		// routeText = "No route";
		V_3 = _stringLiteral79FA64EDC378DF92501CD435758D9851CF694602;
	}

IL_0092:
	{
		// txtPlayerStatus.text = $"Current Node: {currentNode.nodeName}\nDestination Node: {targetText}\nRoute: {routeText}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_24 = __this->___txtPlayerStatus_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		ArrayElementTypeCheck (L_26, _stringLiteralC623FAF0357811C867BA686AA45673349089F969);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC623FAF0357811C867BA686AA45673349089F969);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_28 = V_0;
		String_t* L_29 = L_28->___nodeName_8;
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_27;
		ArrayElementTypeCheck (L_30, _stringLiteral3D838401D6756FD730C26B5688339920DAF9CE9B);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3D838401D6756FD730C26B5688339920DAF9CE9B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		String_t* L_32 = V_2;
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
		ArrayElementTypeCheck (L_33, _stringLiteralEB3C1E5D14859B50C2329439E0A8D06675C69979);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEB3C1E5D14859B50C2329439E0A8D06675C69979);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		String_t* L_35 = V_3;
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_35);
		String_t* L_36;
		L_36 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_34, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_36);
		// btnNextTurn.interactable = targetNode != null && currentNode != targetNode && isPlayerTurn;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = __this->___btnNextTurn_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_38 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = L_37;
		if (!L_39)
		{
			G_B8_0 = L_37;
			goto IL_00f1;
		}
	}
	{
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_40 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_41 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, L_41, NULL);
		G_B7_0 = G_B6_0;
		if (!L_42)
		{
			G_B8_0 = G_B6_0;
			goto IL_00f1;
		}
	}
	{
		bool L_43 = __this->___isPlayerTurn_13;
		G_B9_0 = ((int32_t)(L_43));
		G_B9_1 = G_B7_0;
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_00f2:
	{
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(G_B9_1, (bool)G_B9_0, NULL);
		// }
		return;
	}
}
// System.Void PathLight::UpdateNpcStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_UpdateNpcStatus_mF603685753D2B4F07237955F0C058BCB73A1D05D (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisString_t_m6C821210389C1A9A9351F68924FE647577720BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateNpcStatusU3Eb__14_0_m48AB85AE2B4688667C8210C055AEE140A4FDEC19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D838401D6756FD730C26B5688339920DAF9CE9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC623FAF0357811C867BA686AA45673349089F969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3C1E5D14859B50C2329439E0A8D06675C69979);
		s_Il2CppMethodInitialized = true;
	}
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_0 = NULL;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_2 = NULL;
	String_t* V_3 = NULL;
	Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* G_B2_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* G_B1_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	{
		// Node currentNode = npcAgent.currentNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___npcAgent_11;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = L_0->___currentNode_6;
		V_0 = L_1;
		// Node targetNode = npcAgent.targetNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___npcAgent_11;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = L_2->___targetNode_8;
		V_1 = L_3;
		// List<Node> route = Pathfinding.FindRoute(currentNode, targetNode, npcAgent);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_6 = __this->___npcAgent_11;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_7;
		L_7 = Pathfinding_FindRoute_m2934C1CD03C8D449CCC6F249BFA08E8DCA440FCE(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		// string routeText = string.Join(", ", route.Select(n => n.nodeName).ToList());
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_8 = V_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* L_9 = ((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_4;
		Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		G_B1_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			G_B2_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* L_11 = ((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* L_12 = (Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5*)il2cpp_codegen_object_new(Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5_il2cpp_TypeInfo_var);
		Func_2__ctor_m4CA1DD8251051AC861CF26891DC30EB12428FA5E(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CUpdateNpcStatusU3Eb__14_0_m48AB85AE2B4688667C8210C055AEE140A4FDEC19_RuntimeMethod_var), NULL);
		Func_2_t091E2A656E64091CA993B54CD44978B47061F3F5* L_13 = L_12;
		((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_4), (void*)L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_004b:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisString_t_m6C821210389C1A9A9351F68924FE647577720BFA(G_B2_1, G_B2_0, Enumerable_Select_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisString_t_m6C821210389C1A9A9351F68924FE647577720BFA_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15;
		L_15 = Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5(L_14, Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		String_t* L_16;
		L_16 = String_Join_m675422BC1927F19F7135C5211B45EE7AC9F7D632(G_B2_2, L_15, NULL);
		V_3 = L_16;
		// txtNpcStatus.text = $"Current Node: {currentNode.nodeName}\nDestination Node: {targetNode.nodeName}\nRoute: {routeText}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17 = __this->___txtNpcStatus_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		ArrayElementTypeCheck (L_19, _stringLiteralC623FAF0357811C867BA686AA45673349089F969);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC623FAF0357811C867BA686AA45673349089F969);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_21 = V_0;
		String_t* L_22 = L_21->___nodeName_8;
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_20;
		ArrayElementTypeCheck (L_23, _stringLiteral3D838401D6756FD730C26B5688339920DAF9CE9B);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3D838401D6756FD730C26B5688339920DAF9CE9B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25 = V_1;
		String_t* L_26 = L_25->___nodeName_8;
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_24;
		ArrayElementTypeCheck (L_27, _stringLiteralEB3C1E5D14859B50C2329439E0A8D06675C69979);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEB3C1E5D14859B50C2329439E0A8D06675C69979);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		String_t* L_29 = V_3;
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_29);
		String_t* L_30;
		L_30 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_28, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_30);
		// }
		return;
	}
}
// System.Void PathLight::UpdateTurnStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_UpdateTurnStatus_m8D3593494C392E3A02F7E5C3E7C3CB51387C4ED2 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB280845452024CC3BF8AEBDCFA41178D61AF9A9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// string curAgentTurn = isPlayerTurn ? "Player" : "NPC";
		bool L_0 = __this->___isPlayerTurn_13;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = _stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C;
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// txtTurnNumber.text = $"Turn: {currentTurn} - {curAgentTurn}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___txtTurnNumber_5;
		int32_t L_2 = __this->___currentTurn_12;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralB280845452024CC3BF8AEBDCFA41178D61AF9A9A, L_4, L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_6);
		// }
		return;
	}
}
// JSNodeMap.Node PathLight::GetRandomNpcTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* PathLight_GetRandomNpcTarget_m08D13D535FE9205C24A55BEBC880F2A2B71FDB6F (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m81BBF48063C93D68EBDEE6E6D85399E06E4FD2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_0 = NULL;
	{
		// List<Node> allNodes = new List<Node>(map.mapNodes);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___map_9;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_1 = L_0->___mapNodes_16;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_2 = (List_1_t655259B818E9860056FF46909A95E99467EDA337*)il2cpp_codegen_object_new(List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		List_1__ctor_m81BBF48063C93D68EBDEE6E6D85399E06E4FD2EC(L_2, L_1, List_1__ctor_m81BBF48063C93D68EBDEE6E6D85399E06E4FD2EC_RuntimeMethod_var);
		V_0 = L_2;
		// allNodes.Remove(npcAgent.currentNode);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_3 = V_0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_4 = __this->___npcAgent_11;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = L_4->___currentNode_6;
		bool L_6;
		L_6 = List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8(L_3, L_5, List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8_RuntimeMethod_var);
		// return allNodes[Random.Range(0, allNodes.Count - 1)];
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_7 = V_0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_8 = V_0;
		int32_t L_9;
		L_9 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_8, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		int32_t L_10;
		L_10 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_11;
		L_11 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_7, L_10, List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void PathLight::PlayerNodeArrive(JSNodeMap.Node,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_PlayerNodeArrive_mB0F2648948F2BA9A8F52E5233F023540D4770C21 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7FD7CC94509C07A4AC56E1FB2D29F0A76AFF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Player arrive {node.nodeName}");
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___node0;
		String_t* L_1 = L_0->___nodeName_8;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2AC7FD7CC94509C07A4AC56E1FB2D29F0A76AFF2, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// playerAgent.isMoving = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_3 = __this->___playerAgent_10;
		L_3->___isMoving_11 = (bool)0;
		// playerAgent.doMoveToTarget = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_4 = __this->___playerAgent_10;
		L_4->___doMoveToTarget_13 = (bool)0;
		// if (target)
		bool L_5 = ___target1;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// playerAgent.targetNode = null;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_6 = __this->___playerAgent_10;
		L_6->___targetNode_8 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___targetNode_8), (void*)(Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL);
	}

IL_003c:
	{
		// CheckBattleConditions();
		PathLight_CheckBattleConditions_mFB0FB73949E9C5BB06C68FC1688B9EF979CB4F40(__this, NULL);
		// UpdatePlayerStatus();
		PathLight_UpdatePlayerStatus_m0932173E450452A6704986CD4EB8BD2295F1CC65(__this, NULL);
		// npcAgent.doMove = true;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_7 = __this->___npcAgent_11;
		L_7->___doMove_12 = (bool)1;
		// npcAgent.MoveToTarget(npcAgent.targetNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_8 = __this->___npcAgent_11;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_9 = __this->___npcAgent_11;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_10 = L_9->___targetNode_8;
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(L_8, L_10, NULL);
		// UpdateTurnStatus();
		PathLight_UpdateTurnStatus_m8D3593494C392E3A02F7E5C3E7C3CB51387C4ED2(__this, NULL);
		// }
		return;
	}
}
// System.Void PathLight::NpcNodeArrive(JSNodeMap.Node,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_NpcNodeArrive_m386D0B00F9F897E302D5C055AEB7B878277877EE (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral363FAA193D467B8EB790C44C108C4DE7BA71E890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2660CCEC3C01D9B8235D4C3B8BA229A7DC5082E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"NPC arrive {node.nodeName}");
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___node0;
		String_t* L_1 = L_0->___nodeName_8;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC2660CCEC3C01D9B8235D4C3B8BA229A7DC5082E, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// currentTurn++;
		int32_t L_3 = __this->___currentTurn_12;
		__this->___currentTurn_12 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// npcAgent.isMoving = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_4 = __this->___npcAgent_11;
		L_4->___isMoving_11 = (bool)0;
		// npcAgent.doMoveToTarget = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_5 = __this->___npcAgent_11;
		L_5->___doMoveToTarget_13 = (bool)0;
		// if (target)
		bool L_6 = ___target1;
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		// Debug.Log("NPC reached target. Selecting new destination.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral363FAA193D467B8EB790C44C108C4DE7BA71E890, NULL);
		// npcAgent.targetNode = GetRandomNpcTarget();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_7 = __this->___npcAgent_11;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_8;
		L_8 = PathLight_GetRandomNpcTarget_m08D13D535FE9205C24A55BEBC880F2A2B71FDB6F(__this, NULL);
		L_7->___targetNode_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___targetNode_8), (void*)L_8);
	}

IL_0059:
	{
		// CheckBattleConditions();
		PathLight_CheckBattleConditions_mFB0FB73949E9C5BB06C68FC1688B9EF979CB4F40(__this, NULL);
		// isPlayerTurn = true;
		__this->___isPlayerTurn_13 = (bool)1;
		// UpdatePlayerStatus();
		PathLight_UpdatePlayerStatus_m0932173E450452A6704986CD4EB8BD2295F1CC65(__this, NULL);
		// UpdateNpcStatus();
		PathLight_UpdateNpcStatus_mF603685753D2B4F07237955F0C058BCB73A1D05D(__this, NULL);
		// UpdateTurnStatus();
		PathLight_UpdateTurnStatus_m8D3593494C392E3A02F7E5C3E7C3CB51387C4ED2(__this, NULL);
		// }
		return;
	}
}
// System.Void PathLight::CheckBattleConditions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_CheckBattleConditions_mFB0FB73949E9C5BB06C68FC1688B9EF979CB4F40 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDD8117445B0C65D0EF74581D08D35328543EBE);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (npcAgent.currentNode == playerAgent.currentNode)
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = __this->___npcAgent_11;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = L_0->___currentNode_6;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___playerAgent_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = L_2->___currentNode_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0088;
		}
	}
	{
		// Debug.Log("BATTLE!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5EDD8117445B0C65D0EF74581D08D35328543EBE, NULL);
		// Vector3 pos = playerAgent.currentNode.transform.position;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_5 = __this->___playerAgent_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_6 = L_5->___currentNode_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_0 = L_8;
		// cnvBattleText.transform.position = new Vector3(pos.x, pos.y + 1, pos.z);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = __this->___cnvBattleText_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_12, ((float)il2cpp_codegen_add(L_14, (1.0f))), L_16, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_17, NULL);
		// cnvBattleText.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_18 = __this->___cnvBattleText_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// StartCoroutine(HideBattleText());
		RuntimeObject* L_20;
		L_20 = PathLight_HideBattleText_mAD9562B39BBA512812CF6A7AC669ADC279C2EDB6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_21;
		L_21 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_20, NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PathLight::HideBattleText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PathLight_HideBattleText_mAD9562B39BBA512812CF6A7AC669ADC279C2EDB6 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* L_0 = (U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E*)il2cpp_codegen_object_new(U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E_il2cpp_TypeInfo_var);
		U3CHideBattleTextU3Ed__20__ctor_m3EC233313E393CD6BC0B5875ACD4517013694F72(L_0, 0, NULL);
		U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PathLight::ProcessNextTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight_ProcessNextTurn_m7C6FC1733FF753037C1C512C40F0B1AFB65F6CBB (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	{
		// UpdateTurnStatus();
		PathLight_UpdateTurnStatus_m8D3593494C392E3A02F7E5C3E7C3CB51387C4ED2(__this, NULL);
		// isPlayerTurn = false;
		__this->___isPlayerTurn_13 = (bool)0;
		// btnNextTurn.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnNextTurn_4;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// playerAgent.doMove = true;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1 = __this->___playerAgent_10;
		L_1->___doMove_12 = (bool)1;
		// playerAgent.MoveToTarget(playerAgent.targetNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___playerAgent_10;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_3 = __this->___playerAgent_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = L_3->___targetNode_8;
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Void PathLight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLight__ctor_mB674A5F797EE883B14984533ECA08A83ADF4C6F0 (PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* __this, const RuntimeMethod* method) 
{
	{
		// private int currentTurn = 1;        // Used for keeping track of the main game's turn state
		__this->___currentTurn_12 = 1;
		// private bool isPlayerTurn = true;
		__this->___isPlayerTurn_13 = (bool)1;
		// private float maxDistance = 1000f;
		__this->___maxDistance_14 = (1000.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PathLight/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m944B32887CF895F9ACC5A7C26E30E2A10D6A213D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* L_0 = (U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC*)il2cpp_codegen_object_new(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0B60389C5ABA80007DBE353EE7CF529D2C7C425A(L_0, NULL);
		((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void PathLight/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0B60389C5ABA80007DBE353EE7CF529D2C7C425A (U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean PathLight/<>c::<Awake>b__11_0(JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__11_0_m1B20D624C8A0C4CF405E885893CF368E79738990 (U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___a0, const RuntimeMethod* method) 
{
	{
		// playerAgent = map.mapAgents.Find(a => a.agentType == 0);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = ___a0;
		int32_t L_1 = L_0->___agentType_4;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean PathLight/<>c::<Awake>b__11_1(JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__11_1_mB6C7FDABEB717DB21C9C3111ACFF5EA4A1D87EE2 (U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___a0, const RuntimeMethod* method) 
{
	{
		// npcAgent = map.mapAgents.Find(a => a.agentType == 1);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = ___a0;
		int32_t L_1 = L_0->___agentType_4;
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.String PathLight/<>c::<UpdatePlayerStatus>b__13_0(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CUpdatePlayerStatusU3Eb__13_0_mFA6CDEB43043075E09AA576F2E02E7EA25799CBE (U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___n0, const RuntimeMethod* method) 
{
	{
		// routeText = string.Join(", ", route.Select(n => n.nodeName).ToList());
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___n0;
		String_t* L_1 = L_0->___nodeName_8;
		return L_1;
	}
}
// System.String PathLight/<>c::<UpdateNpcStatus>b__14_0(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CUpdateNpcStatusU3Eb__14_0_m48AB85AE2B4688667C8210C055AEE140A4FDEC19 (U3CU3Ec_t0380AA9D01E18889CA57CFDC90EE96B551EFD5CC* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___n0, const RuntimeMethod* method) 
{
	{
		// string routeText = string.Join(", ", route.Select(n => n.nodeName).ToList());
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___n0;
		String_t* L_1 = L_0->___nodeName_8;
		return L_1;
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
// System.Void PathLight/<HideBattleText>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideBattleTextU3Ed__20__ctor_m3EC233313E393CD6BC0B5875ACD4517013694F72 (U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PathLight/<HideBattleText>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideBattleTextU3Ed__20_System_IDisposable_Dispose_m2972EF3FB99A836FCD67AB39B7FEB70D16FA1305 (U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PathLight/<HideBattleText>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHideBattleTextU3Ed__20_MoveNext_mB908B87E9113D742A59CC3B1F6AD451E7F7B7B0A (U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// cnvBattleText.gameObject.SetActive(false);
		PathLight_t3FA11C1E559B29180D88D9303C2DB6F2314408FB* L_5 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = L_5->___cnvBattleText_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PathLight/<HideBattleText>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHideBattleTextU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0096111861AB559948506CE8E6EA91AA1CD2ECD1 (U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PathLight/<HideBattleText>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideBattleTextU3Ed__20_System_Collections_IEnumerator_Reset_m6DD097607D27C9B7CCBF8BB58BD6C2EEB7D70CCF (U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHideBattleTextU3Ed__20_System_Collections_IEnumerator_Reset_m6DD097607D27C9B7CCBF8BB58BD6C2EEB7D70CCF_RuntimeMethod_var)));
	}
}
// System.Object PathLight/<HideBattleText>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHideBattleTextU3Ed__20_System_Collections_IEnumerator_get_Current_mE8719A05680C98EB3832D5866F21A852F125B1F7 (U3CHideBattleTextU3Ed__20_tB1496F7BB2DD66AD2938F5EA24DD2A6AA5D5EB7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void LookCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookCamera_Start_mE9289E1E6CB37C5254B8BCAA97DEF20F5B8E3D7B (LookCamera_tA4F0603492EBAE87D7EE5DD8710A788E6118CAEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<Rigidbody>())
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void LookCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookCamera_Update_m68E69B1B5A7045536596C77570DDBB111AC6DEE0 (LookCamera_tA4F0603492EBAE87D7EE5DD8710A788E6118CAEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (Input.GetMouseButton(1))
		bool L_0;
		L_0 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(1, NULL);
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		// float rotX = transform.localEulerAngles.y + Input.GetAxis("Mouse X") * mouseSensitivityX;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_1, NULL);
		float L_3 = L_2.___y_3;
		float L_4;
		L_4 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_5 = __this->___mouseSensitivityX_6;
		V_0 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// rotY += Input.GetAxis("Mouse Y") * mouseSensitivityY;
		float L_6 = __this->___rotY_8;
		float L_7;
		L_7 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_8 = __this->___mouseSensitivityY_7;
		__this->___rotY_8 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8))));
		// rotY = Mathf.Clamp(rotY, -89.5f, 89.5f);
		float L_9 = __this->___rotY_8;
		float L_10;
		L_10 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_9, (-89.5f), (89.5f), NULL);
		__this->___rotY_8 = L_10;
		// transform.localEulerAngles = new Vector3(-rotY, rotX, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_12 = __this->___rotY_8;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), ((-L_12)), L_13, (0.0f), /*hidden argument*/NULL);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_11, L_14, NULL);
	}

IL_0081:
	{
		// if (Input.GetKey(KeyCode.U))
		bool L_15;
		L_15 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)117), NULL);
		if (!L_15)
		{
			goto IL_00ae;
		}
	}
	{
		// gameObject.transform.localPosition = new Vector3(0.0f, 3500.0f, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (3500.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_18, NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void LookCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookCamera__ctor_m14F0C4DDA1FF55558C400791F6361D35EA975CB4 (LookCamera_tA4F0603492EBAE87D7EE5DD8710A788E6118CAEA* __this, const RuntimeMethod* method) 
{
	{
		// public float speedNormal = 10.0f;
		__this->___speedNormal_4 = (10.0f);
		// public float speedFast   = 50.0f;
		__this->___speedFast_5 = (50.0f);
		// public float mouseSensitivityX = 5.0f;
		__this->___mouseSensitivityX_6 = (5.0f);
		// public float mouseSensitivityY = 5.0f;
		__this->___mouseSensitivityY_7 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// JSNodeMap.Node JSNodeMap.Agent::get_CurrentMoveTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Agent_get_CurrentMoveTarget_m90FBBEE4535033065B115F9AF08B20C65BCFCB4F (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m6FE86E5ABE54748C772FFAE3A9BEB33409894414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nodeRoute.Any()) {
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_0 = __this->___nodeRoute_9;
		bool L_1;
		L_1 = Enumerable_Any_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m6FE86E5ABE54748C772FFAE3A9BEB33409894414(L_0, Enumerable_Any_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m6FE86E5ABE54748C772FFAE3A9BEB33409894414_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return nodeRoute.Peek();
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_2 = __this->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3;
		L_3 = Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B(L_2, Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		return L_3;
	}

IL_0019:
	{
		// return null;
		return (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
	}
}
// System.String JSNodeMap.Agent::get_MoveStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Agent_get_MoveStats_mFBCADC837196F9F7EF5F0929033611579917A270 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0955B403C92742259B4A757C63231304F1075D6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral459AE86B951E84FD1DBF22C71E4CA8F79B5B4079);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84862A9A48CA0D10DD1BF7D797086F982800A64F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95A87E5E9775CEF8B7D6182F57FB470C2AF90907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4231333934B21CA12AF7D73F664F2A8F7A29712);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string stats = "Speed: " + movementSpeed + ", Factor: " + movementFactor;
		float* L_0 = (&__this->___movementSpeed_5);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, NULL);
		float* L_2 = (&__this->___movementFactor_18);
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D, L_1, _stringLiteral459AE86B951E84FD1DBF22C71E4CA8F79B5B4079, L_3, NULL);
		V_0 = L_4;
		// stats += ", Dist: " + distTraveled + ", Percent: " + percentTraveled;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = V_0;
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		ArrayElementTypeCheck (L_8, _stringLiteral0955B403C92742259B4A757C63231304F1075D6D);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral0955B403C92742259B4A757C63231304F1075D6D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		float* L_10 = (&__this->___distTraveled_19);
		String_t* L_11;
		L_11 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_10, NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_9;
		ArrayElementTypeCheck (L_12, _stringLiteral84862A9A48CA0D10DD1BF7D797086F982800A64F);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral84862A9A48CA0D10DD1BF7D797086F982800A64F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		float* L_14 = (&__this->___percentTraveled_20);
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_14, NULL);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_15);
		String_t* L_16;
		L_16 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_13, NULL);
		V_0 = L_16;
		// stats += ", DoMove: " + doMove + ", MoveToTarget: " + doMoveToTarget;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19 = V_0;
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
		ArrayElementTypeCheck (L_20, _stringLiteral95A87E5E9775CEF8B7D6182F57FB470C2AF90907);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral95A87E5E9775CEF8B7D6182F57FB470C2AF90907);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		bool* L_22 = (&__this->___doMove_12);
		String_t* L_23;
		L_23 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_22, NULL);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		ArrayElementTypeCheck (L_24, _stringLiteralB4231333934B21CA12AF7D73F664F2A8F7A29712);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB4231333934B21CA12AF7D73F664F2A8F7A29712);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		bool* L_26 = (&__this->___doMoveToTarget_13);
		String_t* L_27;
		L_27 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_26, NULL);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_27);
		String_t* L_28;
		L_28 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_25, NULL);
		V_0 = L_28;
		// return stats;
		String_t* L_29 = V_0;
		return L_29;
	}
}
// System.Void JSNodeMap.Agent::add_OnMoveStart(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnMoveStart_m66CE3FB467DACFD5BD0BB9108CCDA8A988335BCB (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_0 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_1 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_2 = NULL;
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_0 = __this->___OnMoveStart_23;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = V_0;
		V_1 = L_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)CastclassSealed((RuntimeObject*)L_4, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var));
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58** L_5 = (&__this->___OnMoveStart_23);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_6 = V_2;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = V_0;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_9) == ((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnMoveStart(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnMoveStart_m3DAC78824D7E2246CE93520C808DC6AC44A2E40D (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_0 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_1 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_2 = NULL;
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_0 = __this->___OnMoveStart_23;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = V_0;
		V_1 = L_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)CastclassSealed((RuntimeObject*)L_4, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var));
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58** L_5 = (&__this->___OnMoveStart_23);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_6 = V_2;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = V_0;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_9) == ((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::add_OnMoveEnd(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnMoveEnd_m643C7590744FB9B365AA99FB1C3EF7BB52A6A528 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_0 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_1 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_2 = NULL;
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_0 = __this->___OnMoveEnd_24;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = V_0;
		V_1 = L_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)CastclassSealed((RuntimeObject*)L_4, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var));
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58** L_5 = (&__this->___OnMoveEnd_24);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_6 = V_2;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = V_0;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_9) == ((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnMoveEnd(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnMoveEnd_m1959927AAB2A0A252B5A74C8DE97E30988433741 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_0 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_1 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_2 = NULL;
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_0 = __this->___OnMoveEnd_24;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = V_0;
		V_1 = L_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)CastclassSealed((RuntimeObject*)L_4, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var));
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58** L_5 = (&__this->___OnMoveEnd_24);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_6 = V_2;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = V_0;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_9) == ((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::add_OnRetreat(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnRetreat_mDE340E20F509E66785BE8ECA586640A5C51DC95A (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_0 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_1 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_2 = NULL;
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_0 = __this->___OnRetreat_25;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = V_0;
		V_1 = L_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)CastclassSealed((RuntimeObject*)L_4, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var));
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58** L_5 = (&__this->___OnRetreat_25);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_6 = V_2;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = V_0;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_9) == ((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnRetreat(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnRetreat_mB9EE5998192287FC0F20E3F66E579E68AD0DE21C (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_0 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_1 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_2 = NULL;
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_0 = __this->___OnRetreat_25;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = V_0;
		V_1 = L_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)CastclassSealed((RuntimeObject*)L_4, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var));
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58** L_5 = (&__this->___OnRetreat_25);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_6 = V_2;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = V_0;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_9) == ((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::add_OnCannotReach(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnCannotReach_m95879A965B269E6A889ED72629CAF04C88580460 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_0 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_1 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_2 = NULL;
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_0 = __this->___OnCannotReach_26;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = V_0;
		V_1 = L_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)CastclassSealed((RuntimeObject*)L_4, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var));
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58** L_5 = (&__this->___OnCannotReach_26);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_6 = V_2;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = V_0;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_9) == ((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnCannotReach(JSNodeMap.Agent/NodeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnCannotReach_m8EB0F5BC70E206A66038E7E79877174B7DCF8742 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_0 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_1 = NULL;
	NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* V_2 = NULL;
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_0 = __this->___OnCannotReach_26;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_1 = V_0;
		V_1 = L_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_2 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)CastclassSealed((RuntimeObject*)L_4, NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58_il2cpp_TypeInfo_var));
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58** L_5 = (&__this->___OnCannotReach_26);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_6 = V_2;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_7 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_9 = V_0;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_9) == ((RuntimeObject*)(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::add_OnNodeArrive(JSNodeMap.Agent/NodeHandlerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnNodeArrive_mA06D994F366DE7555F61BABD9292EA32920F48D3 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* V_0 = NULL;
	NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* V_1 = NULL;
	NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* V_2 = NULL;
	{
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_0 = __this->___OnNodeArrive_27;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_1 = V_0;
		V_1 = L_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_2 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)CastclassSealed((RuntimeObject*)L_4, NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var));
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865** L_5 = (&__this->___OnNodeArrive_27);
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_6 = V_2;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_7 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_9 = V_0;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)L_9) == ((RuntimeObject*)(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnNodeArrive(JSNodeMap.Agent/NodeHandlerBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnNodeArrive_m30EF6D3C20B54570452A73250477053D1F969BE7 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* V_0 = NULL;
	NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* V_1 = NULL;
	NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* V_2 = NULL;
	{
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_0 = __this->___OnNodeArrive_27;
		V_0 = L_0;
	}

IL_0007:
	{
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_1 = V_0;
		V_1 = L_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_2 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)CastclassSealed((RuntimeObject*)L_4, NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865_il2cpp_TypeInfo_var));
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865** L_5 = (&__this->___OnNodeArrive_27);
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_6 = V_2;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_7 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_8;
		L_8 = InterlockedCompareExchangeImpl<NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*>(L_5, L_6, L_7);
		V_0 = L_8;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_9 = V_0;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_10 = V_1;
		if ((!(((RuntimeObject*)(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)L_9) == ((RuntimeObject*)(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::add_OnAgentCollide(JSNodeMap.Agent/AgentHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnAgentCollide_m8DCE64D5AE78F6289847218819C62364875A51A7 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* V_0 = NULL;
	AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* V_1 = NULL;
	AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* V_2 = NULL;
	{
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_0 = __this->___OnAgentCollide_28;
		V_0 = L_0;
	}

IL_0007:
	{
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_1 = V_0;
		V_1 = L_1;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_2 = V_1;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*)CastclassSealed((RuntimeObject*)L_4, AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499_il2cpp_TypeInfo_var));
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499** L_5 = (&__this->___OnAgentCollide_28);
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_6 = V_2;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_7 = V_1;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_8;
		L_8 = InterlockedCompareExchangeImpl<AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*>(L_5, L_6, L_7);
		V_0 = L_8;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_9 = V_0;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_10 = V_1;
		if ((!(((RuntimeObject*)(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*)L_9) == ((RuntimeObject*)(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnAgentCollide(JSNodeMap.Agent/AgentHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnAgentCollide_m21DA3821BF4C68A176FEA2D4F42DBDDDF6501521 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* V_0 = NULL;
	AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* V_1 = NULL;
	AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* V_2 = NULL;
	{
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_0 = __this->___OnAgentCollide_28;
		V_0 = L_0;
	}

IL_0007:
	{
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_1 = V_0;
		V_1 = L_1;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_2 = V_1;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*)CastclassSealed((RuntimeObject*)L_4, AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499_il2cpp_TypeInfo_var));
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499** L_5 = (&__this->___OnAgentCollide_28);
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_6 = V_2;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_7 = V_1;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_8;
		L_8 = InterlockedCompareExchangeImpl<AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*>(L_5, L_6, L_7);
		V_0 = L_8;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_9 = V_0;
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_10 = V_1;
		if ((!(((RuntimeObject*)(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*)L_9) == ((RuntimeObject*)(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::add_OnMarkerTick(JSNodeMap.Agent/MarkerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnMarkerTick_m66B3428EF9DD5D0596B9E21DE4440404F2F73A05 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* V_0 = NULL;
	MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* V_1 = NULL;
	MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* V_2 = NULL;
	{
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_0 = __this->___OnMarkerTick_29;
		V_0 = L_0;
	}

IL_0007:
	{
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_1 = V_0;
		V_1 = L_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_2 = V_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*)CastclassSealed((RuntimeObject*)L_4, MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD_il2cpp_TypeInfo_var));
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD** L_5 = (&__this->___OnMarkerTick_29);
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_6 = V_2;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_7 = V_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_8;
		L_8 = InterlockedCompareExchangeImpl<MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*>(L_5, L_6, L_7);
		V_0 = L_8;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_9 = V_0;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_10 = V_1;
		if ((!(((RuntimeObject*)(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*)L_9) == ((RuntimeObject*)(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnMarkerTick(JSNodeMap.Agent/MarkerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnMarkerTick_m63745BAEBD70A368DD5EE304875610B944E9B25C (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* V_0 = NULL;
	MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* V_1 = NULL;
	MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* V_2 = NULL;
	{
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_0 = __this->___OnMarkerTick_29;
		V_0 = L_0;
	}

IL_0007:
	{
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_1 = V_0;
		V_1 = L_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_2 = V_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*)CastclassSealed((RuntimeObject*)L_4, MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD_il2cpp_TypeInfo_var));
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD** L_5 = (&__this->___OnMarkerTick_29);
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_6 = V_2;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_7 = V_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_8;
		L_8 = InterlockedCompareExchangeImpl<MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*>(L_5, L_6, L_7);
		V_0 = L_8;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_9 = V_0;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_10 = V_1;
		if ((!(((RuntimeObject*)(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*)L_9) == ((RuntimeObject*)(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::add_OnPause(JSNodeMap.Agent/SelfHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnPause_m6274A7BC46119D7C4686D9E39F3218ADEB035F18 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_0 = NULL;
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_1 = NULL;
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_2 = NULL;
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_0 = __this->___OnPause_30;
		V_0 = L_0;
	}

IL_0007:
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_1 = V_0;
		V_1 = L_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_2 = V_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)CastclassSealed((RuntimeObject*)L_4, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var));
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3** L_5 = (&__this->___OnPause_30);
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_6 = V_2;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_7 = V_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_9 = V_0;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)L_9) == ((RuntimeObject*)(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnPause(JSNodeMap.Agent/SelfHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnPause_m188CFF1F3A5C73B0B22F46577CF11782089DDD40 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_0 = NULL;
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_1 = NULL;
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_2 = NULL;
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_0 = __this->___OnPause_30;
		V_0 = L_0;
	}

IL_0007:
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_1 = V_0;
		V_1 = L_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_2 = V_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)CastclassSealed((RuntimeObject*)L_4, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var));
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3** L_5 = (&__this->___OnPause_30);
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_6 = V_2;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_7 = V_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_9 = V_0;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)L_9) == ((RuntimeObject*)(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::add_OnResume(JSNodeMap.Agent/SelfHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_add_OnResume_m0FFDAC008E559EC457436495E8F7825E706ACF15 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_0 = NULL;
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_1 = NULL;
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_2 = NULL;
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_0 = __this->___OnResume_31;
		V_0 = L_0;
	}

IL_0007:
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_1 = V_0;
		V_1 = L_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_2 = V_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)CastclassSealed((RuntimeObject*)L_4, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var));
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3** L_5 = (&__this->___OnResume_31);
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_6 = V_2;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_7 = V_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_9 = V_0;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)L_9) == ((RuntimeObject*)(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::remove_OnResume(JSNodeMap.Agent/SelfHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_remove_OnResume_m9F22C2A81ADEAA848515691431E38980459BDDFE (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_0 = NULL;
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_1 = NULL;
	SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* V_2 = NULL;
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_0 = __this->___OnResume_31;
		V_0 = L_0;
	}

IL_0007:
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_1 = V_0;
		V_1 = L_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_2 = V_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)CastclassSealed((RuntimeObject*)L_4, SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3_il2cpp_TypeInfo_var));
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3** L_5 = (&__this->___OnResume_31);
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_6 = V_2;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_7 = V_1;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_9 = V_0;
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)L_9) == ((RuntimeObject*)(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void JSNodeMap.Agent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_Awake_m815F6ADE4A37ED9389D93FDFCC8F1581051B14DB (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m22ACD7E47CF44EA9C8A99613308777E244D81BC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m7F69757625D9434E1AE3AC81832D6571440F343D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_1 = NULL;
	int32_t V_2 = 0;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_3 = NULL;
	{
		// nodeRoute = new Queue<Node>();
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_0 = (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A*)il2cpp_codegen_object_new(Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A_il2cpp_TypeInfo_var);
		Queue_1__ctor_m7F69757625D9434E1AE3AC81832D6571440F343D(L_0, Queue_1__ctor_m7F69757625D9434E1AE3AC81832D6571440F343D_RuntimeMethod_var);
		__this->___nodeRoute_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeRoute_9), (void*)L_0);
		// if ((colliders = Physics.OverlapSphere(transform.position, 1f)).Length > 1) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3;
		L_3 = Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2(L_2, (1.0f), NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4 = L_3;
		V_0 = L_4;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		// foreach (Collider col in colliders) {
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5 = V_0;
		V_1 = L_5;
		V_2 = 0;
		goto IL_006a;
	}

IL_002d:
	{
		// foreach (Collider col in colliders) {
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		// Node nearNode = col.gameObject.GetComponent<Node>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_11;
		L_11 = GameObject_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m22ACD7E47CF44EA9C8A99613308777E244D81BC6(L_10, GameObject_GetComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m22ACD7E47CF44EA9C8A99613308777E244D81BC6_RuntimeMethod_var);
		V_3 = L_11;
		// if (nearNode) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_12 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// currentNode = nearNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = V_3;
		__this->___currentNode_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentNode_6), (void*)L_14);
		// transform.position = currentNode.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_16 = __this->___currentNode_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_18, NULL);
		// return;
		return;
	}

IL_0066:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		// foreach (Collider col in colliders) {
		int32_t L_20 = V_2;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_002d;
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_OnTriggerEnter_mA824D50BFD113E9F59D877F85BD22AF4BA968B00 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* V_0 = NULL;
	{
		// Agent otherAgent = other.GetComponent<Agent>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1;
		L_1 = Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5(L_0, Component_GetComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m5C298A4FF7193B0B503A824D1E44065EA777E8F5_RuntimeMethod_var);
		V_0 = L_1;
		// if (otherAgent) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// if (OnAgentCollide != null) OnAgentCollide(otherAgent);
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_4 = __this->___OnAgentCollide_28;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// if (OnAgentCollide != null) OnAgentCollide(otherAgent);
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* L_5 = __this->___OnAgentCollide_28;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_6 = V_0;
		AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_inline(L_5, L_6, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator JSNodeMap.Agent::MoveToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Agent_MoveToTarget_mB51F46A234A294A842793AEFB0505B2D5BAB4EB8 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* L_0 = (U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03*)il2cpp_codegen_object_new(U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03_il2cpp_TypeInfo_var);
		U3CMoveToTargetU3Ed__57__ctor_m82BB3BB0F04ADB25F67926FC8FBE6212A3815C66(L_0, 0, NULL);
		U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator JSNodeMap.Agent::Retreat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Agent_Retreat_mB4A3E3C3FD854A4FAD435670D99C6309AB6855A7 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* L_0 = (U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34*)il2cpp_codegen_object_new(U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34_il2cpp_TypeInfo_var);
		U3CRetreatU3Ed__58__ctor_m4982074BDF7ECAB71965A4B792B4522E7037F6CE(L_0, 0, NULL);
		U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void JSNodeMap.Agent::SetupPathAndMarkers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_SetupPathAndMarkers_m6D888AB4374A76885520956AD1073100FA3B66CE (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* G_B2_0 = NULL;
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* G_B3_1 = NULL;
	{
		// curWayPoint = nodeRoute.Peek().transform.position;
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_0 = __this->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1;
		L_1 = Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B(L_0, Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___curWayPoint_17 = L_3;
		// onPath = Map.FindValidPath(currentNode, nodeRoute.Peek());
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = __this->___currentNode_6;
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_5 = __this->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_6;
		L_6 = Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B(L_5, Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_7;
		L_7 = Map_FindValidPath_m9F25634F168EF72B7341E829D11A7452C807A5AF(L_4, L_6, NULL);
		__this->___onPath_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPath_10), (void*)L_7);
		// nextMarkerIndex = 0;
		__this->___nextMarkerIndex_15 = 0;
		// markerPosList = new List<float>(onPath.markerPosList);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_8 = __this->___onPath_10;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_9 = L_8->___markerPosList_19;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_10 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F(L_10, L_9, List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var);
		__this->___markerPosList_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___markerPosList_16), (void*)L_10);
		// transform.LookAt(nodeRoute.Peek().transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_12 = __this->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_13;
		L_13 = Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B(L_12, Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_11, L_15, NULL);
		// movementFactor = (onPath.fromNode == currentNode) ? onPath.fromSpeed : onPath.toSpeed;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_16 = __this->___onPath_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_17 = L_16->___fromNode_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_18 = __this->___currentNode_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_17, L_18, NULL);
		G_B1_0 = __this;
		if (L_19)
		{
			G_B2_0 = __this;
			goto IL_009a;
		}
	}
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_20 = __this->___onPath_10;
		float L_21 = L_20->___toSpeed_12;
		G_B3_0 = L_21;
		G_B3_1 = G_B1_0;
		goto IL_00a5;
	}

IL_009a:
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_22 = __this->___onPath_10;
		float L_23 = L_22->___fromSpeed_13;
		G_B3_0 = L_23;
		G_B3_1 = G_B2_0;
	}

IL_00a5:
	{
		G_B3_1->___movementFactor_18 = G_B3_0;
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::Initialize(JSNodeMap.Map,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_Initialize_mF6B63BF8CF76F6F7D2CD0ACAE816B28F0B26B351 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___startingNode1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.nodeMap = nodeMap;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = ___nodeMap0;
		__this->___nodeMap_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeMap_22), (void*)L_0);
		// this.currentNode = startingNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = ___startingNode1;
		__this->___currentNode_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentNode_6), (void*)L_1);
		// Vector3 lookTarget = new Vector3(Camera.main.transform.position.x, transform.position.y, Camera.main.transform.position.z);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_5, L_8, L_12, NULL);
		// FaceDir(lookTarget);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Agent_FaceDir_m74F893D10A1023C829715B808E1C67A08445D62C(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::SetCurrentNodeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_SetCurrentNodeByName_m161C13A3D0D5EA15F68DF7B5A6332A0A56280604 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, String_t* ___nodeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D3AC7E48849F6113D21618556C4EE3FD2AF08E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7587AF6153BD42555080B40207DCE4743A62926F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE12D5B6226653A6E7AF9CA8F95B321EECA211AC4);
		s_Il2CppMethodInitialized = true;
	}
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_0 = NULL;
	{
		// Node newNode = nodeMap.GetNodeByName(nodeName);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___nodeMap_22;
		String_t* L_1 = ___nodeName0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2;
		L_2 = Map_GetNodeByName_mBB8C0B15675C812407C53EE15ADE914A9E334B69(L_0, L_1, NULL);
		V_0 = L_2;
		// if (newNode != null)
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// currentNode = newNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = V_0;
		__this->___currentNode_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentNode_6), (void*)L_5);
		// return;
		return;
	}

IL_001e:
	{
		// Debug.LogError($"Unable to set agent '{name}' currentNode to '{nodeName}'. Node not found.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral6D3AC7E48849F6113D21618556C4EE3FD2AF08E0);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6D3AC7E48849F6113D21618556C4EE3FD2AF08E0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		ArrayElementTypeCheck (L_10, _stringLiteralE12D5B6226653A6E7AF9CA8F95B321EECA211AC4);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE12D5B6226653A6E7AF9CA8F95B321EECA211AC4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12 = ___nodeName0;
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		ArrayElementTypeCheck (L_13, _stringLiteral7587AF6153BD42555080B40207DCE4743A62926F);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7587AF6153BD42555080B40207DCE4743A62926F);
		String_t* L_14;
		L_14 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_14, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::FaceDir(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_FaceDir_m74F893D10A1023C829715B808E1C67A08445D62C (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir0, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(dir);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___dir0;
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> JSNodeMap.Agent::GetRoutePointPositions(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* Agent_GetRoutePointPositions_m09D316F1E7B989AD53DBB4FB67F9F15C053ECEF6 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mFAC47DFB4C7E4101D80AE119F00A79E6E53F77CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_1 = NULL;
	Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_3 = NULL;
	{
		// List<Vector3> points = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// List<Node> path = Pathfinding.FindRoute(currentNode, targetNode, this);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = __this->___currentNode_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = ___targetNode0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_3;
		L_3 = Pathfinding_FindRoute_m2934C1CD03C8D449CCC6F249BFA08E8DCA440FCE(L_1, L_2, __this, NULL);
		V_1 = L_3;
		// if (path.Count > 0) {
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_4 = V_1;
		int32_t L_5;
		L_5 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_4, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		// points.Add(transform.position);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_6, L_8, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// path.RemoveAt(0);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_9 = V_1;
		List_1_RemoveAt_mFAC47DFB4C7E4101D80AE119F00A79E6E53F77CA(L_9, 0, List_1_RemoveAt_mFAC47DFB4C7E4101D80AE119F00A79E6E53F77CA_RuntimeMethod_var);
		// foreach(Node node in path) {
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_10 = V_1;
		Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 L_11;
		L_11 = List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA(L_10, List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2((&V_2), Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0057_1;
			}

IL_003e_1:
			{
				// foreach(Node node in path) {
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_12;
				L_12 = Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_inline((&V_2), Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
				V_3 = L_12;
				// points.Add(node.transform.position);
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = V_0;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = V_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
				L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
				List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_13, L_16, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
			}

IL_0057_1:
			{
				// foreach(Node node in path) {
				bool L_17;
				L_17 = Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534((&V_2), Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// return points;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = V_0;
		return L_18;
	}
}
// System.Void JSNodeMap.Agent::MoveToTarget(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mEAEEC29A5D2E7FEBC7731698C44277655572A3E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mB56BED6F063241818B7BE4ABF52899B5D2ABB4DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m479378A012437171A242B4D3928B2F0882C447FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m1C7D61994AFFD7E101E2614AEECEB52D5B3AA679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE05CAA18002BCABBAF16170575EBB15EC0B81CE);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_0 = NULL;
	{
		// if (isMoving) {
		bool L_0 = __this->___isMoving_11;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// this.targetNode = targetNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = ___targetNode0;
		__this->___targetNode_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetNode_8), (void*)L_1);
		// if (currentNode == null || targetNode == null) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = __this->___currentNode_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = ___targetNode0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}

IL_0027:
	{
		// Debug.LogError("Missing current or goal node");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralDE05CAA18002BCABBAF16170575EBB15EC0B81CE, NULL);
		// return;
		return;
	}

IL_0032:
	{
		// List<Node> foundRoute = Pathfinding.FindRoute(currentNode, targetNode, this);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_6 = __this->___currentNode_6;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_7 = ___targetNode0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_8;
		L_8 = Pathfinding_FindRoute_m2934C1CD03C8D449CCC6F249BFA08E8DCA440FCE(L_6, L_7, __this, NULL);
		V_0 = L_8;
		// if (foundRoute == null || foundRoute.Count == 0) {
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_9 = V_0;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_10 = V_0;
		int32_t L_11;
		L_11 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_10, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0071;
		}
	}

IL_004b:
	{
		// isMoving = false;
		__this->___isMoving_11 = (bool)0;
		// doMoveToTarget = false;
		__this->___doMoveToTarget_13 = (bool)0;
		// if (OnCannotReach != null) OnCannotReach(targetNode);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_12 = __this->___OnCannotReach_26;
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		// if (OnCannotReach != null) OnCannotReach(targetNode);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_13 = __this->___OnCannotReach_26;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = ___targetNode0;
		NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_inline(L_13, L_14, NULL);
	}

IL_006d:
	{
		// targetNode = null;
		___targetNode0 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		// return;
		return;
	}

IL_0071:
	{
		// if (OnMoveStart != null) OnMoveStart(targetNode);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_15 = __this->___OnMoveStart_23;
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		// if (OnMoveStart != null) OnMoveStart(targetNode);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_16 = __this->___OnMoveStart_23;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_17 = ___targetNode0;
		NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_inline(L_16, L_17, NULL);
	}

IL_0085:
	{
		// doMoveToTarget = true;
		__this->___doMoveToTarget_13 = (bool)1;
		// nodeRoute = new Queue<Node>(foundRoute);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_18 = V_0;
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_19 = (Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A*)il2cpp_codegen_object_new(Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A_il2cpp_TypeInfo_var);
		Queue_1__ctor_m479378A012437171A242B4D3928B2F0882C447FB(L_19, L_18, Queue_1__ctor_m479378A012437171A242B4D3928B2F0882C447FB_RuntimeMethod_var);
		__this->___nodeRoute_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeRoute_9), (void*)L_19);
		// if (nodeRoute.Peek() == currentNode) {
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_20 = __this->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_21;
		L_21 = Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B(L_20, Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_22 = __this->___currentNode_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00bc;
		}
	}
	{
		// nodeRoute.Dequeue();
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_24 = __this->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25;
		L_25 = Queue_1_Dequeue_mB56BED6F063241818B7BE4ABF52899B5D2ABB4DB(L_24, Queue_1_Dequeue_mB56BED6F063241818B7BE4ABF52899B5D2ABB4DB_RuntimeMethod_var);
	}

IL_00bc:
	{
		// if (nodeRoute.Count == 0) {
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_26 = __this->___nodeRoute_9;
		int32_t L_27;
		L_27 = Queue_1_get_Count_m1C7D61994AFFD7E101E2614AEECEB52D5B3AA679_inline(L_26, Queue_1_get_Count_m1C7D61994AFFD7E101E2614AEECEB52D5B3AA679_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_00fa;
		}
	}
	{
		// if (OnNodeArrive != null) OnNodeArrive(targetNode, true);
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_28 = __this->___OnNodeArrive_27;
		if (!L_28)
		{
			goto IL_00de;
		}
	}
	{
		// if (OnNodeArrive != null) OnNodeArrive(targetNode, true);
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_29 = __this->___OnNodeArrive_27;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_30 = ___targetNode0;
		NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_inline(L_29, L_30, (bool)1, NULL);
	}

IL_00de:
	{
		// if (OnMoveEnd != null) OnMoveEnd(targetNode);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_31 = __this->___OnMoveEnd_24;
		if (!L_31)
		{
			goto IL_00f2;
		}
	}
	{
		// if (OnMoveEnd != null) OnMoveEnd(targetNode);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_32 = __this->___OnMoveEnd_24;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_33 = ___targetNode0;
		NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_inline(L_32, L_33, NULL);
	}

IL_00f2:
	{
		// doMoveToTarget = false;
		__this->___doMoveToTarget_13 = (bool)0;
		// return;
		return;
	}

IL_00fa:
	{
		// isMoving = true;
		__this->___isMoving_11 = (bool)1;
		// distTraveled = 0;
		__this->___distTraveled_19 = (0.0f);
		// currentNode.agentsAtNode.Remove(this);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_34 = __this->___currentNode_6;
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_35 = L_34->___agentsAtNode_11;
		bool L_36;
		L_36 = List_1_Remove_mEAEEC29A5D2E7FEBC7731698C44277655572A3E3(L_35, __this, List_1_Remove_mEAEEC29A5D2E7FEBC7731698C44277655572A3E3_RuntimeMethod_var);
		// SetupPathAndMarkers();
		Agent_SetupPathAndMarkers_m6D888AB4374A76885520956AD1073100FA3B66CE(__this, NULL);
		// StopCoroutine(MoveToTarget());
		RuntimeObject* L_37;
		L_37 = Agent_MoveToTarget_mB51F46A234A294A842793AEFB0505B2D5BAB4EB8(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_37, NULL);
		// StartCoroutine(MoveToTarget());
		RuntimeObject* L_38;
		L_38 = Agent_MoveToTarget_mB51F46A234A294A842793AEFB0505B2D5BAB4EB8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_39;
		L_39 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_38, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::MoveToTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_MoveToTarget_m00908445AFBFDE998E5BD8ECA3789C22DAAB8CBD (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, String_t* ___targetName0, const RuntimeMethod* method) 
{
	{
		// MoveToTarget(nodeMap.GetNodeByName(targetName));
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___nodeMap_22;
		String_t* L_1 = ___targetName0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2;
		L_2 = Map_GetNodeByName_mBB8C0B15675C812407C53EE15ADE914A9E334B69(L_0, L_1, NULL);
		Agent_MoveToTarget_m037CAABEB8C96A6050B4B4AB3F6A4CA13549BD5B(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::DoRetreat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_DoRetreat_mD6C8B770269EBE268926EF1A581344390BD11B0D (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* G_B5_0 = NULL;
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* G_B6_1 = NULL;
	{
		// if (doRetreat) {
		bool L_0 = __this->___doRetreat_14;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Pathfinding.AgentCanMoveAcross(onPath, nodeRoute.Peek(), this)) {
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_1 = __this->___onPath_10;
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_2 = __this->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3;
		L_3 = Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B(L_2, Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		bool L_4;
		L_4 = Pathfinding_AgentCanMoveAcross_m2EAB5192D0D1A8EA0F4D723BB2ADD5F30A1E2324(L_1, L_3, __this, NULL);
		if (!L_4)
		{
			goto IL_00bf;
		}
	}
	{
		// transform.LookAt(currentNode.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_6 = __this->___currentNode_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_5, L_8, NULL);
		// movementFactor = (onPath.toNode == currentNode) ? onPath.toSpeed : onPath.fromSpeed;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_9 = __this->___onPath_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_10 = L_9->___toNode_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_11 = __this->___currentNode_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, L_11, NULL);
		G_B4_0 = __this;
		if (L_12)
		{
			G_B5_0 = __this;
			goto IL_0066;
		}
	}
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_13 = __this->___onPath_10;
		float L_14 = L_13->___fromSpeed_13;
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		goto IL_0071;
	}

IL_0066:
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_15 = __this->___onPath_10;
		float L_16 = L_15->___toSpeed_12;
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
	}

IL_0071:
	{
		G_B6_1->___movementFactor_18 = G_B6_0;
		// doMoveToTarget = false;
		__this->___doMoveToTarget_13 = (bool)0;
		// doRetreat = true;
		__this->___doRetreat_14 = (bool)1;
		// isMoving = true;
		__this->___isMoving_11 = (bool)1;
		// nextMarkerIndex -= 1;
		int32_t L_17 = __this->___nextMarkerIndex_15;
		__this->___nextMarkerIndex_15 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		// if (OnRetreat != null) OnRetreat(currentNode);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_18 = __this->___OnRetreat_25;
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		// if (OnRetreat != null) OnRetreat(currentNode);
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_19 = __this->___OnRetreat_25;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_20 = __this->___currentNode_6;
		NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_inline(L_19, L_20, NULL);
	}

IL_00b2:
	{
		// StartCoroutine(Retreat());
		RuntimeObject* L_21;
		L_21 = Agent_Retreat_mB4A3E3C3FD854A4FAD435670D99C6309AB6855A7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_21, NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::JumpToNode(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_JumpToNode_m9C400C1BC2DE896175DCC812D883F445F27674D3 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___targetNode0, const RuntimeMethod* method) 
{
	{
		// currentNode = targetNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___targetNode0;
		__this->___currentNode_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentNode_6), (void*)L_0);
		// transform.position = targetNode.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = ___targetNode0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_Pause_mA041DC6A39AD6FDE99B3F92799FF934B82E1ECF9 (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	{
		// if (doMove) {
		bool L_0 = __this->___doMove_12;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// doMove = false;
		__this->___doMove_12 = (bool)0;
		// isMoving = false;
		__this->___isMoving_11 = (bool)0;
		// if (OnPause != null) OnPause();
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_1 = __this->___OnPause_30;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (OnPause != null) OnPause();
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_2 = __this->___OnPause_30;
		SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_inline(L_2, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_Play_mA4260CF4416145C4E68875B7DA18E4A5DF7B59DD (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	{
		// if (! doMove) {
		bool L_0 = __this->___doMove_12;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		// doMove = true;
		__this->___doMove_12 = (bool)1;
		// if (OnResume != null) OnResume();
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_1 = __this->___OnResume_31;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// if (OnResume != null) OnResume();
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* L_2 = __this->___OnResume_31;
		SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_inline(L_2, NULL);
	}

IL_0022:
	{
		// if (doMoveToTarget) {
		bool L_3 = __this->___doMoveToTarget_13;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// StartCoroutine(MoveToTarget());
		RuntimeObject* L_4;
		L_4 = Agent_MoveToTarget_mB51F46A234A294A842793AEFB0505B2D5BAB4EB8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		return;
	}

IL_0038:
	{
		// } else if (doRetreat) {
		bool L_6 = __this->___doRetreat_14;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// StartCoroutine(Retreat());
		RuntimeObject* L_7;
		L_7 = Agent_Retreat_mB4A3E3C3FD854A4FAD435670D99C6309AB6855A7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Agent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent__ctor_m2CCF36DC41E0EDA1AF0E902FFA1441CAB2F66DCD (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float movementSpeed = 1f;    // In Unity units / second
		__this->___movementSpeed_5 = (1.0f);
		// public bool doMove = true;
		__this->___doMove_12 = (bool)1;
		// private WaitForEndOfFrame wait = new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_0 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_0, NULL);
		__this->___wait_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wait_21), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_Multicast(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* currentDelegate = reinterpret_cast<NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___node0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenInst(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___node0, method);
}
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenStatic(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___node0, method);
}
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenStaticInvoker(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* >::Invoke(__this->___method_ptr_0, method, NULL, ___node0);
}
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_ClosedStaticInvoker(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___node0);
}
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenVirtual(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___node0);
}
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenInterface(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___node0);
}
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenGenericVirtual(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___node0);
}
void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenGenericInterface(NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___node0);
}
// System.Void JSNodeMap.Agent/NodeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHandler__ctor_m9364816FB871558803897D9A5844C5C19AEC1B03 (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_Multicast;
}
// System.Void JSNodeMap.Agent/NodeHandler::Invoke(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138 (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult JSNodeMap.Agent/NodeHandler::BeginInvoke(JSNodeMap.Node,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeHandler_BeginInvoke_m750BE4ADEDAC7BDC2ED8A984D67B4645D84D9025 (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___node0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void JSNodeMap.Agent/NodeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHandler_EndInvoke_mDEB12D1A35D5F1643D0741FC30C85CEDF0DE721B (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_Multicast(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* currentDelegate = reinterpret_cast<NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___node0, ___target1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenInst(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___node0, ___target1, method);
}
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenStatic(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___node0, ___target1, method);
}
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenStaticInvoker(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___node0, ___target1);
}
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_ClosedStaticInvoker(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___node0, ___target1);
}
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenVirtual(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___node0, ___target1);
}
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenInterface(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___node0, ___target1);
}
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenGenericVirtual(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< bool >::Invoke(method, ___node0, ___target1);
}
void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenGenericInterface(NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< bool >::Invoke(method, ___node0, ___target1);
}
// System.Void JSNodeMap.Agent/NodeHandlerBool::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHandlerBool__ctor_m08F394E8D1D081672D71FBE2F85F61AA94C0B2C5 (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_Multicast;
}
// System.Void JSNodeMap.Agent/NodeHandlerBool::Invoke(JSNodeMap.Node,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713 (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___target1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult JSNodeMap.Agent/NodeHandlerBool::BeginInvoke(JSNodeMap.Node,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeHandlerBool_BeginInvoke_m1861B117D76BDF23AB69BE963F2114E0EA71DDED (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___target1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void JSNodeMap.Agent/NodeHandlerBool::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHandlerBool_EndInvoke_m2FF6F8B01A43655AE840885762439336FD03709B (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_Multicast(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* currentDelegate = reinterpret_cast<AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___other0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenInst(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___other0, method);
}
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenStatic(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___other0, method);
}
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenStaticInvoker(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* >::Invoke(__this->___method_ptr_0, method, NULL, ___other0);
}
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_ClosedStaticInvoker(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___other0);
}
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenVirtual(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___other0);
}
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenInterface(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___other0);
}
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenGenericVirtual(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___other0);
}
void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenGenericInterface(AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___other0);
}
// System.Void JSNodeMap.Agent/AgentHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentHandler__ctor_mE13731D39BA59D916771DA566ED279A1035AD4C1 (AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_Multicast;
}
// System.Void JSNodeMap.Agent/AgentHandler::Invoke(JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB (AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___other0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult JSNodeMap.Agent/AgentHandler::BeginInvoke(JSNodeMap.Agent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AgentHandler_BeginInvoke_mA7D122E53DDEDB3F266F3B8BB80A56E2E756315A (AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___other0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void JSNodeMap.Agent/AgentHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentHandler_EndInvoke_mB813A813768A6915668E219F504FF9F2A99E968D (AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_Multicast(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* currentDelegate = reinterpret_cast<MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___markerIndex0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_OpenInst(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___markerIndex0, method);
}
void MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_OpenStatic(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___markerIndex0, method);
}
void MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_OpenStaticInvoker(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___markerIndex0);
}
void MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_ClosedStaticInvoker(MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___markerIndex0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___markerIndex0);

}
// System.Void JSNodeMap.Agent/MarkerHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerHandler__ctor_m1CAB08399A9E12DC1AB916E219303ABFA3800E7A (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_Multicast;
}
// System.Void JSNodeMap.Agent/MarkerHandler::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236 (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___markerIndex0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult JSNodeMap.Agent/MarkerHandler::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MarkerHandler_BeginInvoke_m2386257328090AF94C67CF511414032718F72AFB (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___markerIndex0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void JSNodeMap.Agent/MarkerHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerHandler_EndInvoke_mC05E4AACA9D2FE31F9C6DB0F04645CE3E60A0CA8 (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_Multicast(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* currentDelegate = reinterpret_cast<SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_OpenInst(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_OpenStatic(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_OpenStaticInvoker(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_ClosedStaticInvoker(SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3 (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void JSNodeMap.Agent/SelfHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfHandler__ctor_m220A82F811F8A86DF2AE9EE2C61A55CF6CFD9DB9 (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_Multicast;
}
// System.Void JSNodeMap.Agent/SelfHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41 (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult JSNodeMap.Agent/SelfHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelfHandler_BeginInvoke_m23470E040E2E9D3BEF684FD167FB1A8D88A77C75 (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void JSNodeMap.Agent/SelfHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfHandler_EndInvoke_mB76D895BE81128DD3DF0D0A9A6393C7D2EE0505E (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSNodeMap.Agent/<MoveToTarget>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToTargetU3Ed__57__ctor_m82BB3BB0F04ADB25F67926FC8FBE6212A3815C66 (U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void JSNodeMap.Agent/<MoveToTarget>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToTargetU3Ed__57_System_IDisposable_Dispose_m129D96059609BD8F87589133342751F26E12337E (U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean JSNodeMap.Agent/<MoveToTarget>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveToTargetU3Ed__57_MoveNext_m34999B0FA7FC7120FDB6C444AC6A8A22BE1A3DB7 (U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m28BAF2D21404E6B86F22BAF0516DF53563ACE627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mB56BED6F063241818B7BE4ABF52899B5D2ABB4DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m1C7D61994AFFD7E101E2614AEECEB52D5B3AA679_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_01eb;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_01f2;
	}

IL_0026:
	{
		// float moveDist = Time.deltaTime * movementSpeed * movementFactor;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_5 = V_1;
		float L_6 = L_5->___movementSpeed_5;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_7 = V_1;
		float L_8 = L_7->___movementFactor_18;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_6)), L_8));
		// distTraveled += moveDist;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_9 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_10 = V_1;
		float L_11 = L_10->___distTraveled_19;
		float L_12 = V_2;
		L_9->___distTraveled_19 = ((float)il2cpp_codegen_add(L_11, L_12));
		// percentTraveled = distTraveled / onPath.Distance;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_13 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_14 = V_1;
		float L_15 = L_14->___distTraveled_19;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_16 = V_1;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_17 = L_16->___onPath_10;
		float L_18;
		L_18 = Path_get_Distance_mDF7F2DD98AEAB7728FBD7A53B8CA65E58A1D608F(L_17, NULL);
		L_13->___percentTraveled_20 = ((float)(L_15/L_18));
		// transform.position = Vector3.MoveTowards(transform.position, curWayPoint, moveDist);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_19 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_21 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___curWayPoint_17;
		float L_26 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_23, L_25, L_26, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_27, NULL);
		// if (nextMarkerIndex < markerPosList.Count && percentTraveled >= markerPosList[nextMarkerIndex]) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_28 = V_1;
		int32_t L_29 = L_28->___nextMarkerIndex_15;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_30 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_31 = L_30->___markerPosList_16;
		int32_t L_32;
		L_32 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_31, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_29) >= ((int32_t)L_32)))
		{
			goto IL_00d5;
		}
	}
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_33 = V_1;
		float L_34 = L_33->___percentTraveled_20;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_35 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_36 = L_35->___markerPosList_16;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_37 = V_1;
		int32_t L_38 = L_37->___nextMarkerIndex_15;
		float L_39;
		L_39 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_36, L_38, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		if ((!(((float)L_34) >= ((float)L_39))))
		{
			goto IL_00d5;
		}
	}
	{
		// if (OnMarkerTick != null) OnMarkerTick(nextMarkerIndex);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_40 = V_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_41 = L_40->___OnMarkerTick_29;
		if (!L_41)
		{
			goto IL_00c7;
		}
	}
	{
		// if (OnMarkerTick != null) OnMarkerTick(nextMarkerIndex);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_42 = V_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_43 = L_42->___OnMarkerTick_29;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_44 = V_1;
		int32_t L_45 = L_44->___nextMarkerIndex_15;
		MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_inline(L_43, L_45, NULL);
	}

IL_00c7:
	{
		// nextMarkerIndex++;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_46 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_47 = V_1;
		int32_t L_48 = L_47->___nextMarkerIndex_15;
		L_46->___nextMarkerIndex_15 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00d5:
	{
		// if (percentTraveled >= 0.99f) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_49 = V_1;
		float L_50 = L_49->___percentTraveled_20;
		if ((!(((float)L_50) >= ((float)(0.99000001f)))))
		{
			goto IL_01d6;
		}
	}
	{
		// nextMarkerIndex = 0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_51 = V_1;
		L_51->___nextMarkerIndex_15 = 0;
		// isMoving = true;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_52 = V_1;
		L_52->___isMoving_11 = (bool)1;
		// distTraveled = 0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_53 = V_1;
		L_53->___distTraveled_19 = (0.0f);
		// percentTraveled = 0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_54 = V_1;
		L_54->___percentTraveled_20 = (0.0f);
		// transform.position = curWayPoint;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_55 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_57 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = L_57->___curWayPoint_17;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_56, L_58, NULL);
		// currentNode = nodeRoute.Peek();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_59 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_60 = V_1;
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_61 = L_60->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_62;
		L_62 = Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B(L_61, Queue_1_Peek_mF90F8E515AF3155C057930A5F23C303C508A480B_RuntimeMethod_var);
		L_59->___currentNode_6 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&L_59->___currentNode_6), (void*)L_62);
		// lastNode = currentNode;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_63 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_64 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_65 = L_64->___currentNode_6;
		L_63->___lastNode_7 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&L_63->___lastNode_7), (void*)L_65);
		// nodeRoute.Dequeue();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_66 = V_1;
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_67 = L_66->___nodeRoute_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_68;
		L_68 = Queue_1_Dequeue_mB56BED6F063241818B7BE4ABF52899B5D2ABB4DB(L_67, Queue_1_Dequeue_mB56BED6F063241818B7BE4ABF52899B5D2ABB4DB_RuntimeMethod_var);
		// if (nodeRoute.Count == 0) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_69 = V_1;
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_70 = L_69->___nodeRoute_9;
		int32_t L_71;
		L_71 = Queue_1_get_Count_m1C7D61994AFFD7E101E2614AEECEB52D5B3AA679_inline(L_70, Queue_1_get_Count_m1C7D61994AFFD7E101E2614AEECEB52D5B3AA679_RuntimeMethod_var);
		if (L_71)
		{
			goto IL_01b6;
		}
	}
	{
		// isMoving = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_72 = V_1;
		L_72->___isMoving_11 = (bool)0;
		// doMoveToTarget = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_73 = V_1;
		L_73->___doMoveToTarget_13 = (bool)0;
		// targetNode = null;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_74 = V_1;
		L_74->___targetNode_8 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_74->___targetNode_8), (void*)(Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL);
		// distTraveled = 0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_75 = V_1;
		L_75->___distTraveled_19 = (0.0f);
		// currentNode.agentsAtNode.Add(this);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_76 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_77 = L_76->___currentNode_6;
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_78 = L_77->___agentsAtNode_11;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_79 = V_1;
		List_1_Add_m28BAF2D21404E6B86F22BAF0516DF53563ACE627_inline(L_78, L_79, List_1_Add_m28BAF2D21404E6B86F22BAF0516DF53563ACE627_RuntimeMethod_var);
		// if (OnMoveEnd != null) OnMoveEnd(currentNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_80 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_81 = L_80->___OnMoveEnd_24;
		if (!L_81)
		{
			goto IL_019a;
		}
	}
	{
		// if (OnMoveEnd != null) OnMoveEnd(currentNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_82 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_83 = L_82->___OnMoveEnd_24;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_84 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_85 = L_84->___currentNode_6;
		NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_inline(L_83, L_85, NULL);
	}

IL_019a:
	{
		// if (OnNodeArrive != null) OnNodeArrive(currentNode, true);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_86 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_87 = L_86->___OnNodeArrive_27;
		if (!L_87)
		{
			goto IL_01b4;
		}
	}
	{
		// if (OnNodeArrive != null) OnNodeArrive(currentNode, true);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_88 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_89 = L_88->___OnNodeArrive_27;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_90 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_91 = L_90->___currentNode_6;
		NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_inline(L_89, L_91, (bool)1, NULL);
	}

IL_01b4:
	{
		// yield break;
		return (bool)0;
	}

IL_01b6:
	{
		// if (OnNodeArrive != null) OnNodeArrive(currentNode, false);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_92 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_93 = L_92->___OnNodeArrive_27;
		if (!L_93)
		{
			goto IL_01d0;
		}
	}
	{
		// if (OnNodeArrive != null) OnNodeArrive(currentNode, false);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_94 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_95 = L_94->___OnNodeArrive_27;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_96 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_97 = L_96->___currentNode_6;
		NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_inline(L_95, L_97, (bool)0, NULL);
	}

IL_01d0:
	{
		// SetupPathAndMarkers();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_98 = V_1;
		Agent_SetupPathAndMarkers_m6D888AB4374A76885520956AD1073100FA3B66CE(L_98, NULL);
	}

IL_01d6:
	{
		// yield return wait;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_99 = V_1;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_100 = L_99->___wait_21;
		__this->___U3CU3E2__current_1 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_100);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_01eb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01f2:
	{
		// while (doMoveToTarget && doMove) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_101 = V_1;
		bool L_102 = L_101->___doMoveToTarget_13;
		if (!L_102)
		{
			goto IL_0205;
		}
	}
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_103 = V_1;
		bool L_104 = L_103->___doMove_12;
		if (L_104)
		{
			goto IL_0026;
		}
	}

IL_0205:
	{
		// }
		return (bool)0;
	}
}
// System.Object JSNodeMap.Agent/<MoveToTarget>d__57::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveToTargetU3Ed__57_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE3F0327D9514F7772C1CE78C5B524D15BE12ED0B (U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void JSNodeMap.Agent/<MoveToTarget>d__57::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToTargetU3Ed__57_System_Collections_IEnumerator_Reset_mC4DB2716677F99EC432F2EA322F00205F59B5D12 (U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveToTargetU3Ed__57_System_Collections_IEnumerator_Reset_mC4DB2716677F99EC432F2EA322F00205F59B5D12_RuntimeMethod_var)));
	}
}
// System.Object JSNodeMap.Agent/<MoveToTarget>d__57::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveToTargetU3Ed__57_System_Collections_IEnumerator_get_Current_m8B43AF67449B7B0B2D7AB0E2ADCFA2AE60A89CE9 (U3CMoveToTargetU3Ed__57_t8FA3AAC9665A601C2636C0DF0C467BC47468CC03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void JSNodeMap.Agent/<Retreat>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetreatU3Ed__58__ctor_m4982074BDF7ECAB71965A4B792B4522E7037F6CE (U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void JSNodeMap.Agent/<Retreat>d__58::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetreatU3Ed__58_System_IDisposable_Dispose_m2C1F1A19B83E64FFB1103FC7BE9E24475F870F2D (U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean JSNodeMap.Agent/<Retreat>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRetreatU3Ed__58_MoveNext_mAA28937C483A61DBEFCE1FAF50D8D2C5DBEC3E3A (U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m33695B3593B3804844113DBEE52C8780A6DADD6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_017c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0183;
	}

IL_0026:
	{
		// float moveDist = Time.deltaTime * movementSpeed * movementFactor;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_5 = V_1;
		float L_6 = L_5->___movementSpeed_5;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_7 = V_1;
		float L_8 = L_7->___movementFactor_18;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_6)), L_8));
		// distTraveled -= moveDist;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_9 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_10 = V_1;
		float L_11 = L_10->___distTraveled_19;
		float L_12 = V_2;
		L_9->___distTraveled_19 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// percentTraveled = distTraveled / onPath.Distance;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_13 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_14 = V_1;
		float L_15 = L_14->___distTraveled_19;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_16 = V_1;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_17 = L_16->___onPath_10;
		float L_18;
		L_18 = Path_get_Distance_mDF7F2DD98AEAB7728FBD7A53B8CA65E58A1D608F(L_17, NULL);
		L_13->___percentTraveled_20 = ((float)(L_15/L_18));
		// transform.position = Vector3.MoveTowards(transform.position, lastNode.transform.position, moveDist);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_19 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_21 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_24 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25 = L_24->___lastNode_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_23, L_27, L_28, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_29, NULL);
		// if (nextMarkerIndex >= 0 && percentTraveled <= markerPosList[nextMarkerIndex]) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_30 = V_1;
		int32_t L_31 = L_30->___nextMarkerIndex_15;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_32 = V_1;
		float L_33 = L_32->___percentTraveled_20;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_34 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_35 = L_34->___markerPosList_16;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_36 = V_1;
		int32_t L_37 = L_36->___nextMarkerIndex_15;
		float L_38;
		L_38 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_35, L_37, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		if ((!(((float)L_33) <= ((float)L_38))))
		{
			goto IL_00d5;
		}
	}
	{
		// if (OnMarkerTick != null) OnMarkerTick(nextMarkerIndex);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_39 = V_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_40 = L_39->___OnMarkerTick_29;
		if (!L_40)
		{
			goto IL_00c7;
		}
	}
	{
		// if (OnMarkerTick != null) OnMarkerTick(nextMarkerIndex);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_41 = V_1;
		MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* L_42 = L_41->___OnMarkerTick_29;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_43 = V_1;
		int32_t L_44 = L_43->___nextMarkerIndex_15;
		MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_inline(L_42, L_44, NULL);
	}

IL_00c7:
	{
		// nextMarkerIndex--;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_45 = V_1;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_46 = V_1;
		int32_t L_47 = L_46->___nextMarkerIndex_15;
		L_45->___nextMarkerIndex_15 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
	}

IL_00d5:
	{
		// if (percentTraveled <= 0.01f) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_48 = V_1;
		float L_49 = L_48->___percentTraveled_20;
		if ((!(((float)L_49) <= ((float)(0.00999999978f)))))
		{
			goto IL_0167;
		}
	}
	{
		// nextMarkerIndex = 0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_50 = V_1;
		L_50->___nextMarkerIndex_15 = 0;
		// transform.position = lastNode.transform.position;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_51 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_53 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_54 = L_53->___lastNode_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_52, L_56, NULL);
		// nodeRoute.Clear();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_57 = V_1;
		Queue_1_t495BA13141A7AA17724922B9B049A495295C4A2A* L_58 = L_57->___nodeRoute_9;
		Queue_1_Clear_m33695B3593B3804844113DBEE52C8780A6DADD6C(L_58, Queue_1_Clear_m33695B3593B3804844113DBEE52C8780A6DADD6C_RuntimeMethod_var);
		// if (OnNodeArrive != null) OnNodeArrive(lastNode, true);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_59 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_60 = L_59->___OnNodeArrive_27;
		if (!L_60)
		{
			goto IL_012c;
		}
	}
	{
		// if (OnNodeArrive != null) OnNodeArrive(lastNode, true);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_61 = V_1;
		NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* L_62 = L_61->___OnNodeArrive_27;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_63 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_64 = L_63->___lastNode_7;
		NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_inline(L_62, L_64, (bool)1, NULL);
	}

IL_012c:
	{
		// targetNode = null;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_65 = V_1;
		L_65->___targetNode_8 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_65->___targetNode_8), (void*)(Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL);
		// isMoving = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_66 = V_1;
		L_66->___isMoving_11 = (bool)0;
		// doRetreat = false;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_67 = V_1;
		L_67->___doRetreat_14 = (bool)0;
		// distTraveled = 0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_68 = V_1;
		L_68->___distTraveled_19 = (0.0f);
		// if (OnMoveEnd != null) OnMoveEnd(lastNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_69 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_70 = L_69->___OnMoveEnd_24;
		if (!L_70)
		{
			goto IL_0165;
		}
	}
	{
		// if (OnMoveEnd != null) OnMoveEnd(lastNode);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_71 = V_1;
		NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* L_72 = L_71->___OnMoveEnd_24;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_73 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_74 = L_73->___lastNode_7;
		NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_inline(L_72, L_74, NULL);
	}

IL_0165:
	{
		// yield break;
		return (bool)0;
	}

IL_0167:
	{
		// yield return wait;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_75 = V_1;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_76 = L_75->___wait_21;
		__this->___U3CU3E2__current_1 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_76);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_017c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0183:
	{
		// while (doRetreat && doMove) {
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_77 = V_1;
		bool L_78 = L_77->___doRetreat_14;
		if (!L_78)
		{
			goto IL_0196;
		}
	}
	{
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_79 = V_1;
		bool L_80 = L_79->___doMove_12;
		if (L_80)
		{
			goto IL_0026;
		}
	}

IL_0196:
	{
		// }
		return (bool)0;
	}
}
// System.Object JSNodeMap.Agent/<Retreat>d__58::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRetreatU3Ed__58_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD240AB26851C25137E9DA06623F4334A4F4F58A2 (U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void JSNodeMap.Agent/<Retreat>d__58::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetreatU3Ed__58_System_Collections_IEnumerator_Reset_m6C829FA86CE531E8FC8C50ACBD3240D2D4C6DEDC (U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRetreatU3Ed__58_System_Collections_IEnumerator_Reset_m6C829FA86CE531E8FC8C50ACBD3240D2D4C6DEDC_RuntimeMethod_var)));
	}
}
// System.Object JSNodeMap.Agent/<Retreat>d__58::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRetreatU3Ed__58_System_Collections_IEnumerator_get_Current_m5833A0C7984F6DBDDF498F347EFB3F570BF731CF (U3CRetreatU3Ed__58_t51EBDA070DE84DA481570FFD8CB01FC056AA6A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void JSNodeMap.Map::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_OnValidate_m955BCC6A00DBA82264392556F506B5E2FE1F7FCF (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	{
		// defaultMarkerSpacing = Mathf.Max (0.01f, defaultMarkerSpacing);
		float L_0 = __this->___defaultMarkerSpacing_5;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.00999999978f), L_0, NULL);
		__this->___defaultMarkerSpacing_5 = L_1;
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_OnDrawGizmos_mA60A529F86998F46A39486487E975734AE87F434 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	{
		// nodeScale = Mathf.Clamp (nodeScale, 0, System.Single.MaxValue);
		float L_0 = __this->___nodeScale_8;
		float L_1;
		L_1 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_0, (0.0f), ((std::numeric_limits<float>::max)()), NULL);
		__this->___nodeScale_8 = L_1;
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::ResizeNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_ResizeNodes_m9BDE1AB7AAC08EE452E9E11F483C2ECF3A10C8F5 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* V_0 = NULL;
	int32_t V_1 = 0;
	PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// Node[] nodes = GetComponentsInChildren<Node> ();
		NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* L_0;
		L_0 = Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2(__this, Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2_RuntimeMethod_var);
		// foreach (Node node in nodes) {
		V_0 = L_0;
		V_1 = 0;
		goto IL_0090;
	}

IL_000e:
	{
		// foreach (Node node in nodes) {
		NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// node.gameObject.transform.localScale = new Vector3 (nodeScale, nodeScale, nodeScale);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8 = __this->___nodeScale_8;
		float L_9 = __this->___nodeScale_8;
		float L_10 = __this->___nodeScale_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_11, NULL);
		// Path[] paths = node.transform.GetComponentsInChildren<Path> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_13;
		L_13 = Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F(L_12, Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var);
		// foreach (Path path in paths) {
		V_2 = L_13;
		V_3 = 0;
		goto IL_0086;
	}

IL_0047:
	{
		// foreach (Path path in paths) {
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		// path.gameObject.transform.localScale = new Vector3 (1f / nodeScale, 1f / nodeScale, 1f / nodeScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		float L_20 = __this->___nodeScale_8;
		float L_21 = __this->___nodeScale_8;
		float L_22 = __this->___nodeScale_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)((1.0f)/L_20)), ((float)((1.0f)/L_21)), ((float)((1.0f)/L_22)), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_23, NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0086:
	{
		// foreach (Path path in paths) {
		int32_t L_25 = V_3;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0090:
	{
		// foreach (Node node in nodes) {
		int32_t L_28 = V_1;
		NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// JSNodeMap.Path JSNodeMap.Map::FindValidPath(JSNodeMap.Node,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* Map_FindValidPath_m9F25634F168EF72B7341E829D11A7452C807A5AF (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___nodeA0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___nodeB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mEF32A6D489769E95C2B80DA3CFA9EBEC90B7FD45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* V_0 = NULL;
	int32_t V_1 = 0;
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_2 = NULL;
	{
		// Path[] paths = nodeA.paths.Concat (nodeB.paths).ToArray ();
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___nodeA0;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_1 = L_0->___paths_12;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = ___nodeB1;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_3 = L_2->___paths_12;
		RuntimeObject* L_4;
		L_4 = Enumerable_Concat_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mEF32A6D489769E95C2B80DA3CFA9EBEC90B7FD45(L_1, L_3, Enumerable_Concat_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mEF32A6D489769E95C2B80DA3CFA9EBEC90B7FD45_RuntimeMethod_var);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_5;
		L_5 = Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0(L_4, Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0_RuntimeMethod_var);
		// foreach (Path path in paths) {
		V_0 = L_5;
		V_1 = 0;
		goto IL_0065;
	}

IL_001b:
	{
		// foreach (Path path in paths) {
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (path.IsValid () == false) {
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_10 = V_2;
		bool L_11;
		L_11 = Path_IsValid_m42E946CA82F60FEB1E456CD0FD5F4750E8ADBB50(L_10, NULL);
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// if ((path.toNode == nodeB && path.fromNode == nodeA) || (path.toNode == nodeA && path.fromNode == nodeB)) {
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_12 = V_2;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_13 = L_12->___toNode_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = ___nodeB1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0043;
		}
	}
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_16 = V_2;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_17 = L_16->___fromNode_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_18 = ___nodeA0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_17, L_18, NULL);
		if (L_19)
		{
			goto IL_005f;
		}
	}

IL_0043:
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_20 = V_2;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_21 = L_20->___toNode_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_22 = ___nodeA0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_24 = V_2;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25 = L_24->___fromNode_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_26 = ___nodeB1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_25, L_26, NULL);
		if (!L_27)
		{
			goto IL_0061;
		}
	}

IL_005f:
	{
		// return path;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_28 = V_2;
		return L_28;
	}

IL_0061:
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0065:
	{
		// foreach (Path path in paths) {
		int32_t L_30 = V_1;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// return null;
		return (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41*)NULL;
	}
}
// UnityEngine.Vector3 JSNodeMap.Map::GetPointOnPath(JSNodeMap.Path,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Map_GetPointOnPath_mD244D42A53DFEDF7C9B283004846C9C88E0A7807 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, float ___normalizedDistance1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (path.IsValid () == false) {
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_0 = ___path0;
		bool L_1;
		L_1 = Path_IsValid_m42E946CA82F60FEB1E456CD0FD5F4750E8ADBB50(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_2;
	}

IL_000e:
	{
		// normalizedDistance = Mathf.Clamp (normalizedDistance, 0f, 1f);
		float L_3 = ___normalizedDistance1;
		float L_4;
		L_4 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_3, (0.0f), (1.0f), NULL);
		___normalizedDistance1 = L_4;
		// Vector3 pointA = path.fromNode.transform.position;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_5 = ___path0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_6 = L_5->___fromNode_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_0 = L_8;
		// Vector3 pointB = path.toNode.transform.position;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_9 = ___path0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_10 = L_9->___toNode_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		V_1 = L_12;
		// Vector3 pos = pointA + (pointB - pointA) * normalizedDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_14, L_15, NULL);
		float L_17 = ___normalizedDistance1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_18, NULL);
		// return pos;
		return L_19;
	}
}
// System.Void JSNodeMap.Map::RemovePath(JSNodeMap.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_RemovePath_m4ABF5CA258C829430522FB4A32D053AADCFD1959 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD843643B675C8DB54CBDDB3777548DCEC42A59F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (path == null) return;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_0 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (path == null) return;
		return;
	}

IL_000a:
	{
		// path.fromNode.paths.Remove (path);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_2 = ___path0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = L_2->___fromNode_4;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_4 = L_3->___paths_12;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_5 = ___path0;
		bool L_6;
		L_6 = List_1_Remove_mD843643B675C8DB54CBDDB3777548DCEC42A59F1(L_4, L_5, List_1_Remove_mD843643B675C8DB54CBDDB3777548DCEC42A59F1_RuntimeMethod_var);
		// path.fromNode = null;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_7 = ___path0;
		L_7->___fromNode_4 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___fromNode_4), (void*)(Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL);
		// path.toNode = null;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_8 = ___path0;
		L_8->___toNode_5 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___toNode_5), (void*)(Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL);
		// DestroyImmediate (path.gameObject);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_9 = ___path0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_10, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::RemoveNode(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_RemoveNode_m1C0EC27216796D1B0392AA03A591312A714BEE75 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (node == null) return;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (node == null) return;
		return;
	}

IL_000a:
	{
		// foreach (Path path in node.paths) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = ___node0;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_3 = L_2->___paths_12;
		Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 L_4;
		L_4 = List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160(L_3, List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45((&V_0), Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_0018_1:
			{
				// foreach (Path path in node.paths) {
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_5;
				L_5 = Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_inline((&V_0), Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
				// RemovePath (path);
				Map_RemovePath_m4ABF5CA258C829430522FB4A32D053AADCFD1959(L_5, NULL);
			}

IL_0024_1:
			{
				// foreach (Path path in node.paths) {
				bool L_6;
				L_6 = Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77((&V_0), Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// node.nodeMap.ClearPathsToNode (node);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_7 = ___node0;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_8 = L_7->___nodeMap_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_9 = ___node0;
		Map_ClearPathsToNode_m597376F34C525AA3FE0B348BC83823D274FE1ED7(L_8, L_9, NULL);
		// node.nodeMap.mapNodes.Remove (node);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_10 = ___node0;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_11 = L_10->___nodeMap_10;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_12 = L_11->___mapNodes_16;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_13 = ___node0;
		bool L_14;
		L_14 = List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8(L_12, L_13, List_1_Remove_m21BF8B9D6370A37550BBDBC0935670538F1308A8_RuntimeMethod_var);
		// DestroyImmediate (node.gameObject);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_15 = ___node0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_16, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::ClearPathsToNode(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_ClearPathsToNode_m597376F34C525AA3FE0B348BC83823D274FE1ED7 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___clearNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* V_0 = NULL;
	int32_t V_1 = 0;
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_2 = NULL;
	{
		// Path[] delPaths = GetPathsToNode (clearNode);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___clearNode0;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_1;
		L_1 = Map_GetPathsToNode_m63C889E70D58D45C07870FE0739FDCC3BD6B4200(__this, L_0, NULL);
		// foreach (Path path in delPaths) {
		V_0 = L_1;
		V_1 = 0;
		goto IL_0028;
	}

IL_000c:
	{
		// foreach (Path path in delPaths) {
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (path != null) DestroyImmediate (path.gameObject);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		// if (path != null) DestroyImmediate (path.gameObject);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_8 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_9, NULL);
	}

IL_0024:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0028:
	{
		// foreach (Path path in delPaths) {
		int32_t L_11 = V_1;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// Refresh ();
		Map_Refresh_m3766143B274B49B6D0607D8DB6D7483AEA8E2AA2(__this, NULL);
		// }
		return;
	}
}
// JSNodeMap.Agent JSNodeMap.Map::CreateAgent(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* Map_CreateAgent_m456690E85646E02054DA583BFB6758B1C3E3DF2E (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mF0EE1B4FEF03F256178F1E29C8CBAF60ABA15ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mF8F72AAC87DD0BC1F8F446644AFE6B61CB489D92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m28BAF2D21404E6B86F22BAF0516DF53563ACE627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21049EC8716EC0ADF829B7827C722840273652C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74CDE587F3A0A180B82A71B5CC32DC029F2CEEA7);
		s_Il2CppMethodInitialized = true;
	}
	Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_2 = NULL;
	{
		// if (node == null) node = transform.GetComponentInChildren<Node> ();
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (node == null) node = transform.GetComponentInChildren<Node> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3;
		L_3 = Component_GetComponentInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mF0EE1B4FEF03F256178F1E29C8CBAF60ABA15ABD(L_2, Component_GetComponentInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mF0EE1B4FEF03F256178F1E29C8CBAF60ABA15ABD_RuntimeMethod_var);
		___node0 = L_3;
	}

IL_0016:
	{
		// if (node == null) return null;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// if (node == null) return null;
		return (Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92*)NULL;
	}

IL_0021:
	{
		// GameObject newAgentObj = new GameObject ("Agent");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteral74CDE587F3A0A180B82A71B5CC32DC029F2CEEA7, NULL);
		// newAgentObj.transform.SetParent (transform.Find ("Agents"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_9, _stringLiteral21049EC8716EC0ADF829B7827C722840273652C1, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_8, L_10, NULL);
		// newAgentObj.transform.position = (node != null) ? node.transform.position : Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_13 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = L_12;
		G_B5_1 = L_11;
		if (L_14)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_11;
			goto IL_005c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		G_B7_0 = L_15;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0067;
	}

IL_005c:
	{
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_16 = ___node0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		G_B7_0 = L_18;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0067:
	{
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B7_1, G_B7_0, NULL);
		// newAgentObj.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = G_B7_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_21, NULL);
		// Agent newAgent = newAgentObj.AddComponent<Agent> ();
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_22;
		L_22 = GameObject_AddComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mF8F72AAC87DD0BC1F8F446644AFE6B61CB489D92(L_19, GameObject_AddComponent_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mF8F72AAC87DD0BC1F8F446644AFE6B61CB489D92_RuntimeMethod_var);
		V_0 = L_22;
		// newAgent.Initialize (this, node);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_23 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_24 = ___node0;
		Agent_Initialize_mF6B63BF8CF76F6F7D2CD0ACAE816B28F0B26B351(L_23, __this, L_24, NULL);
		// mapAgents.Add (newAgent);
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_25 = __this->___mapAgents_17;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_26 = V_0;
		List_1_Add_m28BAF2D21404E6B86F22BAF0516DF53563ACE627_inline(L_25, L_26, List_1_Add_m28BAF2D21404E6B86F22BAF0516DF53563ACE627_RuntimeMethod_var);
		// return newAgent;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_27 = V_0;
		return L_27;
	}
}
// JSNodeMap.Node JSNodeMap.Map::CreateNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Map_CreateNode_m8A5F530EA7E515A9C6820447B66D6E9855BEF7B0 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m57C810460D278689E1EB4D76F996B99E82558A3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800887583098E85FC30F11258ADBB87A8CDBED7E);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_1 = NULL;
	{
		// GameObject newNodeObj = new GameObject ("Node " + mapNodes.Count);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_0 = __this->___mapNodes_16;
		int32_t L_1;
		L_1 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_0, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		V_2 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, L_3, NULL);
		// newNodeObj.transform.SetParent (transform.Find ("Nodes"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_7, _stringLiteral800887583098E85FC30F11258ADBB87A8CDBED7E, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_8, NULL);
		// newNodeObj.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// newNodeObj.transform.localScale = new Vector3(nodeScale, nodeScale, nodeScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		float L_14 = __this->___nodeScale_8;
		float L_15 = __this->___nodeScale_8;
		float L_16 = __this->___nodeScale_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_17, NULL);
		// Quaternion objRot = (drawMode == DrawMode.Object) ? Quaternion.identity : Quaternion.Euler (90f, 0f, 0f);
		int32_t L_18 = __this->___drawMode_7;
		G_B1_0 = L_12;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			G_B2_0 = L_12;
			goto IL_008e;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((90.0f), (0.0f), (0.0f), NULL);
		G_B3_0 = L_19;
		G_B3_1 = G_B1_0;
		goto IL_0093;
	}

IL_008e:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		G_B3_0 = L_20;
		G_B3_1 = G_B2_0;
	}

IL_0093:
	{
		V_0 = G_B3_0;
		// newNodeObj.transform.localRotation = objRot;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = G_B3_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_0;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_23, NULL);
		// newNodeObj.isStatic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_21;
		GameObject_set_isStatic_m0468F0E4553F5B3DDBE03F3788BE0A1A3736839C(L_24, (bool)1, NULL);
		// Node newNode = newNodeObj.AddComponent<Node> ();
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25;
		L_25 = GameObject_AddComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m57C810460D278689E1EB4D76F996B99E82558A3C(L_24, GameObject_AddComponent_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m57C810460D278689E1EB4D76F996B99E82558A3C_RuntimeMethod_var);
		V_1 = L_25;
		// newNode.Initialize (this);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_26 = V_1;
		Node_Initialize_mFA59D2AC5698FF90B947B3CCA7DBC9254F50A23E(L_26, __this, NULL);
		// mapNodes.Add (newNode);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_27 = __this->___mapNodes_16;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_28 = V_1;
		List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_inline(L_27, L_28, List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_RuntimeMethod_var);
		// return newNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_29 = V_1;
		return L_29;
	}
}
// JSNodeMap.Node JSNodeMap.Map::GetNodeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Map_GetNodeByName_mBB8C0B15675C812407C53EE15ADE914A9E334B69 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m510AB99D1BE42EFD69C2A691C8C83D0E900BF2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_U3CGetNodeByNameU3Eb__0_mD625C3C7EB8D55E704190A90DEF254950652BA2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18* L_0 = (U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass26_0__ctor_m2A3F9BF863812499B2902308FE3164B863E37104(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18* L_1 = V_0;
		String_t* L_2 = ___name0;
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		// return mapNodes.FirstOrDefault (n => n.nodeName == name);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_3 = __this->___mapNodes_16;
		U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18* L_4 = V_0;
		Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2* L_5 = (Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2*)il2cpp_codegen_object_new(Func_2_tA3346E00CE123EE6D5F912413590576947D8B9A2_il2cpp_TypeInfo_var);
		Func_2__ctor_m3FD2616646C293C2CBF42EBD91FF31F5C742AD57(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass26_0_U3CGetNodeByNameU3Eb__0_mD625C3C7EB8D55E704190A90DEF254950652BA2E_RuntimeMethod_var), NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_6;
		L_6 = Enumerable_FirstOrDefault_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m510AB99D1BE42EFD69C2A691C8C83D0E900BF2AE(L_3, L_5, Enumerable_FirstOrDefault_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m510AB99D1BE42EFD69C2A691C8C83D0E900BF2AE_RuntimeMethod_var);
		return L_6;
	}
}
// JSNodeMap.Path[] JSNodeMap.Map::GetPathsToNode(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* Map_GetPathsToNode_m63C889E70D58D45C07870FE0739FDCC3BD6B4200 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m23846E1021C3A13697C7D1320F51D6BC290E455A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m06AA2F401C60886DC963EF3F8CB2A17717EAC37A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetPathsToNodeU3Eb__27_0_m039E18F5D8B4B99C441F2CF5F676C9F68F1E580B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CGetPathsToNodeU3Eb__1_mE6F50D90451BDE87ECF74F44CC68F5A73EAE9F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE* V_0 = NULL;
	Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* G_B2_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* G_B2_1 = NULL;
	Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* G_B1_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE* L_0 = (U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass27_0__ctor_mBD436E6319495D0F96708FC9AE7DBDAAF1428DE4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE* L_1 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = ___node0;
		L_1->___node_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___node_0), (void*)L_2);
		// return mapNodes.SelectMany (n => n.paths).Where (p => p.toNode == node).ToArray ();
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_3 = __this->___mapNodes_16;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var);
		Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* L_4 = ((U3CU3Ec_t7130047096722E1057A70161B316705357013632_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1;
		Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var);
		U3CU3Ec_t7130047096722E1057A70161B316705357013632* L_6 = ((U3CU3Ec_t7130047096722E1057A70161B316705357013632_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* L_7 = (Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2*)il2cpp_codegen_object_new(Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2_il2cpp_TypeInfo_var);
		Func_2__ctor_m429C742B27A288E41344FE2CB1A7FCE8CDCEF209(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CGetPathsToNodeU3Eb__27_0_m039E18F5D8B4B99C441F2CF5F676C9F68F1E580B_RuntimeMethod_var), NULL);
		Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* L_8 = L_7;
		((U3CU3Ec_t7130047096722E1057A70161B316705357013632_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7130047096722E1057A70161B316705357013632_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_0032:
	{
		RuntimeObject* L_9;
		L_9 = Enumerable_SelectMany_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m23846E1021C3A13697C7D1320F51D6BC290E455A(G_B2_1, G_B2_0, Enumerable_SelectMany_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m23846E1021C3A13697C7D1320F51D6BC290E455A_RuntimeMethod_var);
		U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE* L_10 = V_0;
		Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* L_11 = (Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94*)il2cpp_codegen_object_new(Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94_il2cpp_TypeInfo_var);
		Func_2__ctor_m79532BB9BE1562F4A6834A6A15A77F604D0BA1D0(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass27_0_U3CGetPathsToNodeU3Eb__1_mE6F50D90451BDE87ECF74F44CC68F5A73EAE9F8B_RuntimeMethod_var), NULL);
		RuntimeObject* L_12;
		L_12 = Enumerable_Where_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m06AA2F401C60886DC963EF3F8CB2A17717EAC37A(L_9, L_11, Enumerable_Where_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m06AA2F401C60886DC963EF3F8CB2A17717EAC37A_RuntimeMethod_var);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_13;
		L_13 = Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0(L_12, Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0_RuntimeMethod_var);
		return L_13;
	}
}
// System.Int32 JSNodeMap.Map::GetNodeTypeIndexByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Map_GetNodeTypeIndexByName_m33020FBA1F462B2BBF28158379C56B1BE68988AD (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, String_t* ___typeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindIndex_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_m3546D285CA595CF914C57DC1463DF14F8F439511_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_U3CGetNodeTypeIndexByNameU3Eb__0_m308C64E60817A9370748BC355A1F9928AEED5ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82* L_0 = (U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass28_0__ctor_m2A3C63764B02CF39D685DA0818B4C0F11CA5C908(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82* L_1 = V_0;
		String_t* L_2 = ___typeName0;
		L_1->___typeName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___typeName_0), (void*)L_2);
		// return System.Array.FindIndex(nodeData.nodeTypes, t => t.name == typeName);
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_3 = __this->___nodeData_15;
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_4 = L_3->___nodeTypes_4;
		U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82* L_5 = V_0;
		Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A* L_6 = (Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A*)il2cpp_codegen_object_new(Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m09A55F0B9626C88059B299817A3349A6A260F235(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass28_0_U3CGetNodeTypeIndexByNameU3Eb__0_m308C64E60817A9370748BC355A1F9928AEED5ACF_RuntimeMethod_var), NULL);
		int32_t L_7;
		L_7 = Array_FindIndex_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_m3546D285CA595CF914C57DC1463DF14F8F439511(L_4, L_6, Array_FindIndex_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_m3546D285CA595CF914C57DC1463DF14F8F439511_RuntimeMethod_var);
		return L_7;
	}
}
// System.Int32 JSNodeMap.Map::GetMarkerTypeIndexByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Map_GetMarkerTypeIndexByName_m20430DD3C74C06B9695F81D49E51C526FF02AB5B (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, String_t* ___typeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindIndex_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_m3546D285CA595CF914C57DC1463DF14F8F439511_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CGetMarkerTypeIndexByNameU3Eb__0_m3FFCA3511D9708CA057DF22C06A1F4D51F0F0670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77* L_0 = (U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass29_0__ctor_m740430DE46B1171796CB40E74E234D6B109F3032(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77* L_1 = V_0;
		String_t* L_2 = ___typeName0;
		L_1->___typeName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___typeName_0), (void*)L_2);
		// return System.Array.FindIndex(nodeData.markerTypes, t => t.name == typeName);
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_3 = __this->___nodeData_15;
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_4 = L_3->___markerTypes_5;
		U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77* L_5 = V_0;
		Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A* L_6 = (Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A*)il2cpp_codegen_object_new(Predicate_1_t532A2E5192A23AA9D2EC67E19A4FDF7D38411E2A_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m09A55F0B9626C88059B299817A3349A6A260F235(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CGetMarkerTypeIndexByNameU3Eb__0_m3FFCA3511D9708CA057DF22C06A1F4D51F0F0670_RuntimeMethod_var), NULL);
		int32_t L_7;
		L_7 = Array_FindIndex_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_m3546D285CA595CF914C57DC1463DF14F8F439511(L_4, L_6, Array_FindIndex_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_m3546D285CA595CF914C57DC1463DF14F8F439511_RuntimeMethod_var);
		return L_7;
	}
}
// System.Int32 JSNodeMap.Map::GetAgentTypeIndexByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Map_GetAgentTypeIndexByName_m70DED5AFDB035928126DC1A5C65D9DACEB90F81A (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, String_t* ___typeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisString_t_m9107AABCE77608D1D21B9ECB6DA42D0D4334AF32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return System.Array.IndexOf(agentTypes, typeName);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___agentTypes_18;
		String_t* L_1 = ___typeName0;
		int32_t L_2;
		L_2 = Array_IndexOf_TisString_t_m9107AABCE77608D1D21B9ECB6DA42D0D4334AF32(L_0, L_1, Array_IndexOf_TisString_t_m9107AABCE77608D1D21B9ECB6DA42D0D4334AF32_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean JSNodeMap.Map::IsNodeType(JSNodeMap.Node,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Map_IsNodeType_mA0F9C7A448AEAD4E345A8714E333377836C5B18E (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, String_t* ___typeName1, const RuntimeMethod* method) 
{
	{
		// return node.nodeType == GetNodeTypeIndexByName(typeName);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___node0;
		int32_t L_1 = L_0->___nodeType_9;
		String_t* L_2 = ___typeName1;
		int32_t L_3;
		L_3 = Map_GetNodeTypeIndexByName_m33020FBA1F462B2BBF28158379C56B1BE68988AD(__this, L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean JSNodeMap.Map::IsMarkerType(JSNodeMap.Marker,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Map_IsMarkerType_mA50A567AF9C195C1AAD46902E69D0EDDA00F93F4 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* ___marker0, String_t* ___typeName1, const RuntimeMethod* method) 
{
	{
		// return marker.markerType == GetMarkerTypeIndexByName(typeName);
		Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* L_0 = ___marker0;
		int32_t L_1 = L_0->___markerType_7;
		String_t* L_2 = ___typeName1;
		int32_t L_3;
		L_3 = Map_GetMarkerTypeIndexByName_m20430DD3C74C06B9695F81D49E51C526FF02AB5B(__this, L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean JSNodeMap.Map::IsAgentType(JSNodeMap.Agent,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Map_IsAgentType_m94001BBFEC0EA739AFC8685AB916FE73D4275DE1 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent0, String_t* ___typeName1, const RuntimeMethod* method) 
{
	{
		// return agent.agentType == GetAgentTypeIndexByName(typeName);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = ___agent0;
		int32_t L_1 = L_0->___agentType_4;
		String_t* L_2 = ___typeName1;
		int32_t L_3;
		L_3 = Map_GetAgentTypeIndexByName_m70DED5AFDB035928126DC1A5C65D9DACEB90F81A(__this, L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Void JSNodeMap.Map::RedrawMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_RedrawMap_mBC318E2003D54B51D51F6147EBF42461DA18A9DC (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, bool ___drawModeChanged0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mBE8463D568DB43B7C29149972FF34548636B931A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_3 = NULL;
	{
		// Refresh();
		Map_Refresh_m3766143B274B49B6D0607D8DB6D7483AEA8E2AA2(__this, NULL);
		// if (mapNodes == null || mapNodes.Count == 0) {
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_0 = __this->___mapNodes_16;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_1 = __this->___mapNodes_16;
		int32_t L_2;
		L_2 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_1, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0031;
		}
	}

IL_001b:
	{
		// mapNodes = transform.GetComponentsInChildren<Node> ().ToList ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* L_4;
		L_4 = Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2(L_3, Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2_RuntimeMethod_var);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_5;
		L_5 = Enumerable_ToList_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mBE8463D568DB43B7C29149972FF34548636B931A((RuntimeObject*)L_4, Enumerable_ToList_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mBE8463D568DB43B7C29149972FF34548636B931A_RuntimeMethod_var);
		__this->___mapNodes_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapNodes_16), (void*)L_5);
	}

IL_0031:
	{
		// foreach (Node node in mapNodes) {
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_6 = __this->___mapNodes_16;
		Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 L_7;
		L_7 = List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA(L_6, List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2((&V_0), Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e4_1;
			}

IL_0042_1:
			{
				// foreach (Node node in mapNodes) {
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_8;
				L_8 = Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_inline((&V_0), Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
				V_1 = L_8;
				// if (drawModeChanged) {
				bool L_9 = ___drawModeChanged0;
				if (!L_9)
				{
					goto IL_006b_1;
				}
			}
			{
				// node.SetDrawMode (drawMode, nodeData);
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_10 = V_1;
				int32_t L_11 = __this->___drawMode_7;
				NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_12 = __this->___nodeData_15;
				Node_SetDrawMode_m44B71D8B76BBFDB61EA53DC176A618004E980AD5(L_10, L_11, L_12, NULL);
				// node.SetVisible (node.drawNode);
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_13 = V_1;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = V_1;
				bool L_15 = L_14->___drawNode_13;
				Node_SetVisible_m28C300ECB94CFCC5305156892C1CBD337A2D7591(L_13, L_15, NULL);
			}

IL_006b_1:
			{
				// if (node.paths == null || node.paths.Count == 0) {
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_16 = V_1;
				List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_17 = L_16->___paths_12;
				if (!L_17)
				{
					goto IL_0080_1;
				}
			}
			{
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_18 = V_1;
				List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_19 = L_18->___paths_12;
				int32_t L_20;
				L_20 = List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_inline(L_19, List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0096_1;
				}
			}

IL_0080_1:
			{
				// node.paths = node.transform.GetComponentsInChildren<Path> ().ToList ();
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_21 = V_1;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_22 = V_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
				L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
				PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_24;
				L_24 = Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F(L_23, Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var);
				List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_25;
				L_25 = Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B((RuntimeObject*)L_24, Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B_RuntimeMethod_var);
				L_21->___paths_12 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&L_21->___paths_12), (void*)L_25);
			}

IL_0096_1:
			{
				// foreach (Path path in node.paths) {
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_26 = V_1;
				List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_27 = L_26->___paths_12;
				Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 L_28;
				L_28 = List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160(L_27, List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
				V_2 = L_28;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d6_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45((&V_2), Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00cb_2;
					}

IL_00a4_2:
					{
						// foreach (Path path in node.paths) {
						Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_29;
						L_29 = Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_inline((&V_2), Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
						V_3 = L_29;
						// path.RedrawMarkers ();
						Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_30 = V_3;
						Path_RedrawMarkers_m54F15670819F11959677E88870658AEBEABB7C8C(L_30, NULL);
						// if (path.drawLine) {
						Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_31 = V_3;
						bool L_32 = L_31->___drawLine_8;
						if (!L_32)
						{
							goto IL_00cb_2;
						}
					}
					{
						// path.line.widthMultiplier = lineWidth;
						Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_33 = V_3;
						LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_34 = L_33->___line_21;
						float L_35 = __this->___lineWidth_12;
						LineRenderer_set_widthMultiplier_mB1B825C2AAE0BB5F05431DEDAC5856EF27478255(L_34, L_35, NULL);
					}

IL_00cb_2:
					{
						// foreach (Path path in node.paths) {
						bool L_36;
						L_36 = Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77((&V_2), Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
						if (L_36)
						{
							goto IL_00a4_2;
						}
					}
					{
						goto IL_00e4_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00e4_1:
			{
				// foreach (Node node in mapNodes) {
				bool L_37;
				L_37 = Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534((&V_0), Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_0042_1;
				}
			}
			{
				goto IL_0100;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0100:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_Refresh_m3766143B274B49B6D0607D8DB6D7483AEA8E2AA2 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m0BFCFA930C3843F9B0087E7C9DBAFD35D5DDBE11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mCF6D432845186A61BE3D3BCCD11FCA73949D3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mBE8463D568DB43B7C29149972FF34548636B931A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD620A7974C8D360B9FA4D64DD9F2F18F99D2197A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0CACFCB8F3E5FA3F60B8DF68A397D83DC7F8A1DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mFAC47DFB4C7E4101D80AE119F00A79E6E53F77CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m01125645B2BA4542B32A3D6675A49C334C73C362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6C41FB8D537D7DADB853D470C78C5497E88A5B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* V_2 = NULL;
	int32_t V_3 = 0;
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_4 = NULL;
	{
		// mapNodes = transform.GetComponentsInChildren<Node> ().ToList ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NodeU5BU5D_tE4CED452B8FD34E5B4D2D869B745C10B6317EC11* L_1;
		L_1 = Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2(L_0, Component_GetComponentsInChildren_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_m483C57AFA7855A27A961D44AC73BBB4A201524B2_RuntimeMethod_var);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_2;
		L_2 = Enumerable_ToList_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mBE8463D568DB43B7C29149972FF34548636B931A((RuntimeObject*)L_1, Enumerable_ToList_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_mBE8463D568DB43B7C29149972FF34548636B931A_RuntimeMethod_var);
		__this->___mapNodes_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapNodes_16), (void*)L_2);
		// for (int i = 0; i < mapNodes.Count; i++) {
		V_0 = 0;
		goto IL_00f8;
	}

IL_001d:
	{
		// Node node = mapNodes[i];
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_3 = __this->___mapNodes_16;
		int32_t L_4 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5;
		L_5 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_3, L_4, List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		V_1 = L_5;
		// if (node == null) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// mapNodes.RemoveAt(i);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_8 = __this->___mapNodes_16;
		int32_t L_9 = V_0;
		List_1_RemoveAt_mFAC47DFB4C7E4101D80AE119F00A79E6E53F77CA(L_8, L_9, List_1_RemoveAt_mFAC47DFB4C7E4101D80AE119F00A79E6E53F77CA_RuntimeMethod_var);
		// continue;
		goto IL_00f4;
	}

IL_0044:
	{
		// List<Path> paths = node.transform.GetComponentsInChildren<Path> ().ToList ();
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_10 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_12;
		L_12 = Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F(L_11, Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var);
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_13;
		L_13 = Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B((RuntimeObject*)L_12, Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B_RuntimeMethod_var);
		V_2 = L_13;
		// node.paths = new List<Path> ();
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = V_1;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_15 = (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*)il2cpp_codegen_object_new(List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196_il2cpp_TypeInfo_var);
		List_1__ctor_m01125645B2BA4542B32A3D6675A49C334C73C362(L_15, List_1__ctor_m01125645B2BA4542B32A3D6675A49C334C73C362_RuntimeMethod_var);
		L_14->___paths_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___paths_12), (void*)L_15);
		// for (int j = 0; j < paths.Count; j++) {
		V_3 = 0;
		goto IL_00e8;
	}

IL_0067:
	{
		// Path path = paths[j];
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_16 = V_2;
		int32_t L_17 = V_3;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_18;
		L_18 = List_1_get_Item_m6C41FB8D537D7DADB853D470C78C5497E88A5B0B(L_16, L_17, List_1_get_Item_m6C41FB8D537D7DADB853D470C78C5497E88A5B0B_RuntimeMethod_var);
		V_4 = L_18;
		// if (path == null) {
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_0083;
		}
	}
	{
		// paths.RemoveAt(j);
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_21 = V_2;
		int32_t L_22 = V_3;
		List_1_RemoveAt_m0CACFCB8F3E5FA3F60B8DF68A397D83DC7F8A1DD(L_21, L_22, List_1_RemoveAt_m0CACFCB8F3E5FA3F60B8DF68A397D83DC7F8A1DD_RuntimeMethod_var);
		// continue;
		goto IL_00e4;
	}

IL_0083:
	{
		// if (path.IsValid ()) node.paths.Add (path);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_23 = V_4;
		bool L_24;
		L_24 = Path_IsValid_m42E946CA82F60FEB1E456CD0FD5F4750E8ADBB50(L_23, NULL);
		if (!L_24)
		{
			goto IL_0099;
		}
	}
	{
		// if (path.IsValid ()) node.paths.Add (path);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25 = V_1;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_26 = L_25->___paths_12;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_27 = V_4;
		List_1_Add_mD620A7974C8D360B9FA4D64DD9F2F18F99D2197A_inline(L_26, L_27, List_1_Add_mD620A7974C8D360B9FA4D64DD9F2F18F99D2197A_RuntimeMethod_var);
	}

IL_0099:
	{
		// path.line = path.gameObject.GetComponent<LineRenderer> ();
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_28 = V_4;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_29 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_31;
		L_31 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_30, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		L_28->___line_21 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___line_21), (void*)L_31);
		// if (path.line == null) {
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_32 = V_4;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_33 = L_32->___line_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_00e4;
		}
	}
	{
		// path.line = path.gameObject.AddComponent<LineRenderer> ();
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_35 = V_4;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_36 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_38;
		L_38 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_37, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		L_35->___line_21 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___line_21), (void*)L_38);
		// path.Initialize (this, path.fromNode, path.toNode);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_39 = V_4;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_40 = V_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_41 = L_40->___fromNode_4;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_42 = V_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_43 = L_42->___toNode_5;
		Path_Initialize_mCB0831FE80635E7627F6DD97F6D8E8663CE650F0(L_39, __this, L_41, L_43, NULL);
	}

IL_00e4:
	{
		// for (int j = 0; j < paths.Count; j++) {
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e8:
	{
		// for (int j = 0; j < paths.Count; j++) {
		int32_t L_45 = V_3;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_46 = V_2;
		int32_t L_47;
		L_47 = List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_inline(L_46, List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_0067;
		}
	}

IL_00f4:
	{
		// for (int i = 0; i < mapNodes.Count; i++) {
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00f8:
	{
		// for (int i = 0; i < mapNodes.Count; i++) {
		int32_t L_49 = V_0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_50 = __this->___mapNodes_16;
		int32_t L_51;
		L_51 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_50, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_001d;
		}
	}
	{
		// mapAgents = transform.GetComponentsInChildren<Agent> ().ToList ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		AgentU5BU5D_tBA03BC9DAD075105F73511F5DC2BDA1DA85F4818* L_53;
		L_53 = Component_GetComponentsInChildren_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m0BFCFA930C3843F9B0087E7C9DBAFD35D5DDBE11(L_52, Component_GetComponentsInChildren_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_m0BFCFA930C3843F9B0087E7C9DBAFD35D5DDBE11_RuntimeMethod_var);
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_54;
		L_54 = Enumerable_ToList_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mCF6D432845186A61BE3D3BCCD11FCA73949D3CCD((RuntimeObject*)L_53, Enumerable_ToList_TisAgent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92_mCF6D432845186A61BE3D3BCCD11FCA73949D3CCD_RuntimeMethod_var);
		__this->___mapAgents_17 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapAgents_17), (void*)L_54);
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::PauseAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_PauseAll_m0A7C580069B2AF9CCAFAAA0BA291F2654AC43E62 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m530BF61FF09C20AEF9B6945B09877D50E370A026_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m469EEAF33BFCB3D19CFF14A90CAABBECD629F273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0CBE94E5841E09F83CE40453E43270C448551795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m82691D58449D93B23B00144B73B3C65059FEFD67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Agent agent in mapAgents) {
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_0 = __this->___mapAgents_17;
		Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D L_1;
		L_1 = List_1_GetEnumerator_m82691D58449D93B23B00144B73B3C65059FEFD67(L_0, List_1_GetEnumerator_m82691D58449D93B23B00144B73B3C65059FEFD67_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m530BF61FF09C20AEF9B6945B09877D50E370A026((&V_0), Enumerator_Dispose_m530BF61FF09C20AEF9B6945B09877D50E370A026_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (Agent agent in mapAgents) {
				Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2;
				L_2 = Enumerator_get_Current_m0CBE94E5841E09F83CE40453E43270C448551795_inline((&V_0), Enumerator_get_Current_m0CBE94E5841E09F83CE40453E43270C448551795_RuntimeMethod_var);
				// agent.Pause ();
				Agent_Pause_mA041DC6A39AD6FDE99B3F92799FF934B82E1ECF9(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (Agent agent in mapAgents) {
				bool L_3;
				L_3 = Enumerator_MoveNext_m469EEAF33BFCB3D19CFF14A90CAABBECD629F273((&V_0), Enumerator_MoveNext_m469EEAF33BFCB3D19CFF14A90CAABBECD629F273_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::PlayAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_PlayAll_m3E5C810C2E8022D2D2BA94A0031308DB098DCA55 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m530BF61FF09C20AEF9B6945B09877D50E370A026_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m469EEAF33BFCB3D19CFF14A90CAABBECD629F273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0CBE94E5841E09F83CE40453E43270C448551795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m82691D58449D93B23B00144B73B3C65059FEFD67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Agent agent in mapAgents) {
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_0 = __this->___mapAgents_17;
		Enumerator_tCC3698F0BC4CEC037392BB97C193D307126D823D L_1;
		L_1 = List_1_GetEnumerator_m82691D58449D93B23B00144B73B3C65059FEFD67(L_0, List_1_GetEnumerator_m82691D58449D93B23B00144B73B3C65059FEFD67_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m530BF61FF09C20AEF9B6945B09877D50E370A026((&V_0), Enumerator_Dispose_m530BF61FF09C20AEF9B6945B09877D50E370A026_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (Agent agent in mapAgents) {
				Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2;
				L_2 = Enumerator_get_Current_m0CBE94E5841E09F83CE40453E43270C448551795_inline((&V_0), Enumerator_get_Current_m0CBE94E5841E09F83CE40453E43270C448551795_RuntimeMethod_var);
				// agent.Play ();
				Agent_Play_mA4260CF4416145C4E68875B7DA18E4A5DF7B59DD(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (Agent agent in mapAgents) {
				bool L_3;
				L_3 = Enumerator_MoveNext_m469EEAF33BFCB3D19CFF14A90CAABBECD629F273((&V_0), Enumerator_MoveNext_m469EEAF33BFCB3D19CFF14A90CAABBECD629F273_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::HighlightRoute(System.Collections.Generic.List`1<JSNodeMap.Node>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_HighlightRoute_m3640E740EF42ED3E08D3D3C7BFE08A64A4593890 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, List_1_t655259B818E9860056FF46909A95E99467EDA337* ___route0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_2 = NULL;
	MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* V_3 = NULL;
	MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// for (int i = 0; i < route.Count; i++)
		V_0 = 0;
		goto IL_00ff;
	}

IL_0007:
	{
		// Node node = route[i];
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_0 = ___route0;
		int32_t L_1 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2;
		L_2 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_0, L_1, List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		V_1 = L_2;
		// if (drawMode == DrawMode.Object)
		int32_t L_3 = __this->___drawMode_7;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		// node.gameObject.GetComponent<MeshRenderer>().material = nodeData.highlightMaterial;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6;
		L_6 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_5, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_7 = __this->___nodeData_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = L_7->___highlightMaterial_8;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_6, L_8, NULL);
		goto IL_0050;
	}

IL_0035:
	{
		// node.gameObject.GetComponent<SpriteRenderer>().material = nodeData.highlightMaterial;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_9 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
		L_11 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_10, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_12 = __this->___nodeData_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = L_12->___highlightMaterial_8;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_11, L_13, NULL);
	}

IL_0050:
	{
		// if (i != route.Count - 1)
		int32_t L_14 = V_0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_15 = ___route0;
		int32_t L_16;
		L_16 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_15, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_00fb;
		}
	}
	{
		// Path path = FindValidPath(node, route[i + 1]);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_17 = V_1;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_18 = ___route0;
		int32_t L_19 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_20;
		L_20 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_18, ((int32_t)il2cpp_codegen_add(L_19, 1)), List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_21;
		L_21 = Map_FindValidPath_m9F25634F168EF72B7341E829D11A7452C807A5AF(L_17, L_20, NULL);
		V_2 = L_21;
		// Marker[] markers = path.transform.GetComponentsInChildren<Marker>();
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_22 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_24;
		L_24 = Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8(L_23, Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8_RuntimeMethod_var);
		V_3 = L_24;
		// if (drawMode == DrawMode.Object)
		int32_t L_25 = __this->___drawMode_7;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00b5;
		}
	}
	{
		// foreach (Marker marker in markers)
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_26 = V_3;
		V_4 = L_26;
		V_5 = 0;
		goto IL_00ab;
	}

IL_008b:
	{
		// foreach (Marker marker in markers)
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		// marker.GetComponent<MeshRenderer>().material = nodeData.highlightMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_31;
		L_31 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_30, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_32 = __this->___nodeData_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = L_32->___highlightMaterial_8;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_31, L_33, NULL);
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ab:
	{
		// foreach (Marker marker in markers)
		int32_t L_35 = V_5;
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_36 = V_4;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_008b;
		}
	}
	{
		goto IL_00e5;
	}

IL_00b5:
	{
		// foreach (Marker marker in markers)
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_37 = V_3;
		V_4 = L_37;
		V_5 = 0;
		goto IL_00dd;
	}

IL_00bd:
	{
		// foreach (Marker marker in markers)
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_38 = V_4;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		// marker.GetComponent<SpriteRenderer>().material = nodeData.highlightMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42;
		L_42 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_41, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_43 = __this->___nodeData_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = L_43->___highlightMaterial_8;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_42, L_44, NULL);
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00dd:
	{
		// foreach (Marker marker in markers)
		int32_t L_46 = V_5;
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_47 = V_4;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_00bd;
		}
	}

IL_00e5:
	{
		// path.line.material = nodeData.highlightMaterial;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_48 = V_2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_49 = L_48->___line_21;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_50 = __this->___nodeData_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = L_50->___highlightMaterial_8;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_49, L_51, NULL);
	}

IL_00fb:
	{
		// for (int i = 0; i < route.Count; i++)
		int32_t L_52 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00ff:
	{
		// for (int i = 0; i < route.Count; i++)
		int32_t L_53 = V_0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_54 = ___route0;
		int32_t L_55;
		L_55 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_54, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::ClearRouteHighlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map_ClearRouteHighlight_m865404158840B4CBE2EC5D58DB00AF0743CED079 (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_1 = NULL;
	Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_3 = NULL;
	MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* V_4 = NULL;
	MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// foreach (Node node in mapNodes)
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_0 = __this->___mapNodes_16;
		Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 L_1;
		L_1 = List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA(L_0, List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0127:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2((&V_0), Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0119_1;
			}

IL_0011_1:
			{
				// foreach (Node node in mapNodes)
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2;
				L_2 = Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_inline((&V_0), Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
				V_1 = L_2;
				// if (drawMode == DrawMode.Object)
				int32_t L_3 = __this->___drawMode_7;
				if ((!(((uint32_t)L_3) == ((uint32_t)1))))
				{
					goto IL_003f_1;
				}
			}
			{
				// node.gameObject.GetComponent<MeshRenderer>().material = nodeData.meshMaterial;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6;
				L_6 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_5, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
				NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_7 = __this->___nodeData_15;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = L_7->___meshMaterial_6;
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_6, L_8, NULL);
				goto IL_0054_1;
			}

IL_003f_1:
			{
				// node.gameObject.GetComponent<SpriteRenderer>().color = Color.white;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_9 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
				L_11 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_10, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
				L_12 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
				SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_11, L_12, NULL);
			}

IL_0054_1:
			{
				// foreach (Path path in node.paths)
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_13 = V_1;
				List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_14 = L_13->___paths_12;
				Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 L_15;
				L_15 = List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160(L_14, List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
				V_2 = L_15;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010b_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45((&V_2), Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00fd_2;
					}

IL_0065_2:
					{
						// foreach (Path path in node.paths)
						Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_16;
						L_16 = Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_inline((&V_2), Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
						V_3 = L_16;
						// Marker[] markers = path.transform.GetComponentsInChildren<Marker>();
						Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_17 = V_3;
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
						L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
						MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_19;
						L_19 = Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8(L_18, Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8_RuntimeMethod_var);
						V_4 = L_19;
						// if (drawMode == DrawMode.Object)
						int32_t L_20 = __this->___drawMode_7;
						if ((!(((uint32_t)L_20) == ((uint32_t)1))))
						{
							goto IL_00b6_2;
						}
					}
					{
						// foreach (Marker marker in markers)
						MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_21 = V_4;
						V_5 = L_21;
						V_6 = 0;
						goto IL_00ac_2;
					}

IL_008c_2:
					{
						// foreach (Marker marker in markers)
						MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_22 = V_5;
						int32_t L_23 = V_6;
						int32_t L_24 = L_23;
						Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
						// marker.GetComponent<MeshRenderer>().material = nodeData.meshMaterial;
						MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_26;
						L_26 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_25, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
						NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_27 = __this->___nodeData_15;
						Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = L_27->___meshMaterial_6;
						Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_26, L_28, NULL);
						int32_t L_29 = V_6;
						V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
					}

IL_00ac_2:
					{
						// foreach (Marker marker in markers)
						int32_t L_30 = V_6;
						MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_31 = V_5;
						if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
						{
							goto IL_008c_2;
						}
					}
					{
						goto IL_00e7_2;
					}

IL_00b6_2:
					{
						// foreach (Marker marker in markers)
						MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_32 = V_4;
						V_5 = L_32;
						V_6 = 0;
						goto IL_00df_2;
					}

IL_00bf_2:
					{
						// foreach (Marker marker in markers)
						MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_33 = V_5;
						int32_t L_34 = V_6;
						int32_t L_35 = L_34;
						Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
						// marker.GetComponent<SpriteRenderer>().material = nodeData.meshMaterial;
						SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37;
						L_37 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_36, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
						NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_38 = __this->___nodeData_15;
						Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = L_38->___meshMaterial_6;
						Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_37, L_39, NULL);
						int32_t L_40 = V_6;
						V_6 = ((int32_t)il2cpp_codegen_add(L_40, 1));
					}

IL_00df_2:
					{
						// foreach (Marker marker in markers)
						int32_t L_41 = V_6;
						MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_42 = V_5;
						if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
						{
							goto IL_00bf_2;
						}
					}

IL_00e7_2:
					{
						// path.line.material = nodeData.lineMaterial;
						Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_43 = V_3;
						LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_44 = L_43->___line_21;
						NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_45 = __this->___nodeData_15;
						Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = L_45->___lineMaterial_7;
						Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_44, L_46, NULL);
					}

IL_00fd_2:
					{
						// foreach (Path path in node.paths)
						bool L_47;
						L_47 = Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77((&V_2), Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
						if (L_47)
						{
							goto IL_0065_2;
						}
					}
					{
						goto IL_0119_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0119_1:
			{
				// foreach (Node node in mapNodes)
				bool L_48;
				L_48 = Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534((&V_0), Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
				if (L_48)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0135;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Map::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map__ctor_m85FE1FBFE61E325EC895B4536700EDEE16401AEB (Map_t79AD168245EE60863408C85B6F3C996626E98A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC4134BA9FB5609BF222D79C3C0C5DB52F45ED10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11AC5E2BD66016383281878F99D761B6B9AB5F11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string version = "1.0";
		__this->___version_4 = _stringLiteral11AC5E2BD66016383281878F99D761B6B9AB5F11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___version_4), (void*)_stringLiteral11AC5E2BD66016383281878F99D761B6B9AB5F11);
		// public float defaultMarkerSpacing = 1f;
		__this->___defaultMarkerSpacing_5 = (1.0f);
		// public float redrawThreshhold = 0.1f;
		__this->___redrawThreshhold_6 = (0.100000001f);
		// public float nodeScale = 1f;
		__this->___nodeScale_8 = (1.0f);
		// public bool drawNodes = true;
		__this->___drawNodes_9 = (bool)1;
		// public bool drawMarkers = true;
		__this->___drawMarkers_10 = (bool)1;
		// public float lineWidth = 0.5f;
		__this->___lineWidth_12 = (0.5f);
		// public LineAlignment lineOrientation = LineAlignment.TransformZ;
		__this->___lineOrientation_13 = 1;
		// public MovementType defaultPathDirection = MovementType.TwoWay;
		__this->___defaultPathDirection_14 = 2;
		// public List<Node> mapNodes = new List<Node> ();
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_0 = (List_1_t655259B818E9860056FF46909A95E99467EDA337*)il2cpp_codegen_object_new(List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203(L_0, List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var);
		__this->___mapNodes_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapNodes_16), (void*)L_0);
		// public List<Agent> mapAgents = new List<Agent> ();
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_1 = (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D*)il2cpp_codegen_object_new(List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D_il2cpp_TypeInfo_var);
		List_1__ctor_mC4134BA9FB5609BF222D79C3C0C5DB52F45ED10E(L_1, List_1__ctor_mC4134BA9FB5609BF222D79C3C0C5DB52F45ED10E_RuntimeMethod_var);
		__this->___mapAgents_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapAgents_17), (void*)L_1);
		// public string[] agentTypes = { "Default" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		__this->___agentTypes_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agentTypes_18), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JSNodeMap.Map/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m2A3F9BF863812499B2902308FE3164B863E37104 (U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean JSNodeMap.Map/<>c__DisplayClass26_0::<GetNodeByName>b__0(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass26_0_U3CGetNodeByNameU3Eb__0_mD625C3C7EB8D55E704190A90DEF254950652BA2E (U3CU3Ec__DisplayClass26_0_t6D8185C60F62B28539C649BC5A20B3EC14AF8A18* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___n0, const RuntimeMethod* method) 
{
	{
		// return mapNodes.FirstOrDefault (n => n.nodeName == name);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___n0;
		String_t* L_1 = L_0->___nodeName_8;
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		return L_3;
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
// System.Void JSNodeMap.Map/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_mBD436E6319495D0F96708FC9AE7DBDAAF1428DE4 (U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean JSNodeMap.Map/<>c__DisplayClass27_0::<GetPathsToNode>b__1(JSNodeMap.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CGetPathsToNodeU3Eb__1_mE6F50D90451BDE87ECF74F44CC68F5A73EAE9F8B (U3CU3Ec__DisplayClass27_0_t9E66BF80A06BA6178F79EB2DA493C0B8A0B11CDE* __this, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mapNodes.SelectMany (n => n.paths).Where (p => p.toNode == node).ToArray ();
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_0 = ___p0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = L_0->___toNode_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = __this->___node_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_2, NULL);
		return L_3;
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
// System.Void JSNodeMap.Map/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1EF281466D4F719570D9D7C69F2C392447CFAEE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7130047096722E1057A70161B316705357013632* L_0 = (U3CU3Ec_t7130047096722E1057A70161B316705357013632*)il2cpp_codegen_object_new(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m661C56F7462BD31F254E5D6368C86BBC9E3AA1EE(L_0, NULL);
		((U3CU3Ec_t7130047096722E1057A70161B316705357013632_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7130047096722E1057A70161B316705357013632_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7130047096722E1057A70161B316705357013632_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void JSNodeMap.Map/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m661C56F7462BD31F254E5D6368C86BBC9E3AA1EE (U3CU3Ec_t7130047096722E1057A70161B316705357013632* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<JSNodeMap.Path> JSNodeMap.Map/<>c::<GetPathsToNode>b__27_0(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetPathsToNodeU3Eb__27_0_m039E18F5D8B4B99C441F2CF5F676C9F68F1E580B (U3CU3Ec_t7130047096722E1057A70161B316705357013632* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___n0, const RuntimeMethod* method) 
{
	{
		// return mapNodes.SelectMany (n => n.paths).Where (p => p.toNode == node).ToArray ();
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___n0;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_1 = L_0->___paths_12;
		return L_1;
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
// System.Void JSNodeMap.Map/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m2A3C63764B02CF39D685DA0818B4C0F11CA5C908 (U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean JSNodeMap.Map/<>c__DisplayClass28_0::<GetNodeTypeIndexByName>b__0(JSNodeMap.NodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass28_0_U3CGetNodeTypeIndexByNameU3Eb__0_m308C64E60817A9370748BC355A1F9928AEED5ACF (U3CU3Ec__DisplayClass28_0_tD5400CAF621A4183C15ED8B14D7F86F803F84B82* __this, NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* ___t0, const RuntimeMethod* method) 
{
	{
		// return System.Array.FindIndex(nodeData.nodeTypes, t => t.name == typeName);
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_0 = ___t0;
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___typeName_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		return L_3;
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
// System.Void JSNodeMap.Map/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m740430DE46B1171796CB40E74E234D6B109F3032 (U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean JSNodeMap.Map/<>c__DisplayClass29_0::<GetMarkerTypeIndexByName>b__0(JSNodeMap.NodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass29_0_U3CGetMarkerTypeIndexByNameU3Eb__0_m3FFCA3511D9708CA057DF22C06A1F4D51F0F0670 (U3CU3Ec__DisplayClass29_0_t1AA9BD01DA44090104ED70E51D1CDA7A0B889E77* __this, NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* ___t0, const RuntimeMethod* method) 
{
	{
		// return System.Array.FindIndex(nodeData.markerTypes, t => t.name == typeName);
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_0 = ___t0;
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___typeName_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		return L_3;
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
// System.Void JSNodeMap.Marker::Initialize(JSNodeMap.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker_Initialize_m05B0EE89CED8F6E833879B2FBDCD032716573722 (Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* __this, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, const RuntimeMethod* method) 
{
	{
		// nodePath = path;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_0 = ___path0;
		__this->___nodePath_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodePath_8), (void*)L_0);
		// markerType = path.markerType;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_1 = ___path0;
		int32_t L_2 = L_1->___markerType_17;
		__this->___markerType_7 = L_2;
		// SetRenderer(path);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_3 = ___path0;
		Marker_SetRenderer_m4F64524B512E2A2D71116C9B9989933DBFFED236(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Marker::SetRenderer(JSNodeMap.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker_SetRenderer_m4F64524B512E2A2D71116C9B9989933DBFFED236 (Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* __this, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA47EE6A3C6E42C332F0EF138AA8F7CB709B079D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (path.nodeMap.drawMode == DrawMode.Sprite) {
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_0 = ___path0;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_1 = L_0->___nodeMap_20;
		int32_t L_2 = L_1->___drawMode_7;
		if (L_2)
		{
			goto IL_00ec;
		}
	}
	{
		// DestroyImmediate(meshFilter);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3 = __this->___meshFilter_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_3, NULL);
		// DestroyImmediate(meshRenderer);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___meshRenderer_5;
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
		// meshFilter = null;
		__this->___meshFilter_6 = (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_6), (void*)(MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL);
		// meshRenderer = null;
		__this->___meshRenderer_5 = (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_5), (void*)(MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL);
		// if (spriteRenderer == null) {
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___spriteRenderer_4;
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// spriteRenderer = gameObject.AddComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8;
		L_8 = GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4(L_7, GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4_RuntimeMethod_var);
		__this->___spriteRenderer_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_4), (void*)L_8);
	}

IL_0053:
	{
		// spriteRenderer.sprite = path.nodeMap.nodeData.markerTypes[markerType].sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___spriteRenderer_4;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_10 = ___path0;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_11 = L_10->___nodeMap_20;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_12 = L_11->___nodeData_15;
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_13 = L_12->___markerTypes_5;
		int32_t L_14 = __this->___markerType_7;
		int32_t L_15 = L_14;
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = L_16->___sprite_2;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_9, L_17, NULL);
		// spriteRenderer.sortingLayerName = "NodeMap";
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->___spriteRenderer_4;
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_18, _stringLiteralEA47EE6A3C6E42C332F0EF138AA8F7CB709B079D, NULL);
		// spriteRenderer.sortingOrder = 1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19 = __this->___spriteRenderer_4;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_19, 1, NULL);
		// Vector3 moveDirection = path.toNode.transform.position - path.fromNode.transform.position;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_20 = ___path0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_21 = L_20->___toNode_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_24 = ___path0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25 = L_24->___fromNode_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_23, L_27, NULL);
		V_0 = L_28;
		// float angle = Mathf.Atan2(moveDirection.x, moveDirection.z) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30 = L_29.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = L_31.___z_4;
		float L_33;
		L_33 = atan2f(L_30, L_32);
		V_1 = ((float)il2cpp_codegen_multiply(L_33, (57.2957802f)));
		// transform.Rotate(90f, 0f, - angle);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_35 = V_1;
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_34, (90.0f), (0.0f), ((-L_35)), NULL);
		return;
	}

IL_00ec:
	{
		// DestroyImmediate(spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_36 = __this->___spriteRenderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_36, NULL);
		// spriteRenderer = null;
		__this->___spriteRenderer_4 = (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_4), (void*)(SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)NULL);
		// if (meshFilter == null) {
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_37 = __this->___meshFilter_6;
		bool L_38;
		L_38 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_011d;
		}
	}
	{
		// meshFilter = gameObject.AddComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_40;
		L_40 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_39, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		__this->___meshFilter_6 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_6), (void*)L_40);
	}

IL_011d:
	{
		// meshFilter.mesh = path.nodeMap.nodeData.markerTypes[markerType].mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_41 = __this->___meshFilter_6;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_42 = ___path0;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_43 = L_42->___nodeMap_20;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_44 = L_43->___nodeData_15;
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_45 = L_44->___markerTypes_5;
		int32_t L_46 = __this->___markerType_7;
		int32_t L_47 = L_46;
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_49 = L_48->___mesh_1;
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_41, L_49, NULL);
		// if (meshRenderer == null) {
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_50 = __this->___meshRenderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_50, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_51)
		{
			goto IL_0163;
		}
	}
	{
		// meshRenderer = gameObject.AddComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_53;
		L_53 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_52, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		__this->___meshRenderer_5 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_5), (void*)L_53);
	}

IL_0163:
	{
		// meshRenderer.sharedMaterial = path.nodeMap.nodeData.meshMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_54 = __this->___meshRenderer_5;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_55 = ___path0;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_56 = L_55->___nodeMap_20;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_57 = L_56->___nodeData_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58 = L_57->___meshMaterial_6;
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_54, L_58, NULL);
		// transform.localRotation = Quaternion.Euler(-90f, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-90.0f), (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_59, L_60, NULL);
		// transform.LookAt(path.toNode.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_62 = ___path0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_63 = L_62->___toNode_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_61, L_64, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Marker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker__ctor_mAB7F6F2DEBEBFF1F27E44B5848067BF381488E50 (Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JSNodeMap.Node::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Awake_mF3A040A5C54CF3E1A82A941417DA25FA70AA93E4 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m01125645B2BA4542B32A3D6675A49C334C73C362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC4134BA9FB5609BF222D79C3C0C5DB52F45ED10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (paths == null) {
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_0 = __this->___paths_12;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// paths = new List<Path>();
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_1 = (List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196*)il2cpp_codegen_object_new(List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196_il2cpp_TypeInfo_var);
		List_1__ctor_m01125645B2BA4542B32A3D6675A49C334C73C362(L_1, List_1__ctor_m01125645B2BA4542B32A3D6675A49C334C73C362_RuntimeMethod_var);
		__this->___paths_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paths_12), (void*)L_1);
	}

IL_0013:
	{
		// if (agentsAtNode == null) {
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_2 = __this->___agentsAtNode_11;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// agentsAtNode = new List<Agent>();
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_3 = (List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D*)il2cpp_codegen_object_new(List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D_il2cpp_TypeInfo_var);
		List_1__ctor_mC4134BA9FB5609BF222D79C3C0C5DB52F45ED10E(L_3, List_1__ctor_mC4134BA9FB5609BF222D79C3C0C5DB52F45ED10E_RuntimeMethod_var);
		__this->___agentsAtNode_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agentsAtNode_11), (void*)L_3);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Node::Initialize(JSNodeMap.Map)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Initialize_mFA59D2AC5698FF90B947B3CCA7DBC9254F50A23E (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// this.nodeMap = nodeMap;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = ___nodeMap0;
		__this->___nodeMap_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeMap_10), (void*)L_0);
		// this.nodeName += nodeMap.mapNodes.Count;
		String_t* L_1 = __this->___nodeName_8;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_2 = ___nodeMap0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_3 = L_2->___mapNodes_16;
		int32_t L_4;
		L_4 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_3, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, L_5, NULL);
		__this->___nodeName_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeName_8), (void*)L_6);
		// drawNode = nodeMap.drawNodes;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_7 = ___nodeMap0;
		bool L_8 = L_7->___drawNodes_9;
		__this->___drawNode_13 = L_8;
		// SetDrawMode(nodeMap.drawMode, nodeMap.nodeData);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_9 = ___nodeMap0;
		int32_t L_10 = L_9->___drawMode_7;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_11 = ___nodeMap0;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_12 = L_11->___nodeData_15;
		Node_SetDrawMode_m44B71D8B76BBFDB61EA53DC176A618004E980AD5(__this, L_10, L_12, NULL);
		// }
		return;
	}
}
// JSNodeMap.Path JSNodeMap.Node::CreatePath(JSNodeMap.Node,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* Node_CreatePath_m2E2B73786B7E1F53678835E762D9D298816A7AA9 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___toNode0, bool ___drawPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m7955F78D8A34713193F96A1F5BE02050B45E1202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD620A7974C8D360B9FA4D64DD9F2F18F99D2197A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE366688218C4FC506EA8269E62224B37209508EB);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_1 = NULL;
	{
		// GameObject newPathObj = new GameObject("Path");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralE366688218C4FC506EA8269E62224B37209508EB, NULL);
		// newPathObj.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, L_3, NULL);
		// newPathObj.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_7, NULL);
		// Quaternion pathRot = (nodeMap.drawMode == DrawMode.Object) ? Quaternion.Euler(90f, 0f, 0f) : Quaternion.Euler(0f, 0f, 0f);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_8 = __this->___nodeMap_10;
		int32_t L_9 = L_8->___drawMode_7;
		G_B1_0 = L_4;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			G_B2_0 = L_4;
			goto IL_0055;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0069;
	}

IL_0055:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((90.0f), (0.0f), (0.0f), NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
	}

IL_0069:
	{
		V_0 = G_B3_0;
		// newPathObj.transform.localRotation = pathRot;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = G_B3_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_0;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_13, L_14, NULL);
		// newPathObj.isStatic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_12;
		GameObject_set_isStatic_m0468F0E4553F5B3DDBE03F3788BE0A1A3736839C(L_15, (bool)1, NULL);
		// Path newPath = newPathObj.AddComponent<Path>();
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_16;
		L_16 = GameObject_AddComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m7955F78D8A34713193F96A1F5BE02050B45E1202(L_15, GameObject_AddComponent_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m7955F78D8A34713193F96A1F5BE02050B45E1202_RuntimeMethod_var);
		V_1 = L_16;
		// newPath.Initialize(nodeMap, this, toNode);
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_17 = V_1;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_18 = __this->___nodeMap_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_19 = ___toNode0;
		Path_Initialize_mCB0831FE80635E7627F6DD97F6D8E8663CE650F0(L_17, L_18, __this, L_19, NULL);
		// newPath.drawMarkers = drawPath;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_20 = V_1;
		bool L_21 = ___drawPath1;
		L_20->___drawMarkers_7 = L_21;
		// paths.Add(newPath);
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_22 = __this->___paths_12;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_23 = V_1;
		List_1_Add_mD620A7974C8D360B9FA4D64DD9F2F18F99D2197A_inline(L_22, L_23, List_1_Add_mD620A7974C8D360B9FA4D64DD9F2F18F99D2197A_RuntimeMethod_var);
		// return newPath;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_24 = V_1;
		return L_24;
	}
}
// JSNodeMap.Path[] JSNodeMap.Node::GetPaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* Node_GetPaths_m57C64AE4B5D9C93E9F3C4A3B766165A271DB153C (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m673D454A7079A687E37DD761A0F039FDCFC0B96D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (paths == null || paths.Count == 0) {
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_0 = __this->___paths_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_1 = __this->___paths_12;
		int32_t L_2;
		L_2 = List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_inline(L_1, List_1_get_Count_mC9FF467793D8FEA86CB477B0FAB68C9435927000_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0026;
		}
	}

IL_0015:
	{
		// paths = GetComponentsInChildren<Path>().ToList();
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_3;
		L_3 = Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F(__this, Component_GetComponentsInChildren_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m481D365F5EBB4DC632129F27F4689270ACD3048F_RuntimeMethod_var);
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_4;
		L_4 = Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B((RuntimeObject*)L_3, Enumerable_ToList_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mAA369FA97D2B71A17A22B01C8A0F20BB15FEA15B_RuntimeMethod_var);
		__this->___paths_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paths_12), (void*)L_4);
	}

IL_0026:
	{
		// return paths.ToArray();
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_5 = __this->___paths_12;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_6;
		L_6 = List_1_ToArray_m673D454A7079A687E37DD761A0F039FDCFC0B96D(L_5, List_1_ToArray_m673D454A7079A687E37DD761A0F039FDCFC0B96D_RuntimeMethod_var);
		return L_6;
	}
}
// JSNodeMap.Path[] JSNodeMap.Node::GetAllPaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* Node_GetAllPaths_m34A41840FCB010186881AA5C65ECF18FA1DD378E (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mEF32A6D489769E95C2B80DA3CFA9EBEC90B7FD45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return nodeMap.GetPathsToNode(this).Concat(GetPaths()).ToArray();
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___nodeMap_10;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_1;
		L_1 = Map_GetPathsToNode_m63C889E70D58D45C07870FE0739FDCC3BD6B4200(L_0, __this, NULL);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_2;
		L_2 = Node_GetPaths_m57C64AE4B5D9C93E9F3C4A3B766165A271DB153C(__this, NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_Concat_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mEF32A6D489769E95C2B80DA3CFA9EBEC90B7FD45((RuntimeObject*)L_1, (RuntimeObject*)L_2, Enumerable_Concat_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mEF32A6D489769E95C2B80DA3CFA9EBEC90B7FD45_RuntimeMethod_var);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_4;
		L_4 = Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0(L_3, Enumerable_ToArray_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_mA9C62EA9480C9A41C9B555EF8EE6476BEFF55BC0_RuntimeMethod_var);
		return L_4;
	}
}
// System.Collections.Generic.List`1<JSNodeMap.Agent> JSNodeMap.Node::GetAgentsAtNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* Node_GetAgentsAtNode_m2A272C9904AD3D7FA2E5D02EB564EB70E988D772 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) 
{
	{
		// return agentsAtNode;
		List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_0 = __this->___agentsAtNode_11;
		return L_0;
	}
}
// System.Void JSNodeMap.Node::HidePaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_HidePaths_mB214F8C5113769A3EDFE95624B550B469314DDCE (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) 
{
	PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Path[] tmp = nodeMap.GetPathsToNode(this);
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___nodeMap_10;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_1;
		L_1 = Map_GetPathsToNode_m63C889E70D58D45C07870FE0739FDCC3BD6B4200(L_0, __this, NULL);
		V_0 = L_1;
		// for (int i = 0; i <= tmp.Length - 1; i++)
		V_1 = 0;
		goto IL_001e;
	}

IL_0011:
	{
		// tmp[i].SetVisibleLine(false);
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Path_SetVisibleLine_m876CE67BAB24472A4DE36AAC811663F28EAD9520(L_5, (bool)0, NULL);
		// for (int i = 0; i <= tmp.Length - 1; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (int i = 0; i <= tmp.Length - 1; i++)
		int32_t L_7 = V_1;
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_8 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1)))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 JSNodeMap.Node::DeadEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_DeadEnd_m29C262C25A85088E6FA7E12212C684297A6445E6 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) 
{
	{
		// Path[] tmp = GetPaths();
		PathU5BU5D_t326F1F8238BF1D1342716EC76BFD3704E63E91E2* L_0;
		L_0 = Node_GetPaths_m57C64AE4B5D9C93E9F3C4A3B766165A271DB153C(__this, NULL);
		// return tmp.Length;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// JSNodeMap.Node JSNodeMap.Node::GetClosestNode(JSNodeMap.Agent,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Node_GetClosestNode_m1326A2E20DE2002F3BDE2B3C746A14B7D4E2C1A5 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent0, bool ___disallowOccupied1, String_t* ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3258C5A7A54E2BAD994DBC96C02ED9395DF90951_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_0 = NULL;
	float V_1 = 0.0f;
	Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// Node closestNode = null;
		V_0 = (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL;
		// float closestDist = Mathf.Infinity;
		V_1 = (std::numeric_limits<float>::infinity());
		// List<Node> neighborNodes = Pathfinding.GetNeighbors(this, agent);
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_0 = ___agent0;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_1;
		L_1 = Pathfinding_GetNeighbors_mB8771D1E02E0B8586D5831D362B3C1B80671985C(__this, L_0, NULL);
		// foreach(Node node in neighborNodes) {
		Enumerator_tEB3C94F63EB57756A1912EA1CAE75DF5E9A50163 L_2;
		L_2 = List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA(L_1, List_1_GetEnumerator_mDCAB7F284F5F226F991FEA476F527AF141597ABA_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2((&V_2), Enumerator_Dispose_m6624284E8A1411B470779E87D52917586538EAD2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0017_1:
			{
				// foreach(Node node in neighborNodes) {
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3;
				L_3 = Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_inline((&V_2), Enumerator_get_Current_m59125C646B4A71E68484CBE5429C1D57B96CC2E7_RuntimeMethod_var);
				V_3 = L_3;
				// if (node.agentsAtNode.Count > 0 && disallowOccupied) {
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = V_3;
				List_1_t257195305960CD8CCADD8B60F4C53A3150A2BB7D* L_5 = L_4->___agentsAtNode_11;
				int32_t L_6;
				L_6 = List_1_get_Count_m3258C5A7A54E2BAD994DBC96C02ED9395DF90951_inline(L_5, List_1_get_Count_m3258C5A7A54E2BAD994DBC96C02ED9395DF90951_RuntimeMethod_var);
				bool L_7 = ___disallowOccupied1;
				if (((int32_t)(((((int32_t)L_6) > ((int32_t)0))? 1 : 0)&(int32_t)L_7)))
				{
					goto IL_006f_1;
				}
			}
			{
				// if (! System.String.IsNullOrEmpty(type) && ! nodeMap.IsNodeType(this, type)) {
				String_t* L_8 = ___type2;
				bool L_9;
				L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
				if (L_9)
				{
					goto IL_0048_1;
				}
			}
			{
				Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_10 = __this->___nodeMap_10;
				String_t* L_11 = ___type2;
				bool L_12;
				L_12 = Map_IsNodeType_mA0F9C7A448AEAD4E345A8714E333377836C5B18E(L_10, __this, L_11, NULL);
				if (!L_12)
				{
					goto IL_006f_1;
				}
			}

IL_0048_1:
			{
				// float dist = Vector3.Distance(node.transform.position, this.transform.position);
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_13 = V_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
				float L_18;
				L_18 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_15, L_17, NULL);
				V_4 = L_18;
				// if (dist < closestDist) {
				float L_19 = V_4;
				float L_20 = V_1;
				if ((!(((float)L_19) < ((float)L_20))))
				{
					goto IL_006f_1;
				}
			}
			{
				// closestDist = dist;
				float L_21 = V_4;
				V_1 = L_21;
				// closestNode = node;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_22 = V_3;
				V_0 = L_22;
			}

IL_006f_1:
			{
				// foreach(Node node in neighborNodes) {
				bool L_23;
				L_23 = Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534((&V_2), Enumerator_MoveNext_m9EF2B7B7204B6B42E838A030ED9254B4B20B2534_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// return closestNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_24 = V_0;
		return L_24;
	}
}
// System.Void JSNodeMap.Node::Redraw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Redraw_m09A29677E6F251BE1B3375210492977DB642FFBB (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) 
{
	{
		// if (nodeMap.drawMode == DrawMode.Sprite) {
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___nodeMap_10;
		int32_t L_1 = L_0->___drawMode_7;
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		// spriteRenderer.sprite = nodeMap.nodeData.nodeTypes[nodeType].sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRenderer_4;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_3 = __this->___nodeMap_10;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_4 = L_3->___nodeData_15;
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_5 = L_4->___nodeTypes_4;
		int32_t L_6 = __this->___nodeType_9;
		int32_t L_7 = L_6;
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = L_8->___sprite_2;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_2, L_9, NULL);
		return;
	}

IL_0035:
	{
		// meshFilter.mesh = nodeMap.nodeData.nodeTypes[nodeType].mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = __this->___meshFilter_6;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_11 = __this->___nodeMap_10;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_12 = L_11->___nodeData_15;
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_13 = L_12->___nodeTypes_4;
		int32_t L_14 = __this->___nodeType_9;
		int32_t L_15 = L_14;
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17 = L_16->___mesh_1;
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_10, L_17, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Node::SetDrawMode(JSNodeMap.DrawMode,JSNodeMap.NodeTypeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SetDrawMode_m44B71D8B76BBFDB61EA53DC176A618004E980AD5 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, int32_t ___drawMode0, NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA47EE6A3C6E42C332F0EF138AA8F7CB709B079D);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (drawMode == DrawMode.Sprite) {
		int32_t L_0 = ___drawMode0;
		if (L_0)
		{
			goto IL_0121;
		}
	}
	{
		// DestroyImmediate(meshFilter);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1 = __this->___meshFilter_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_1, NULL);
		// DestroyImmediate(meshRenderer);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___meshRenderer_5;
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
		// DestroyImmediate(col);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_3 = __this->___col_7;
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_3, NULL);
		// meshFilter = null;
		__this->___meshFilter_6 = (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_6), (void*)(MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL);
		// meshRenderer = null;
		__this->___meshRenderer_5 = (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_5), (void*)(MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL);
		// col = null;
		__this->___col_7 = (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_7), (void*)(BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL);
		// if (spriteRenderer == null) {
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___spriteRenderer_4;
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// spriteRenderer = gameObject.AddComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
		L_7 = GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4(L_6, GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4_RuntimeMethod_var);
		__this->___spriteRenderer_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_4), (void*)L_7);
	}

IL_005b:
	{
		// spriteRenderer.sprite = data.nodeTypes[nodeType].sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___spriteRenderer_4;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_9 = ___data1;
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_10 = L_9->___nodeTypes_4;
		int32_t L_11 = __this->___nodeType_9;
		int32_t L_12 = L_11;
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = L_13->___sprite_2;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_8, L_14, NULL);
		// spriteRenderer.flipY = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = __this->___spriteRenderer_4;
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_15, (bool)1, NULL);
		// transform.localRotation = Quaternion.Euler(90f, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((90.0f), (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_17, NULL);
		// foreach (Path path in paths) {
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_18 = __this->___paths_12;
		Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 L_19;
		L_19 = List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160(L_18, List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		V_0 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45((&V_0), Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d6_1;
			}

IL_00b1_1:
			{
				// foreach (Path path in paths) {
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_20;
				L_20 = Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_inline((&V_0), Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
				// path.transform.localRotation = Quaternion.Euler(0f, 0f, 0f);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
				L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
				L_22 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_22, NULL);
			}

IL_00d6_1:
			{
				// foreach (Path path in paths) {
				bool L_23;
				L_23 = Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77((&V_0), Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00b1_1;
				}
			}
			{
				goto IL_00ef;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ef:
	{
		// spriteRenderer.sortingLayerName = "NodeMap";
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___spriteRenderer_4;
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_24, _stringLiteralEA47EE6A3C6E42C332F0EF138AA8F7CB709B079D, NULL);
		// spriteRenderer.sortingOrder = 2;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___spriteRenderer_4;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_25, 2, NULL);
		// spriteRenderer.enabled = drawNode;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_26 = __this->___spriteRenderer_4;
		bool L_27 = __this->___drawNode_13;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_26, L_27, NULL);
		goto IL_021e;
	}

IL_0121:
	{
		// DestroyImmediate(spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_28 = __this->___spriteRenderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_28, NULL);
		// DestroyImmediate(col);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_29 = __this->___col_7;
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_29, NULL);
		// spriteRenderer = null;
		__this->___spriteRenderer_4 = (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_4), (void*)(SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)NULL);
		// col = null;
		__this->___col_7 = (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_7), (void*)(BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL);
		// if (meshFilter == null) {
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_30 = __this->___meshFilter_6;
		bool L_31;
		L_31 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_0164;
		}
	}
	{
		// meshFilter = gameObject.AddComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_33;
		L_33 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_32, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		__this->___meshFilter_6 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_6), (void*)L_33);
	}

IL_0164:
	{
		// meshFilter.mesh = data.nodeTypes[nodeType].mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_34 = __this->___meshFilter_6;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_35 = ___data1;
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_36 = L_35->___nodeTypes_4;
		int32_t L_37 = __this->___nodeType_9;
		int32_t L_38 = L_37;
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_40 = L_39->___mesh_1;
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_34, L_40, NULL);
		// if (meshRenderer == null) {
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_41 = __this->___meshRenderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_01a0;
		}
	}
	{
		// meshRenderer = gameObject.AddComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_44;
		L_44 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_43, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		__this->___meshRenderer_5 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_5), (void*)L_44);
	}

IL_01a0:
	{
		// meshRenderer.sharedMaterial = data.meshMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_45 = __this->___meshRenderer_5;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_46 = ___data1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = L_46->___meshMaterial_6;
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_45, L_47, NULL);
		// transform.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_48, L_49, NULL);
		// foreach(Path path in paths) {
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_50 = __this->___paths_12;
		Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 L_51;
		L_51 = List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160(L_50, List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		V_0 = L_51;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01ff:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45((&V_0), Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01f4_1;
			}

IL_01cf_1:
			{
				// foreach(Path path in paths) {
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_52;
				L_52 = Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_inline((&V_0), Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
				// path.transform.localRotation = Quaternion.Euler(90f, 0f, 0f);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
				L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_52, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
				L_54 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((90.0f), (0.0f), (0.0f), NULL);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_53, L_54, NULL);
			}

IL_01f4_1:
			{
				// foreach(Path path in paths) {
				bool L_55;
				L_55 = Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77((&V_0), Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
				if (L_55)
				{
					goto IL_01cf_1;
				}
			}
			{
				goto IL_020d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_020d:
	{
		// meshRenderer.enabled = drawNode;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_56 = __this->___meshRenderer_5;
		bool L_57 = __this->___drawNode_13;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_56, L_57, NULL);
	}

IL_021e:
	{
		// if (col == null) {
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_58 = __this->___col_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_58, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_59)
		{
			goto IL_023d;
		}
	}
	{
		// col = gameObject.AddComponent<BoxCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_61;
		L_61 = GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23(L_60, GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		__this->___col_7 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_7), (void*)L_61);
	}

IL_023d:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Node::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SetVisible_m28C300ECB94CFCC5305156892C1CBD337A2D7591 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, bool ___isVisible0, const RuntimeMethod* method) 
{
	{
		// if (nodeMap.drawMode == DrawMode.Sprite) {
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = __this->___nodeMap_10;
		int32_t L_1 = L_0->___drawMode_7;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// spriteRenderer.enabled = isVisible;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRenderer_4;
		bool L_3 = ___isVisible0;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, L_3, NULL);
		goto IL_0027;
	}

IL_001b:
	{
		// meshRenderer.enabled = isVisible;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___meshRenderer_5;
		bool L_5 = ___isVisible0;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, L_5, NULL);
	}

IL_0027:
	{
		// drawNode = isVisible;
		bool L_6 = ___isVisible0;
		__this->___drawNode_13 = L_6;
		// }
		return;
	}
}
// System.Void JSNodeMap.Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m885EA3AD1EA150CEE5AC218B24A5B6B9262EFED7 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string nodeName = "Node ";
		__this->___nodeName_8 = _stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeName_8), (void*)_stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006);
		// public bool drawNode = true;
		__this->___drawNode_13 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single JSNodeMap.Path::get_Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_get_Distance_mDF7F2DD98AEAB7728FBD7A53B8CA65E58A1D608F (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	{
		// return Vector3.Distance (fromNode.transform.position, toNode.transform.position);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = __this->___fromNode_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = __this->___toNode_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_2, L_5, NULL);
		return L_6;
	}
}
// System.Void JSNodeMap.Path::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_Awake_m61693CA0A3A0BA75640FC129219DD3B20A523888 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m72E1E786359C506306BD51117CB3B26CEA33FCDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (passExemptions == null) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___passExemptions_15;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// passExemptions = new List<string> ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___passExemptions_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___passExemptions_15), (void*)L_1);
	}

IL_0013:
	{
		// if (markerPosList == null) {
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_2 = __this->___markerPosList_19;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// markerPosList = new List<float> ();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_3, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->___markerPosList_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___markerPosList_19), (void*)L_3);
	}

IL_0026:
	{
		// if (movementOverrides == null) {
		List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* L_4 = __this->___movementOverrides_16;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		// movementOverrides = new List<MovementOverride> ();
		List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* L_5 = (List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420*)il2cpp_codegen_object_new(List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420_il2cpp_TypeInfo_var);
		List_1__ctor_m72E1E786359C506306BD51117CB3B26CEA33FCDB(L_5, List_1__ctor_m72E1E786359C506306BD51117CB3B26CEA33FCDB_RuntimeMethod_var);
		__this->___movementOverrides_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movementOverrides_16), (void*)L_5);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::ClearPathMarkers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_ClearPathMarkers_mFC9D6AB3CD02C5ED699E0746AB639283055AB36A (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Marker[] markers = transform.GetComponentsInChildren<Marker> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_1;
		L_1 = Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8(L_0, Component_GetComponentsInChildren_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_mCC6569F0690912685AA939EAB3272C4EF26ED9B8_RuntimeMethod_var);
		// foreach (Marker marker in markers) {
		V_0 = L_1;
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		// foreach (Marker marker in markers) {
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// Object.DestroyImmediate (marker.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		// foreach (Marker marker in markers) {
		int32_t L_8 = V_1;
		MarkerU5BU5D_tC2769C06A3F4AFED4EC5C532DE6C9EC8EABDD33C* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// markerPosList.Clear ();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_10 = __this->___markerPosList_19;
		List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline(L_10, List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::CalculatePathPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_CalculatePathPoints_m2B051A180DF4B12D9903501C46671B59BE9F791D (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E4DD83E5AA52E1346572493F3F9FD52DE17AE27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_m54F10936E83042F05E851CA7A0C7E18767F29A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01895DA2F84292303D1E410CF8F1031D5BC57FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF78ADD54C605E9B284F747704AC53A581EDEE8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_3 = NULL;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// ClearPathMarkers ();
		Path_ClearPathMarkers_mFC9D6AB3CD02C5ED699E0746AB639283055AB36A(__this, NULL);
		// float pathDist = Vector3.Distance (fromNode.transform.position, toNode.transform.position);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = __this->___fromNode_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = __this->___toNode_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// int numMarkers = Mathf.FloorToInt (pathDist / markerSpacing);
		float L_7 = V_0;
		float L_8 = __this->___markerSpacing_18;
		int32_t L_9;
		L_9 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_7/L_8)), NULL);
		V_1 = L_9;
		// float actualSpacing = pathDist / numMarkers;
		float L_10 = V_0;
		int32_t L_11 = V_1;
		V_2 = ((float)(L_10/((float)L_11)));
		// List<Vector3> linePositions = new List<Vector3> ();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_12, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_3 = L_12;
		// linePositions.Add (fromNode.transform.position);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = V_3;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_14 = __this->___fromNode_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_13, L_16, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 1; i < numMarkers; i++) {
		V_4 = 1;
		goto IL_00db;
	}

IL_0060:
	{
		// float markerLoc = i * actualSpacing / pathDist;
		int32_t L_17 = V_4;
		float L_18 = V_2;
		float L_19 = V_0;
		V_5 = ((float)(((float)il2cpp_codegen_multiply(((float)L_17), L_18))/L_19));
		// Vector3 pos = Map.GetPointOnPath (this, markerLoc);
		float L_20 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Map_GetPointOnPath_mD244D42A53DFEDF7C9B283004846C9C88E0A7807(__this, L_20, NULL);
		V_6 = L_21;
		// markerPosList.Add (markerLoc);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_22 = __this->___markerPosList_19;
		float L_23 = V_5;
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_22, L_23, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// linePositions.Add (pos);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_6;
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_24, L_25, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// if (drawMarkers) {
		bool L_26 = __this->___drawMarkers_7;
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		// GameObject markerObj = new GameObject ("Marker");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_27, _stringLiteral01895DA2F84292303D1E410CF8F1031D5BC57FDD, NULL);
		// markerObj.transform.SetParent (transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_29, L_30, NULL);
		// markerObj.transform.position = pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = L_28;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_6;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_33, NULL);
		// markerObj.name = "PathMarker";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = L_31;
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_34, _stringLiteralECF78ADD54C605E9B284F747704AC53A581EDEE8, NULL);
		// markerObj.isStatic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		GameObject_set_isStatic_m0468F0E4553F5B3DDBE03F3788BE0A1A3736839C(L_35, (bool)1, NULL);
		// Marker newPathMarker = markerObj.AddComponent<Marker> ();
		Marker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48* L_36;
		L_36 = GameObject_AddComponent_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_m54F10936E83042F05E851CA7A0C7E18767F29A77(L_35, GameObject_AddComponent_TisMarker_t18F0CD5325CD3216E25B317FDE76BCA3D8AB9B48_m54F10936E83042F05E851CA7A0C7E18767F29A77_RuntimeMethod_var);
		// newPathMarker.Initialize (this);
		Marker_Initialize_m05B0EE89CED8F6E833879B2FBDCD032716573722(L_36, __this, NULL);
	}

IL_00d5:
	{
		// for (int i = 1; i < numMarkers; i++) {
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00db:
	{
		// for (int i = 1; i < numMarkers; i++) {
		int32_t L_38 = V_4;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0060;
		}
	}
	{
		// linePositions.Add (toNode.transform.position);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_40 = V_3;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_41 = __this->___toNode_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_40, L_43, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// if (line) {
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_44 = __this->___line_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_44, NULL);
		if (!L_45)
		{
			goto IL_013a;
		}
	}
	{
		// if (drawLine) {
		bool L_46 = __this->___drawLine_8;
		if (!L_46)
		{
			goto IL_012e;
		}
	}
	{
		// line.positionCount = linePositions.Count ();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_47 = __this->___line_21;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_48 = V_3;
		int32_t L_49;
		L_49 = Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E4DD83E5AA52E1346572493F3F9FD52DE17AE27(L_48, Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E4DD83E5AA52E1346572493F3F9FD52DE17AE27_RuntimeMethod_var);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_47, L_49, NULL);
		// line.SetPositions (linePositions.ToArray ());
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_50 = __this->___line_21;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_51 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52;
		L_52 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_51, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_50, L_52, NULL);
		return;
	}

IL_012e:
	{
		// line.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_53 = __this->___line_21;
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_53, 0, NULL);
	}

IL_013a:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::Initialize(JSNodeMap.Map,JSNodeMap.Node,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_Initialize_mCB0831FE80635E7627F6DD97F6D8E8663CE650F0 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, Map_t79AD168245EE60863408C85B6F3C996626E98A8B* ___nodeMap0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___fromNode1, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___toNode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.nodeMap = nodeMap;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_0 = ___nodeMap0;
		__this->___nodeMap_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeMap_20), (void*)L_0);
		// this.markerSpacing = nodeMap.defaultMarkerSpacing;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_1 = ___nodeMap0;
		float L_2 = L_1->___defaultMarkerSpacing_5;
		__this->___markerSpacing_18 = L_2;
		// this.fromNode = fromNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = ___fromNode1;
		__this->___fromNode_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fromNode_4), (void*)L_3);
		// this.toNode = toNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = ___toNode2;
		__this->___toNode_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toNode_5), (void*)L_4);
		// this.drawMarkers = nodeMap.drawMarkers;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_5 = ___nodeMap0;
		bool L_6 = L_5->___drawMarkers_10;
		__this->___drawMarkers_7 = L_6;
		// this.drawLine = nodeMap.drawLines;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_7 = ___nodeMap0;
		bool L_8 = L_7->___drawLines_11;
		__this->___drawLine_8 = L_8;
		// this.pathDirection = nodeMap.defaultPathDirection;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_9 = ___nodeMap0;
		int32_t L_10 = L_9->___defaultPathDirection_14;
		__this->___pathDirection_9 = L_10;
		// this.line = gameObject.GetComponent<LineRenderer> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_12;
		L_12 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_11, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		__this->___line_21 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_21), (void*)L_12);
		// SetLineDefaults ();
		Path_SetLineDefaults_mDB7FD619F303240B3661BABE5233BA33A29724A9(__this, NULL);
		// }
		return;
	}
}
// System.Boolean JSNodeMap.Path::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsValid_m42E946CA82F60FEB1E456CD0FD5F4750E8ADBB50 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (fromNode == null || toNode == null) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = __this->___fromNode_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = __this->___toNode_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void JSNodeMap.Path::RedrawMarkers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_RedrawMarkers_m54F15670819F11959677E88870658AEBEABB7C8C (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	{
		// CalculatePathPoints ();
		Path_CalculatePathPoints_m2B051A180DF4B12D9903501C46671B59BE9F791D(__this, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_Reverse_mE607CAC107BCCD184F630528F061D4F62BC6E56A (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_0 = NULL;
	{
		// Node newTo = fromNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = __this->___fromNode_4;
		V_0 = L_0;
		// fromNode = toNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = __this->___toNode_5;
		__this->___fromNode_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fromNode_4), (void*)L_1);
		// toNode = newTo;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = V_0;
		__this->___toNode_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toNode_5), (void*)L_2);
		// transform.SetParent (fromNode.gameObject.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = __this->___fromNode_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_6, NULL);
		// transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// RedrawMarkers ();
		Path_RedrawMarkers_m54F15670819F11959677E88870658AEBEABB7C8C(__this, NULL);
		// nodeMap.Refresh ();
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_9 = __this->___nodeMap_20;
		Map_Refresh_m3766143B274B49B6D0607D8DB6D7483AEA8E2AA2(L_9, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::SetVisibleMarkers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_SetVisibleMarkers_m984202E0F26BA728B08BDCEE6FEC90FEF1579852 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, bool ___status0, const RuntimeMethod* method) 
{
	{
		// CalculatePathPoints ();
		Path_CalculatePathPoints_m2B051A180DF4B12D9903501C46671B59BE9F791D(__this, NULL);
		// drawMarkers = status;
		bool L_0 = ___status0;
		__this->___drawMarkers_7 = L_0;
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::SetVisibleLine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_SetVisibleLine_m876CE67BAB24472A4DE36AAC811663F28EAD9520 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, bool ___status0, const RuntimeMethod* method) 
{
	{
		// drawLine = status;
		bool L_0 = ___status0;
		__this->___drawLine_8 = L_0;
		// if (!drawLine) {
		bool L_1 = __this->___drawLine_8;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// line.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___line_21;
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_2, 0, NULL);
		return;
	}

IL_001c:
	{
		// CalculatePathPoints ();
		Path_CalculatePathPoints_m2B051A180DF4B12D9903501C46671B59BE9F791D(__this, NULL);
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::SetLineDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_SetLineDefaults_mDB7FD619F303240B3661BABE5233BA33A29724A9 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA47EE6A3C6E42C332F0EF138AA8F7CB709B079D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// line.alignment = this.nodeMap.lineOrientation;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___line_21;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_1 = __this->___nodeMap_20;
		int32_t L_2 = L_1->___lineOrientation_13;
		LineRenderer_set_alignment_m9755D4E7B9FDB0FC455CA17AD5F0EC5F22338466(L_0, L_2, NULL);
		// line.startWidth = 0.5f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___line_21;
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_3, (0.5f), NULL);
		// line.endWidth = 0.5f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->___line_21;
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_4, (0.5f), NULL);
		// line.widthMultiplier = this.nodeMap.lineWidth;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___line_21;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_6 = __this->___nodeMap_20;
		float L_7 = L_6->___lineWidth_12;
		LineRenderer_set_widthMultiplier_mB1B825C2AAE0BB5F05431DEDAC5856EF27478255(L_5, L_7, NULL);
		// line.sharedMaterial = this.nodeMap.nodeData.lineMaterial;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_8 = __this->___line_21;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_9 = __this->___nodeMap_20;
		NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* L_10 = L_9->___nodeData_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = L_10->___lineMaterial_7;
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_8, L_11, NULL);
		// line.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_12 = __this->___line_21;
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_12, 0, NULL);
		// line.sortingLayerName = "NodeMap";
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13 = __this->___line_21;
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_13, _stringLiteralEA47EE6A3C6E42C332F0EF138AA8F7CB709B079D, NULL);
		// line.sortingOrder = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14 = __this->___line_21;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_14, 0, NULL);
		// }
		return;
	}
}
// JSNodeMap.Node JSNodeMap.Path::GetOtherEnd(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* Path_GetOtherEnd_mD023DF4FC5243A37B30E084936E6A13BCF9908C5 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (fromNode == node) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = __this->___fromNode_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return toNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = __this->___toNode_5;
		return L_3;
	}

IL_0015:
	{
		// return fromNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = __this->___fromNode_4;
		return L_4;
	}
}
// System.Void JSNodeMap.Path::AddOverride(System.Int32,JSNodeMap.MovementType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_AddOverride_m1DF3E56F1ECF10A6C794B96A1953121158534089 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, int32_t ___agentType0, int32_t ___movementType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8D17D0E32B3F5D31ED3A94EEC621B4243239C629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CAddOverrideU3Eb__0_m10247CC512C77792CBB81CC671DFFC7B1A9FE98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3* V_0 = NULL;
	MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* V_1 = NULL;
	MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3* L_0 = (U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass31_0__ctor_mD0D74FB9D8487DC90FD22A5F45607C8D3F78F5EB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3* L_1 = V_0;
		int32_t L_2 = ___agentType0;
		L_1->___agentType_0 = L_2;
		// MovementOverride existingOverrideForAgent = movementOverrides.FirstOrDefault (o => o.agentType == agentType);
		List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* L_3 = __this->___movementOverrides_16;
		U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3* L_4 = V_0;
		Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2* L_5 = (Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2*)il2cpp_codegen_object_new(Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2_il2cpp_TypeInfo_var);
		Func_2__ctor_mC300195B494AE4EAED8A70B178868E2F94858C51(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CAddOverrideU3Eb__0_m10247CC512C77792CBB81CC671DFFC7B1A9FE98A_RuntimeMethod_var), NULL);
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_6;
		L_6 = Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650(L_3, L_5, Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650_RuntimeMethod_var);
		V_1 = L_6;
		// if (existingOverrideForAgent == null) {
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_7 = V_1;
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		// MovementOverride newOverride = new MovementOverride () {
		//     agentType = agentType,
		//         movement = movementType
		// };
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_8 = (MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222*)il2cpp_codegen_object_new(MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_il2cpp_TypeInfo_var);
		MovementOverride__ctor_m6C606B77FA949C6C0855FA6E856DDAA46D00E7EE(L_8, NULL);
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_9 = L_8;
		U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3* L_10 = V_0;
		int32_t L_11 = L_10->___agentType_0;
		L_9->___agentType_0 = L_11;
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_12 = L_9;
		int32_t L_13 = ___movementType1;
		L_12->___movement_1 = L_13;
		V_2 = L_12;
		// movementOverrides.Add (newOverride);
		List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* L_14 = __this->___movementOverrides_16;
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_15 = V_2;
		List_1_Add_m8D17D0E32B3F5D31ED3A94EEC621B4243239C629_inline(L_14, L_15, List_1_Add_m8D17D0E32B3F5D31ED3A94EEC621B4243239C629_RuntimeMethod_var);
		return;
	}

IL_004e:
	{
		// existingOverrideForAgent.movement = movementType;
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_16 = V_1;
		int32_t L_17 = ___movementType1;
		L_16->___movement_1 = L_17;
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::RemoveOverride(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_RemoveOverride_mD6297F231370889CC8B287B2B460F2F3338A8BF9 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, int32_t ___agentType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF107E9FEEE65CA84E1F282F6EBCDFC854DDA3EAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CRemoveOverrideU3Eb__0_mAAA31A7BF0C96B00D4E24B774D0D3BEE2FD97EBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA* V_0 = NULL;
	MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA* L_0 = (U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_0__ctor_mBF943216FAB8C787190D9F27BA3D9E90B3B66EC0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA* L_1 = V_0;
		int32_t L_2 = ___agentType0;
		L_1->___agentType_0 = L_2;
		// MovementOverride existingOverrideForAgent = movementOverrides.FirstOrDefault (o => o.agentType == agentType);
		List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* L_3 = __this->___movementOverrides_16;
		U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA* L_4 = V_0;
		Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2* L_5 = (Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2*)il2cpp_codegen_object_new(Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2_il2cpp_TypeInfo_var);
		Func_2__ctor_mC300195B494AE4EAED8A70B178868E2F94858C51(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass32_0_U3CRemoveOverrideU3Eb__0_mAAA31A7BF0C96B00D4E24B774D0D3BEE2FD97EBB_RuntimeMethod_var), NULL);
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_6;
		L_6 = Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650(L_3, L_5, Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650_RuntimeMethod_var);
		V_1 = L_6;
		// if (existingOverrideForAgent != null) {
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// movementOverrides.Remove (existingOverrideForAgent);
		List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* L_8 = __this->___movementOverrides_16;
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_9 = V_1;
		bool L_10;
		L_10 = List_1_Remove_mF107E9FEEE65CA84E1F282F6EBCDFC854DDA3EAA(L_8, L_9, List_1_Remove_mF107E9FEEE65CA84E1F282F6EBCDFC854DDA3EAA_RuntimeMethod_var);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void JSNodeMap.Path::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_mA774A3B9738591E29BF1BB966CF687E3E3C14638 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* __this, const RuntimeMethod* method) 
{
	{
		// public bool drawInEdtior = true;
		__this->___drawInEdtior_6 = (bool)1;
		// public bool drawMarkers = true;
		__this->___drawMarkers_7 = (bool)1;
		// public float toFactor = 1f;
		__this->___toFactor_10 = (1.0f);
		// public float fromFactor = 1f;
		__this->___fromFactor_11 = (1.0f);
		// public float toSpeed = 1f;
		__this->___toSpeed_12 = (1.0f);
		// public float fromSpeed = 1f;
		__this->___fromSpeed_13 = (1.0f);
		// public bool passableByDefault = true;
		__this->___passableByDefault_14 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JSNodeMap.Path/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mD0D74FB9D8487DC90FD22A5F45607C8D3F78F5EB (U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean JSNodeMap.Path/<>c__DisplayClass31_0::<AddOverride>b__0(JSNodeMap.MovementOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CAddOverrideU3Eb__0_m10247CC512C77792CBB81CC671DFFC7B1A9FE98A (U3CU3Ec__DisplayClass31_0_t68E89CF04A7CD06B70ED9526F8D30FC0FD0367A3* __this, MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* ___o0, const RuntimeMethod* method) 
{
	{
		// MovementOverride existingOverrideForAgent = movementOverrides.FirstOrDefault (o => o.agentType == agentType);
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_0 = ___o0;
		int32_t L_1 = L_0->___agentType_0;
		int32_t L_2 = __this->___agentType_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void JSNodeMap.Path/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mBF943216FAB8C787190D9F27BA3D9E90B3B66EC0 (U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean JSNodeMap.Path/<>c__DisplayClass32_0::<RemoveOverride>b__0(JSNodeMap.MovementOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass32_0_U3CRemoveOverrideU3Eb__0_mAAA31A7BF0C96B00D4E24B774D0D3BEE2FD97EBB (U3CU3Ec__DisplayClass32_0_t2DD1F8FE9E0E5DDA64098B7F1D631B03D7B226EA* __this, MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* ___o0, const RuntimeMethod* method) 
{
	{
		// MovementOverride existingOverrideForAgent = movementOverrides.FirstOrDefault (o => o.agentType == agentType);
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_0 = ___o0;
		int32_t L_1 = L_0->___agentType_0;
		int32_t L_2 = __this->___agentType_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void JSNodeMap.MovementOverride::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementOverride__ctor_m6C606B77FA949C6C0855FA6E856DDAA46D00E7EE (MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* __this, const RuntimeMethod* method) 
{
	{
		// public MovementType movement = MovementType.TwoWay;
		__this->___movement_1 = 2;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single JSNodeMap.Pathfinding::HCost(JSNodeMap.Node,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Pathfinding_HCost_m726446878145D95B1960E9418B0626E7160EA8BB (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___curNode0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___goalNode1, const RuntimeMethod* method) 
{
	{
		// return Vector3.Distance(curNode.transform.position, goalNode.transform.position);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___curNode0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_3 = ___goalNode1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_2, L_5, NULL);
		return L_6;
	}
}
// System.Single JSNodeMap.Pathfinding::GCost(JSNodeMap.Node,JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Pathfinding_GCost_m6F2C14AD9B9A0CD1B442CF40A115157FC880E746 (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___curNode0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___neighbor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_0 = NULL;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// Path path = Map.FindValidPath(curNode, neighbor);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___curNode0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = ___neighbor1;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_2;
		L_2 = Map_FindValidPath_m9F25634F168EF72B7341E829D11A7452C807A5AF(L_0, L_1, NULL);
		V_0 = L_2;
		// float factor = (path.fromNode == curNode) ? path.fromFactor : path.toFactor;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_3 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_4 = L_3->___fromNode_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = ___curNode0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_7 = V_0;
		float L_8 = L_7->___toFactor_10;
		G_B3_0 = L_8;
		goto IL_0024;
	}

IL_001e:
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_9 = V_0;
		float L_10 = L_9->___fromFactor_11;
		G_B3_0 = L_10;
	}

IL_0024:
	{
		V_1 = G_B3_0;
		// return path.Distance * factor;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_11 = V_0;
		float L_12;
		L_12 = Path_get_Distance_mDF7F2DD98AEAB7728FBD7A53B8CA65E58A1D608F(L_11, NULL);
		float L_13 = V_1;
		return ((float)il2cpp_codegen_multiply(L_12, L_13));
	}
}
// System.Collections.Generic.List`1<JSNodeMap.Node> JSNodeMap.Pathfinding::GetNeighbors(JSNodeMap.Node,JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t655259B818E9860056FF46909A95E99467EDA337* Pathfinding_GetNeighbors_mB8771D1E02E0B8586D5831D362B3C1B80671985C (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m23846E1021C3A13697C7D1320F51D6BC290E455A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m06AA2F401C60886DC963EF3F8CB2A17717EAC37A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC9563980C43DC1977092930640DB39D439EDCB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t60AB00C4696613F07A21F701E6D4B1D807E28A2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNeighborsU3Eb__2_0_mC5960720D6E368DD83638CD04736E6AD2B0B5A66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetNeighborsU3Eb__1_m4C651BBFE2BEE4137EB019B50FE959D022030C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* V_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_1 = NULL;
	Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* V_5 = NULL;
	Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* V_6 = NULL;
	Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* G_B9_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* G_B9_1 = NULL;
	Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* G_B8_0 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* G_B8_1 = NULL;
	Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_0 = (U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m58389BDE977C2D71D5208AB1ACEB8BE8E601B6C7(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_1 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = ___node0;
		L_1->___node_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___node_0), (void*)L_2);
		// List<Node> neighbors = new List<Node>();
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_3 = (List_1_t655259B818E9860056FF46909A95E99467EDA337*)il2cpp_codegen_object_new(List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203(L_3, List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var);
		V_1 = L_3;
		// foreach (Path path in node.paths) {
		U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_4 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = L_4->___node_0;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_6 = L_5->___paths_12;
		Enumerator_tC72D14956C07CFBCB0B5E2BF12E085FC34D92DD6 L_7;
		L_7 = List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160(L_6, List_1_GetEnumerator_mF5F12B3804B3ABDD8B13E772166B4DE48CD50160_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45((&V_2), Enumerator_Dispose_m095EC2491D3EE1B11986219D18C4D21B3614AB45_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0049_1;
			}

IL_0026_1:
			{
				// foreach (Path path in node.paths) {
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_8;
				L_8 = Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_inline((&V_2), Enumerator_get_Current_m2A693AFF2250937E74D6D20A098D01B1592CFBD2_RuntimeMethod_var);
				V_3 = L_8;
				// if (AgentCanMoveAcross(path, node, agent)) {
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_9 = V_3;
				U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_10 = V_0;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_11 = L_10->___node_0;
				Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_12 = ___agent1;
				bool L_13;
				L_13 = Pathfinding_AgentCanMoveAcross_m2EAB5192D0D1A8EA0F4D723BB2ADD5F30A1E2324(L_9, L_11, L_12, NULL);
				if (!L_13)
				{
					goto IL_0049_1;
				}
			}
			{
				// neighbors.Add(path.toNode);
				List_1_t655259B818E9860056FF46909A95E99467EDA337* L_14 = V_1;
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_15 = V_3;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_16 = L_15->___toNode_5;
				List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_inline(L_14, L_16, List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_RuntimeMethod_var);
			}

IL_0049_1:
			{
				// foreach (Path path in node.paths) {
				bool L_17;
				L_17 = Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77((&V_2), Enumerator_MoveNext_m47FE9AA83FEC72CA77747958C8D16D7FC615FF77_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// foreach(Path path in node.nodeMap.mapNodes.SelectMany(n => n.paths).Where(p => p.toNode == node)) {
		U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_18 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_19 = L_18->___node_0;
		Map_t79AD168245EE60863408C85B6F3C996626E98A8B* L_20 = L_19->___nodeMap_10;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_21 = L_20->___mapNodes_16;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var);
		Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* L_22 = ((U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* L_23 = L_22;
		G_B8_0 = L_23;
		G_B8_1 = L_21;
		if (L_23)
		{
			G_B9_0 = L_23;
			G_B9_1 = L_21;
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var);
		U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47* L_24 = ((U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* L_25 = (Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2*)il2cpp_codegen_object_new(Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2_il2cpp_TypeInfo_var);
		Func_2__ctor_m429C742B27A288E41344FE2CB1A7FCE8CDCEF209(L_25, L_24, (intptr_t)((void*)U3CU3Ec_U3CGetNeighborsU3Eb__2_0_mC5960720D6E368DD83638CD04736E6AD2B0B5A66_RuntimeMethod_var), NULL);
		Func_2_t90564C9795F291934FCA2738E9305816BEE06DF2* L_26 = L_25;
		((U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_26);
		G_B9_0 = L_26;
		G_B9_1 = G_B8_1;
	}

IL_0091:
	{
		RuntimeObject* L_27;
		L_27 = Enumerable_SelectMany_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m23846E1021C3A13697C7D1320F51D6BC290E455A(G_B9_1, G_B9_0, Enumerable_SelectMany_TisNode_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m23846E1021C3A13697C7D1320F51D6BC290E455A_RuntimeMethod_var);
		U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_28 = V_0;
		Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* L_29 = L_28->___U3CU3E9__1_1;
		Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* L_30 = L_29;
		G_B10_0 = L_30;
		G_B10_1 = L_27;
		if (L_30)
		{
			G_B11_0 = L_30;
			G_B11_1 = L_27;
			goto IL_00b7;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_31 = V_0;
		U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_32 = V_0;
		Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* L_33 = (Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94*)il2cpp_codegen_object_new(Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94_il2cpp_TypeInfo_var);
		Func_2__ctor_m79532BB9BE1562F4A6834A6A15A77F604D0BA1D0(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetNeighborsU3Eb__1_m4C651BBFE2BEE4137EB019B50FE959D022030C1C_RuntimeMethod_var), NULL);
		Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* L_34 = L_33;
		V_5 = L_34;
		L_31->___U3CU3E9__1_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___U3CU3E9__1_1), (void*)L_34);
		Func_2_t72887A57884D292A486D072F4D7134A8FBA33F94* L_35 = V_5;
		G_B11_0 = L_35;
		G_B11_1 = G_B10_1;
	}

IL_00b7:
	{
		RuntimeObject* L_36;
		L_36 = Enumerable_Where_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m06AA2F401C60886DC963EF3F8CB2A17717EAC37A(G_B11_1, G_B11_0, Enumerable_Where_TisPath_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41_m06AA2F401C60886DC963EF3F8CB2A17717EAC37A_RuntimeMethod_var);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<JSNodeMap.Path>::GetEnumerator() */, IEnumerable_1_tC9563980C43DC1977092930640DB39D439EDCB2E_il2cpp_TypeInfo_var, L_36);
		V_4 = L_37;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f6:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_38 = V_4;
					if (!L_38)
					{
						goto IL_0101;
					}
				}
				{
					RuntimeObject* L_39 = V_4;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_39);
				}

IL_0101:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00eb_1;
			}

IL_00c5_1:
			{
				// foreach(Path path in node.nodeMap.mapNodes.SelectMany(n => n.paths).Where(p => p.toNode == node)) {
				RuntimeObject* L_40 = V_4;
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_41;
				L_41 = InterfaceFuncInvoker0< Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<JSNodeMap.Path>::get_Current() */, IEnumerator_1_t60AB00C4696613F07A21F701E6D4B1D807E28A2E_il2cpp_TypeInfo_var, L_40);
				V_6 = L_41;
				// if (AgentCanMoveAcross(path, node, agent)) {
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_42 = V_6;
				U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* L_43 = V_0;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_44 = L_43->___node_0;
				Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_45 = ___agent1;
				bool L_46;
				L_46 = Pathfinding_AgentCanMoveAcross_m2EAB5192D0D1A8EA0F4D723BB2ADD5F30A1E2324(L_42, L_44, L_45, NULL);
				if (!L_46)
				{
					goto IL_00eb_1;
				}
			}
			{
				// neighbors.Add(path.fromNode);
				List_1_t655259B818E9860056FF46909A95E99467EDA337* L_47 = V_1;
				Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_48 = V_6;
				Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_49 = L_48->___fromNode_4;
				List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_inline(L_47, L_49, List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_RuntimeMethod_var);
			}

IL_00eb_1:
			{
				// foreach(Path path in node.nodeMap.mapNodes.SelectMany(n => n.paths).Where(p => p.toNode == node)) {
				RuntimeObject* L_50 = V_4;
				bool L_51;
				L_51 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_50);
				if (L_51)
				{
					goto IL_00c5_1;
				}
			}
			{
				goto IL_0102;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0102:
	{
		// return neighbors;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_52 = V_1;
		return L_52;
	}
}
// System.Boolean JSNodeMap.Pathfinding::AgentCanMoveAcross(JSNodeMap.Path,JSNodeMap.Node,JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pathfinding_AgentCanMoveAcross_m2EAB5192D0D1A8EA0F4D723BB2ADD5F30A1E2324 (Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___path0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node1, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CAgentCanMoveAcrossU3Eb__0_m7F95C55B0F6F289B4D76E194028B5855B26E7F1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD* V_0 = NULL;
	MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* V_1 = NULL;
	int32_t V_2 = 0;
	MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD* L_0 = (U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_mC71BCCA9A6CACA7094B9CF816A7B9C531DF70ED9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD* L_1 = V_0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = ___agent2;
		L_1->___agent_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___agent_0), (void*)L_2);
		// MovementOverride moveOR = (agent == null) ? null : path.movementOverrides.FirstOrDefault(o => o.agentType == agent.agentType);
		U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD* L_3 = V_0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_4 = L_3->___agent_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_6 = ___path0;
		List_1_t41673AC7E1EAA4B2D40EB6995F28A5BC88632420* L_7 = L_6->___movementOverrides_16;
		U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD* L_8 = V_0;
		Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2* L_9 = (Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2*)il2cpp_codegen_object_new(Func_2_t1F4E371F71263E3423DDB397E5993E2FE45212E2_il2cpp_TypeInfo_var);
		Func_2__ctor_mC300195B494AE4EAED8A70B178868E2F94858C51(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CAgentCanMoveAcrossU3Eb__0_m7F95C55B0F6F289B4D76E194028B5855B26E7F1E_RuntimeMethod_var), NULL);
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_10;
		L_10 = Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650(L_7, L_9, Enumerable_FirstOrDefault_TisMovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222_mE3B41DF313CF3E7B307E651E590D239D58D5F650_RuntimeMethod_var);
		G_B3_0 = L_10;
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = ((MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222*)(NULL));
	}

IL_0035:
	{
		V_1 = G_B3_0;
		// if (moveOR == null) {
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_11 = V_1;
		if (L_11)
		{
			goto IL_0042;
		}
	}
	{
		// checkMove = path.pathDirection;
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_12 = ___path0;
		int32_t L_13 = L_12->___pathDirection_9;
		V_2 = L_13;
		goto IL_0049;
	}

IL_0042:
	{
		// checkMove = moveOR.movement;
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_14 = V_1;
		int32_t L_15 = L_14->___movement_1;
		V_2 = L_15;
	}

IL_0049:
	{
		// if (checkMove == MovementType.TwoWay) {
		int32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_004f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// if (checkMove == MovementType.OneWay && path.fromNode == node) {
		int32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_18 = ___path0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_19 = L_18->___fromNode_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_20 = ___node1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0063;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0063:
	{
		// if (checkMove == MovementType.Reverse && path.toNode == node) {
		int32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_0077;
		}
	}
	{
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_23 = ___path0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_24 = L_23->___toNode_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25 = ___node1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_0077;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0077:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<JSNodeMap.Node> JSNodeMap.Pathfinding::FindRoute(JSNodeMap.Node,JSNodeMap.Node,JSNodeMap.Agent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t655259B818E9860056FF46909A95E99467EDA337* Pathfinding_FindRoute_m2934C1CD03C8D449CCC6F249BFA08E8DCA440FCE (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___startNode0, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___goalNode1, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___agent2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m54224B8D23176C84FBC97F77754B113AD7005C0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B7516703986A0C7CCCA178CD5DFFF84CB1C9D35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1FC1BC11C13E776D03C76C98BB840B55D1D59FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m85B6F60234DBC6A1E4E810CD3A604D2E386F20B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0391D62745B54C5A6C4FC9B9893363133C48D036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mAC2AE72DC8A59CE25A70201C5B3ECC76F7847AD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mBE215F95440DAB5DDCDFE508BEB334DF7136EB26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mEC1B707B2437973B1A7B26C1D83324B397CD4E77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mB1B320D56ADBE63978A83212A4BE28E0E75C4BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7B99A619827AAFA32C2BA36279146AF3C1823D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_mC2F40D0ABA5CD9602FAC2E98F488A3A3F7D6A9B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_2_Contains_m4776FED1FCD3E33540BEC951865C1D22FF7AD53E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_2_Pop_mD81AEB45B27F9A6D73E399B361E68F75D78E1DDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_2_Push_mDCFB59B5D87FD68CAF3EF963FF74CA80FB6571CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_2__ctor_mBB7D42A017E95EC8771F6D98D1004AF020C96CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_2_get_Count_mCF478E2780E9181F3485732FD84E99AEEF6BDAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_2_get_Top_mEF985F096AE4F6F425423B48CF5D970EF15DE71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* V_0 = NULL;
	HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F* V_1 = NULL;
	Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104* V_2 = NULL;
	Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* V_3 = NULL;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_4 = NULL;
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_5 = NULL;
	KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	List_1_t655259B818E9860056FF46909A95E99467EDA337* V_7 = NULL;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_8 = NULL;
	int32_t V_9 = 0;
	Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* V_10 = NULL;
	{
		// PriorityQueue<float, Node> openNodes = new PriorityQueue<float, Node>();
		PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* L_0 = (PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528*)il2cpp_codegen_object_new(PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528_il2cpp_TypeInfo_var);
		PriorityQueue_2__ctor_mBB7D42A017E95EC8771F6D98D1004AF020C96CFB(L_0, PriorityQueue_2__ctor_mBB7D42A017E95EC8771F6D98D1004AF020C96CFB_RuntimeMethod_var);
		V_0 = L_0;
		// HashSet<Node> checkedNodes = new HashSet<Node>();
		HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F* L_1 = (HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F*)il2cpp_codegen_object_new(HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mB1B320D56ADBE63978A83212A4BE28E0E75C4BD6(L_1, HashSet_1__ctor_mB1B320D56ADBE63978A83212A4BE28E0E75C4BD6_RuntimeMethod_var);
		V_1 = L_1;
		// Dictionary<Node, Node> pathTo = new Dictionary<Node, Node>();
		Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104* L_2 = (Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104*)il2cpp_codegen_object_new(Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B7516703986A0C7CCCA178CD5DFFF84CB1C9D35(L_2, Dictionary_2__ctor_m5B7516703986A0C7CCCA178CD5DFFF84CB1C9D35_RuntimeMethod_var);
		V_2 = L_2;
		// Dictionary<Node, float> gCost = new Dictionary<Node, float>();
		Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* L_3 = (Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092*)il2cpp_codegen_object_new(Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m54224B8D23176C84FBC97F77754B113AD7005C0B(L_3, Dictionary_2__ctor_m54224B8D23176C84FBC97F77754B113AD7005C0B_RuntimeMethod_var);
		V_3 = L_3;
		// pathTo[startNode] = null;
		Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104* L_4 = V_2;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_5 = ___startNode0;
		Dictionary_2_set_Item_m0391D62745B54C5A6C4FC9B9893363133C48D036(L_4, L_5, (Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*)NULL, Dictionary_2_set_Item_m0391D62745B54C5A6C4FC9B9893363133C48D036_RuntimeMethod_var);
		// gCost[startNode] = 0f;
		Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* L_6 = V_3;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_7 = ___startNode0;
		Dictionary_2_set_Item_mAC2AE72DC8A59CE25A70201C5B3ECC76F7847AD3(L_6, L_7, (0.0f), Dictionary_2_set_Item_mAC2AE72DC8A59CE25A70201C5B3ECC76F7847AD3_RuntimeMethod_var);
		// openNodes.Push(0f + HCost(startNode, goalNode), startNode);
		PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* L_8 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_9 = ___startNode0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_10 = ___goalNode1;
		float L_11;
		L_11 = Pathfinding_HCost_m726446878145D95B1960E9418B0626E7160EA8BB(L_9, L_10, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_12 = ___startNode0;
		PriorityQueue_2_Push_mDCFB59B5D87FD68CAF3EF963FF74CA80FB6571CE(L_8, ((float)il2cpp_codegen_add((0.0f), L_11)), L_12, PriorityQueue_2_Push_mDCFB59B5D87FD68CAF3EF963FF74CA80FB6571CE_RuntimeMethod_var);
		goto IL_011f;
	}

IL_0045:
	{
		// Node leafNode = openNodes.Top.Value;
		PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* L_13 = V_0;
		KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0 L_14;
		L_14 = PriorityQueue_2_get_Top_mEF985F096AE4F6F425423B48CF5D970EF15DE71B(L_13, PriorityQueue_2_get_Top_mEF985F096AE4F6F425423B48CF5D970EF15DE71B_RuntimeMethod_var);
		V_6 = L_14;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_15;
		L_15 = KeyValuePair_2_get_Value_m7B99A619827AAFA32C2BA36279146AF3C1823D89_inline((&V_6), KeyValuePair_2_get_Value_m7B99A619827AAFA32C2BA36279146AF3C1823D89_RuntimeMethod_var);
		V_4 = L_15;
		// if (leafNode == goalNode) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_16 = V_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_17 = ___goalNode1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0093;
		}
	}
	{
		// List<Node> route = new List<Node>();
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_19 = (List_1_t655259B818E9860056FF46909A95E99467EDA337*)il2cpp_codegen_object_new(List_1_t655259B818E9860056FF46909A95E99467EDA337_il2cpp_TypeInfo_var);
		List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203(L_19, List_1__ctor_mE2E65CB2F810B0349AC1B2F50767BC001598C203_RuntimeMethod_var);
		V_7 = L_19;
		// Node pointer = goalNode;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_20 = ___goalNode1;
		V_8 = L_20;
		goto IL_007f;
	}

IL_006c:
	{
		// route.Add(pointer);
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_21 = V_7;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_22 = V_8;
		List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_inline(L_21, L_22, List_1_Add_m557AAA4C537098D40762B5AA32E12B4C13812F8B_RuntimeMethod_var);
		// pointer = pathTo[pointer];
		Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104* L_23 = V_2;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_24 = V_8;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_25;
		L_25 = Dictionary_2_get_Item_m85B6F60234DBC6A1E4E810CD3A604D2E386F20B7(L_23, L_24, Dictionary_2_get_Item_m85B6F60234DBC6A1E4E810CD3A604D2E386F20B7_RuntimeMethod_var);
		V_8 = L_25;
	}

IL_007f:
	{
		// while (pointer != null) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_26 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_27)
		{
			goto IL_006c;
		}
	}
	{
		// route.Reverse();    // Invert route so we can follow it from start to finish
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_28 = V_7;
		List_1_Reverse_mC2F40D0ABA5CD9602FAC2E98F488A3A3F7D6A9B6(L_28, List_1_Reverse_mC2F40D0ABA5CD9602FAC2E98F488A3A3F7D6A9B6_RuntimeMethod_var);
		// return route;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_29 = V_7;
		return L_29;
	}

IL_0093:
	{
		// openNodes.Pop();
		PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* L_30 = V_0;
		KeyValuePair_2_t0963B72AED66096B6CA0BA92E8E384FE2E698BE0 L_31;
		L_31 = PriorityQueue_2_Pop_mD81AEB45B27F9A6D73E399B361E68F75D78E1DDE(L_30, PriorityQueue_2_Pop_mD81AEB45B27F9A6D73E399B361E68F75D78E1DDE_RuntimeMethod_var);
		// checkedNodes.Add(leafNode);
		HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F* L_32 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_33 = V_4;
		bool L_34;
		L_34 = HashSet_1_Add_mBE215F95440DAB5DDCDFE508BEB334DF7136EB26(L_32, L_33, HashSet_1_Add_mBE215F95440DAB5DDCDFE508BEB334DF7136EB26_RuntimeMethod_var);
		// List<Node> neighbors = GetNeighbors(leafNode, agent);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_35 = V_4;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_36 = ___agent2;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_37;
		L_37 = Pathfinding_GetNeighbors_mB8771D1E02E0B8586D5831D362B3C1B80671985C(L_35, L_36, NULL);
		V_5 = L_37;
		// for (int i = 0; i < neighbors.Count; i++) {
		V_9 = 0;
		goto IL_0114;
	}

IL_00b2:
	{
		// Node neighbor = neighbors[i];
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_38 = V_5;
		int32_t L_39 = V_9;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_40;
		L_40 = List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C(L_38, L_39, List_1_get_Item_mEA84722ADA6D452A8519A3257F5F0D8B6D47C46C_RuntimeMethod_var);
		V_10 = L_40;
		// if (! checkedNodes.Contains(neighbor) && ! openNodes.Contains(neighbor)) {
		HashSet_1_t1E35045DF8586016CF9F63FFD88028033C71B07F* L_41 = V_1;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_42 = V_10;
		bool L_43;
		L_43 = HashSet_1_Contains_mEC1B707B2437973B1A7B26C1D83324B397CD4E77(L_41, L_42, HashSet_1_Contains_mEC1B707B2437973B1A7B26C1D83324B397CD4E77_RuntimeMethod_var);
		if (L_43)
		{
			goto IL_010e;
		}
	}
	{
		PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* L_44 = V_0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_45 = V_10;
		bool L_46;
		L_46 = PriorityQueue_2_Contains_m4776FED1FCD3E33540BEC951865C1D22FF7AD53E(L_44, L_45, PriorityQueue_2_Contains_m4776FED1FCD3E33540BEC951865C1D22FF7AD53E_RuntimeMethod_var);
		if (L_46)
		{
			goto IL_010e;
		}
	}
	{
		// gCost[neighbor] = gCost[leafNode] + GCost(leafNode, neighbor);
		Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* L_47 = V_3;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_48 = V_10;
		Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* L_49 = V_3;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_50 = V_4;
		float L_51;
		L_51 = Dictionary_2_get_Item_m1FC1BC11C13E776D03C76C98BB840B55D1D59FA6(L_49, L_50, Dictionary_2_get_Item_m1FC1BC11C13E776D03C76C98BB840B55D1D59FA6_RuntimeMethod_var);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_52 = V_4;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_53 = V_10;
		float L_54;
		L_54 = Pathfinding_GCost_m6F2C14AD9B9A0CD1B442CF40A115157FC880E746(L_52, L_53, NULL);
		Dictionary_2_set_Item_mAC2AE72DC8A59CE25A70201C5B3ECC76F7847AD3(L_47, L_48, ((float)il2cpp_codegen_add(L_51, L_54)), Dictionary_2_set_Item_mAC2AE72DC8A59CE25A70201C5B3ECC76F7847AD3_RuntimeMethod_var);
		// pathTo[neighbor] = leafNode;
		Dictionary_2_tDA2BEEEEC1CE9318F0646FEB4436C28F807DB104* L_55 = V_2;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_56 = V_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_57 = V_4;
		Dictionary_2_set_Item_m0391D62745B54C5A6C4FC9B9893363133C48D036(L_55, L_56, L_57, Dictionary_2_set_Item_m0391D62745B54C5A6C4FC9B9893363133C48D036_RuntimeMethod_var);
		// openNodes.Push(gCost[neighbor] + HCost(neighbor, goalNode), neighbor);
		PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* L_58 = V_0;
		Dictionary_2_tBE2BD3026226FF001A63854E8E4BB72959426092* L_59 = V_3;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_60 = V_10;
		float L_61;
		L_61 = Dictionary_2_get_Item_m1FC1BC11C13E776D03C76C98BB840B55D1D59FA6(L_59, L_60, Dictionary_2_get_Item_m1FC1BC11C13E776D03C76C98BB840B55D1D59FA6_RuntimeMethod_var);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_62 = V_10;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_63 = ___goalNode1;
		float L_64;
		L_64 = Pathfinding_HCost_m726446878145D95B1960E9418B0626E7160EA8BB(L_62, L_63, NULL);
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_65 = V_10;
		PriorityQueue_2_Push_mDCFB59B5D87FD68CAF3EF963FF74CA80FB6571CE(L_58, ((float)il2cpp_codegen_add(L_61, L_64)), L_65, PriorityQueue_2_Push_mDCFB59B5D87FD68CAF3EF963FF74CA80FB6571CE_RuntimeMethod_var);
	}

IL_010e:
	{
		// for (int i = 0; i < neighbors.Count; i++) {
		int32_t L_66 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0114:
	{
		// for (int i = 0; i < neighbors.Count; i++) {
		int32_t L_67 = V_9;
		List_1_t655259B818E9860056FF46909A95E99467EDA337* L_68 = V_5;
		int32_t L_69;
		L_69 = List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_inline(L_68, List_1_get_Count_mC48621DBC4E9466FEBE698B24036E2F39D39A04E_RuntimeMethod_var);
		if ((((int32_t)L_67) < ((int32_t)L_69)))
		{
			goto IL_00b2;
		}
	}

IL_011f:
	{
		// while (openNodes.Count > 0) {
		PriorityQueue_2_t2C95DE4C24DF471C8E3AAB449C5A419E3A18C528* L_70 = V_0;
		int32_t L_71;
		L_71 = PriorityQueue_2_get_Count_mCF478E2780E9181F3485732FD84E99AEEF6BDAE5(L_70, PriorityQueue_2_get_Count_mCF478E2780E9181F3485732FD84E99AEEF6BDAE5_RuntimeMethod_var);
		if ((((int32_t)L_71) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// return null;
		return (List_1_t655259B818E9860056FF46909A95E99467EDA337*)NULL;
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
// System.Void JSNodeMap.Pathfinding/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m58389BDE977C2D71D5208AB1ACEB8BE8E601B6C7 (U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean JSNodeMap.Pathfinding/<>c__DisplayClass2_0::<GetNeighbors>b__1(JSNodeMap.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CGetNeighborsU3Eb__1_m4C651BBFE2BEE4137EB019B50FE959D022030C1C (U3CU3Ec__DisplayClass2_0_t0D2C7DEC0835AD8298472FED2682645A2ABD4430* __this, Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foreach(Path path in node.nodeMap.mapNodes.SelectMany(n => n.paths).Where(p => p.toNode == node)) {
		Path_t4795F77E6D21ACD2B27FA1E73E91DE66E6541D41* L_0 = ___p0;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_1 = L_0->___toNode_5;
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_2 = __this->___node_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_2, NULL);
		return L_3;
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
// System.Void JSNodeMap.Pathfinding/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCF044CF954C12768B7A4F965A9352EB8A3E63749 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47* L_0 = (U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47*)il2cpp_codegen_object_new(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m195B924C55FB29F5C4ED227DB3F532403152602D(L_0, NULL);
		((U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void JSNodeMap.Pathfinding/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m195B924C55FB29F5C4ED227DB3F532403152602D (U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<JSNodeMap.Path> JSNodeMap.Pathfinding/<>c::<GetNeighbors>b__2_0(JSNodeMap.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetNeighborsU3Eb__2_0_mC5960720D6E368DD83638CD04736E6AD2B0B5A66 (U3CU3Ec_t604911B69F8AA201319DF541669EEFEB4F5EED47* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___n0, const RuntimeMethod* method) 
{
	{
		// foreach(Path path in node.nodeMap.mapNodes.SelectMany(n => n.paths).Where(p => p.toNode == node)) {
		Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* L_0 = ___n0;
		List_1_t8EDCEE8C35DF934DB0C7AAA3F2138AF135E6D196* L_1 = L_0->___paths_12;
		return L_1;
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
// System.Void JSNodeMap.Pathfinding/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mC71BCCA9A6CACA7094B9CF816A7B9C531DF70ED9 (U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean JSNodeMap.Pathfinding/<>c__DisplayClass3_0::<AgentCanMoveAcross>b__0(JSNodeMap.MovementOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CAgentCanMoveAcrossU3Eb__0_m7F95C55B0F6F289B4D76E194028B5855B26E7F1E (U3CU3Ec__DisplayClass3_0_tD9221039762E17CA10ECED4AC75C063B794588BD* __this, MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* ___o0, const RuntimeMethod* method) 
{
	{
		// MovementOverride moveOR = (agent == null) ? null : path.movementOverrides.FirstOrDefault(o => o.agentType == agent.agentType);
		MovementOverride_t2CDCC78A7035084E2CEC8F42B47D66E1EE602222* L_0 = ___o0;
		int32_t L_1 = L_0->___agentType_0;
		Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* L_2 = __this->___agent_0;
		int32_t L_3 = L_2->___agentType_4;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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
// System.String[] JSNodeMap.NodeTypeData::get_NodeTypeNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NodeTypeData_get_NodeTypeNames_mE21C677CED0E861E24F2668F9E9B5233244AB590 (NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_TisString_t_m660D6AE569202A7658562B679DAB48CA5E75DFD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_NodeTypeNamesU3Eb__6_0_mA5D0C4F771A9358D0781F610312AF79599CA1E19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* G_B2_0 = NULL;
	NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* G_B2_1 = NULL;
	Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* G_B1_0 = NULL;
	NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* G_B1_1 = NULL;
	{
		// return nodeTypes.Select(t => t.name).ToArray();
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_0 = __this->___nodeTypes_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var);
		Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* L_1 = ((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A* L_3 = ((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* L_4 = (Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7*)il2cpp_codegen_object_new(Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7_il2cpp_TypeInfo_var);
		Func_2__ctor_m2FC67F4E64DB4438CD3159938DF180E1AA727FA0(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3Cget_NodeTypeNamesU3Eb__6_0_mA5D0C4F771A9358D0781F610312AF79599CA1E19_RuntimeMethod_var), NULL);
		Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* L_5 = L_4;
		((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_TisString_t_m660D6AE569202A7658562B679DAB48CA5E75DFD8((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_TisString_t_m660D6AE569202A7658562B679DAB48CA5E75DFD8_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_6, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		return L_7;
	}
}
// System.String[] JSNodeMap.NodeTypeData::get_MarkerTypeNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NodeTypeData_get_MarkerTypeNames_mAF0073D0E389F80231B889B19D2E39A472BD7B35 (NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_TisString_t_m660D6AE569202A7658562B679DAB48CA5E75DFD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_MarkerTypeNamesU3Eb__8_0_mC19F70D6215BB0B1BAADC0AC12A7CD1990C451B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* G_B2_0 = NULL;
	NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* G_B2_1 = NULL;
	Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* G_B1_0 = NULL;
	NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* G_B1_1 = NULL;
	{
		// return markerTypes.Select(t => t.name).ToArray();
		NodeTypeU5BU5D_t1C63AA46A678E0CCD12C915FA6291594F256261D* L_0 = __this->___markerTypes_5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var);
		Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* L_1 = ((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2;
		Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A* L_3 = ((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* L_4 = (Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7*)il2cpp_codegen_object_new(Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7_il2cpp_TypeInfo_var);
		Func_2__ctor_m2FC67F4E64DB4438CD3159938DF180E1AA727FA0(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3Cget_MarkerTypeNamesU3Eb__8_0_mC19F70D6215BB0B1BAADC0AC12A7CD1990C451B8_RuntimeMethod_var), NULL);
		Func_2_t51B1F39B72E7171DC8CD8A5B446501586A4B68D7* L_5 = L_4;
		((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_TisString_t_m660D6AE569202A7658562B679DAB48CA5E75DFD8((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisNodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5_TisString_t_m660D6AE569202A7658562B679DAB48CA5E75DFD8_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_6, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void JSNodeMap.NodeTypeData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeTypeData__ctor_m03482A3008B5FE198F179DDB8C9B23D633216395 (NodeTypeData_tA23F12FCC13D33FF2EC7DD8FF2A447C7D0F3BD1D* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void JSNodeMap.NodeTypeData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1BC22C67C7C2D50DFAC868F860D094BE3A5C0AE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A* L_0 = (U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A*)il2cpp_codegen_object_new(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m505C794AD67A6AC645A67BF95F088C9BB5AA50B9(L_0, NULL);
		((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void JSNodeMap.NodeTypeData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m505C794AD67A6AC645A67BF95F088C9BB5AA50B9 (U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String JSNodeMap.NodeTypeData/<>c::<get_NodeTypeNames>b__6_0(JSNodeMap.NodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_NodeTypeNamesU3Eb__6_0_mA5D0C4F771A9358D0781F610312AF79599CA1E19 (U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A* __this, NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* ___t0, const RuntimeMethod* method) 
{
	{
		// return nodeTypes.Select(t => t.name).ToArray();
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_0 = ___t0;
		String_t* L_1 = L_0->___name_0;
		return L_1;
	}
}
// System.String JSNodeMap.NodeTypeData/<>c::<get_MarkerTypeNames>b__8_0(JSNodeMap.NodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_MarkerTypeNamesU3Eb__8_0_mC19F70D6215BB0B1BAADC0AC12A7CD1990C451B8 (U3CU3Ec_tDC34F56597A2B275681F1D39B676A472D933196A* __this, NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* ___t0, const RuntimeMethod* method) 
{
	{
		// return markerTypes.Select(t => t.name).ToArray();
		NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* L_0 = ___t0;
		String_t* L_1 = L_0->___name_0;
		return L_1;
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
// System.Void JSNodeMap.NodeType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeType__ctor_mA54C5119B61D0B9E4FC8F27722C13092C4FE7ADC (NodeType_t5B94E80AE2F902417BD51A1C0053F2154BE3F3F5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AgentHandler_Invoke_mC291B8299911551BF6CE8CB67284619EB3E175CB_inline (AgentHandler_tDE02F0DADED9369C0F38D1067790FF17B18C1499* __this, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92* ___other0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Agent_t5DC05A426F974F1104A030178CE75F9EBE1B7F92*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___other0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NodeHandler_Invoke_m96F2291A6EC85A96FA2865845222EECF3F94A138_inline (NodeHandler_t40D3C3B3107C24D5FF798B95A93EFA13B83C3F58* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NodeHandlerBool_Invoke_m1A56D0B0E1984B4C1D31E09DC8D940B139601713_inline (NodeHandlerBool_t09531FC4884D7E11B3FFB59066DCF771D0D0B865* __this, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0* ___node0, bool ___target1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Node_t4C9A8843A67B0013627E1BD3F8961B2BA95C19E0*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___target1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelfHandler_Invoke_m9864CB2815A7546BD358D2447A6F28811DB1CB41_inline (SelfHandler_tD0090E3C8286F5E3F21B1F0F6311DB8E2A295EB3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkerHandler_Invoke_m44D8DB3C06451C066F7DB70F0EE3A66D848C6236_inline (MarkerHandler_t97B558ACD9B016CBB336E655687C9689F8EC5ECD* __this, int32_t ___markerIndex0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___markerIndex0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___item0;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4E43FBBD9E1DF70C18662CFE03F2E819AFE42A9A_gshared_inline (KeyValuePair_2_tF57672B734F87478D3D304F7EE80400AD101232B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
