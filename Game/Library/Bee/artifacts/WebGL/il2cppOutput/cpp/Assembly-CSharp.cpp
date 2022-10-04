#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// EntranceToTheSubmarine
struct EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178;
// EventControl
struct EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// O2
struct O2_tFC3941786049A81F798FE9AE7EB13120415C73AD;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE;
// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ResourceExtraction
struct ResourceExtraction_t22B1E739E35736EF26D2DD4021AABA6876FE570F;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// StopZone
struct StopZone_t0E46E44A92F5A7A72C3043A467DB9B060FB61C0C;
// System.String
struct String_t;
// Submarine
struct Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3;
// SubmarineClickeEvent
struct SubmarineClickeEvent_t08ABD13E12BD98E44E64D43B617AE0817442AB23;
// SubmarineEvent
struct SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016;
// SubmarineEventArrow
struct SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2;
// SubmarineInput
struct SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1;
// SubmarineMove
struct SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UI
struct UI_t16DF663EF61FBCB2402111DB12E3091C775B4539;
// UIMenu
struct UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B8C17035814E790C0DC63AD5884BA9B76B05694EAD7D856FB66D6E5294A3498A_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteralDC23E13C8205D33A1A8059F86B6F5E7E10705CF9;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mBBB7117F2860B8E4504F1BCD8626BF7EB2284038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mA1ABED219671CAA3B7C42E85393D5AF7899EF0F7_RuntimeMethod_var;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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
struct Il2CppArrayBounds;

// EventControl
struct EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995  : public RuntimeObject
{
	// Submarine EventControl::_submarine
	Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* ____submarine_0;
};

// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE  : public RuntimeObject
{
	// PlayerMove PlayerInput::_move
	PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* ____move_0;
	// System.Single PlayerInput::_speed
	float ____speed_1;
	// System.Single PlayerInput::_speedX
	float ____speedX_2;
	// System.Single PlayerInput::_speedY
	float ____speedY_3;
	// System.Single PlayerInput::_timeLimitation
	float ____timeLimitation_4;
	// UnityEngine.Rigidbody2D PlayerInput::_rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rb_5;
};

// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
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

// SubmarineEvent
struct SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016  : public RuntimeObject
{
};

// SubmarineInput
struct SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1  : public RuntimeObject
{
	// SubmarineMove SubmarineInput::_move
	SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F* ____move_0;
	// System.Single SubmarineInput::_speed
	float ____speed_1;
	// System.Single SubmarineInput::_speedX
	float ____speedX_2;
	// System.Single SubmarineInput::_speedY
	float ____speedY_3;
	// UnityEngine.Rigidbody2D SubmarineInput::_rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rb_4;
};

// SubmarineMove
struct SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F  : public RuntimeObject
{
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B8C17035814E790C0DC63AD5884BA9B76B05694EAD7D856FB66D6E5294A3498A
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___B8C17035814E790C0DC63AD5884BA9B76B05694EAD7D856FB66D6E5294A3498A_0;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// EntranceToTheSubmarine
struct EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EntranceToTheSubmarine::submarine
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___submarine_4;
	// UnityEngine.Rigidbody2D EntranceToTheSubmarine::submarineRB
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___submarineRB_5;
	// UnityEngine.GameObject EntranceToTheSubmarine::submarineCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___submarineCanvas_6;
	// UnityEngine.GameObject EntranceToTheSubmarine::playerCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerCanvas_7;
	// UnityEngine.GameObject EntranceToTheSubmarine::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_8;
	// UnityEngine.Transform EntranceToTheSubmarine::position
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___position_9;
	// System.Boolean EntranceToTheSubmarine::inSubmarine
	bool ___inSubmarine_10;
	// System.Boolean EntranceToTheSubmarine::_player
	bool ____player_11;
	// System.Boolean EntranceToTheSubmarine::_canEntrance
	bool ____canEntrance_12;
};

// O2
struct O2_tFC3941786049A81F798FE9AE7EB13120415C73AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EntranceToTheSubmarine O2::entranceToTheSubmarine
	EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* ___entranceToTheSubmarine_4;
	// System.Single O2::time
	float ___time_5;
	// System.Int32 O2::o2
	int32_t ___o2_6;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerInput Player::_playerInput
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ____playerInput_4;
	// UnityEngine.Rigidbody2D Player::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_5;
	// UnityEngine.SpriteRenderer Player::sprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sprite_6;
	// System.Single Player::speed
	float ___speed_7;
	// System.Int32 Player::resource
	int32_t ___resource_8;
	// System.Boolean Player::win
	bool ___win_9;
};

// ResourceExtraction
struct ResourceExtraction_t22B1E739E35736EF26D2DD4021AABA6876FE570F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StopZone
struct StopZone_t0E46E44A92F5A7A72C3043A467DB9B060FB61C0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player StopZone::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_4;
	// Submarine StopZone::_submarine
	Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* ____submarine_5;
	// UnityEngine.GameObject StopZone::onTriggerZone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___onTriggerZone_6;
};

// Submarine
struct Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Submarine::speed
	float ___speed_4;
	// UnityEngine.Rigidbody2D Submarine::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_5;
	// SubmarineInput Submarine::_submarineInput
	SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1* ____submarineInput_6;
	// SubmarineEvent Submarine::_submarineEvent
	SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016* ____submarineEvent_7;
	// System.Single Submarine::timeEvent
	float ___timeEvent_8;
	// System.Int32 Submarine::submarineHeal
	int32_t ___submarineHeal_9;
	// System.Boolean Submarine::eventInProgress
	bool ___eventInProgress_10;
	// System.Boolean Submarine::win
	bool ___win_11;
	// System.Boolean Submarine::canMove
	bool ___canMove_12;
};

// SubmarineClickeEvent
struct SubmarineClickeEvent_t08ABD13E12BD98E44E64D43B617AE0817442AB23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EventControl SubmarineClickeEvent::_eventControl
	EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* ____eventControl_4;
	// UnityEngine.GameObject[] SubmarineClickeEvent::Button
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Button_5;
	// UnityEngine.Transform[] SubmarineClickeEvent::positionButton
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___positionButton_6;
	// System.Single SubmarineClickeEvent::_time
	float ____time_7;
	// System.Int32 SubmarineClickeEvent::_taskProgress
	int32_t ____taskProgress_8;
	// System.Int32 SubmarineClickeEvent::_countButton
	int32_t ____countButton_9;
};

// SubmarineEventArrow
struct SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EventControl SubmarineEventArrow::_eventControl
	EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* ____eventControl_4;
	// UnityEngine.GameObject[] SubmarineEventArrow::TaskProgress
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___TaskProgress_5;
	// System.Single SubmarineEventArrow::_time
	float ____time_6;
	// System.Int32 SubmarineEventArrow::_taskProgress
	int32_t ____taskProgress_7;
	// System.Int32[] SubmarineEventArrow::_whichArrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____whichArrow_8;
	// UnityEngine.KeyCode[] SubmarineEventArrow::_arrow
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ____arrow_9;
	// UnityEngine.KeyCode[] SubmarineEventArrow::combinations
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ___combinations_10;
};

// UI
struct UI_t16DF663EF61FBCB2402111DB12E3091C775B4539  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player UI::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_4;
	// Submarine UI::submarine
	Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* ___submarine_5;
	// O2 UI::o2
	O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* ___o2_6;
	// EntranceToTheSubmarine UI::entranceToTheSubmarine
	EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* ___entranceToTheSubmarine_7;
	// UnityEngine.UI.Text UI::textO2
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textO2_8;
	// UnityEngine.UI.Text UI::textResource
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textResource_9;
	// UnityEngine.GameObject UI::gamePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gamePanel_10;
	// UnityEngine.GameObject UI::losePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___losePanel_11;
	// UnityEngine.GameObject UI::pausePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pausePanel_12;
	// UnityEngine.GameObject UI::winPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPanel_13;
	// UnityEngine.GameObject[] UI::eventPanel
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___eventPanel_14;
	// UnityEngine.GameObject[] UI::submarineHeal
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___submarineHeal_15;
	// UnityEngine.GameObject[] UI::playerO2
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___playerO2_16;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIMenu
struct UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UIMenu::MenuPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MenuPanel_4;
	// UnityEngine.GameObject UIMenu::TutorPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TutorPanel_5;
	// UnityEngine.GameObject UIMenu::StoryPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StoryPanel_6;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_constraints_mBF02A56E20BD497E3D291931E0AABB850952B238 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Submarine>()
inline Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* GameObject_GetComponent_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mBBB7117F2860B8E4504F1BCD8626BF7EB2284038 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Submarine>()
inline Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* Object_FindObjectOfType_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mA1ABED219671CAA3B7C42E85393D5AF7899EF0F7 (const RuntimeMethod* method)
{
	return ((  Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void O2::WasteOxygen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O2_WasteOxygen_m0DB04996EEBA262AB85E6C03365A7F18D3CD838C (O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void O2::OxygenReplenished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O2_OxygenReplenished_m822CDF257FDE6A574AD54A1DF33C471E3FCA6698 (O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void PlayerInput::.ctor(UnityEngine.Rigidbody2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_mCCC64015BB7A2222F9B1B507BA29F390723BE7A7 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb0, float ___speed1, const RuntimeMethod* method) ;
// System.Void PlayerInput::Update(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Update_m2F229B652AD460D6F4DDE6FAC2645BBA2F8B5AE5 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sprite0, const RuntimeMethod* method) ;
// System.Void PlayerInput::PickUpResource(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_PickUpResource_mC75A79E0971C8E08756119957BC615A980BE1751 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, int32_t* ___resource0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) ;
// System.Void PlayerMove::Move(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Move_mA0E6517EF7B10F0EDC56C70264AC3DADABBE7680 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RB0, float ___SpeedX1, float ___SpeedY2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void SubmarineInput::.ctor(UnityEngine.Rigidbody2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineInput__ctor_mDDBB6391D04A4B449C5A0D8BC0D9002EA82B938E (SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb0, float ___speed1, const RuntimeMethod* method) ;
// System.Void SubmarineEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEvent__ctor_m4072B5ADF9C9709742716F97E3D7EA373FC9D102 (SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016* __this, const RuntimeMethod* method) ;
// System.Void SubmarineInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineInput_Update_m1CD3C63E89B1434CA9025D64283570F451D0B1B2 (SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1* __this, const RuntimeMethod* method) ;
// System.Void SubmarineEvent::Update(System.Single&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEvent_Update_m6CB4EFC7CFBF16552507431DBBE5FBC3BD373168 (SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016* __this, float* ___timeEvent0, bool ___eventInProgress1, const RuntimeMethod* method) ;
// System.Void EventControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventControl__ctor_m26701BCC286ED17AE030407652551783D270CC97 (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* __this, const RuntimeMethod* method) ;
// System.Void SubmarineClickeEvent::CreateCombination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineClickeEvent_CreateCombination_m857A718FFDEA70DFA476C6CF8888799F7FB747F4 (SubmarineClickeEvent_t08ABD13E12BD98E44E64D43B617AE0817442AB23* __this, const RuntimeMethod* method) ;
// System.Void EventControl::MissionFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventControl_MissionFailed_mB80FBE47E426BBE78749DC30B55E1A901C887F29 (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* __this, const RuntimeMethod* method) ;
// System.Void EventControl::ResetEvent(UnityEngine.GameObject,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventControl_ResetEvent_m20E025E84146FE09B75F357346EE138C672E3F4A (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, int32_t* ___taskProgress1, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void EventControl::TaskCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventControl_TaskCompleted_mE059C9FCEF21AF044A3FF6BCC7D8119B142AF393 (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* __this, const RuntimeMethod* method) ;
// UnityEngine.KeyCode[] SubmarineEventArrow::GenerateCombination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* SubmarineEventArrow_GenerateCombination_mFE6D7AF325C02A3C68CC313F8FDFD2C2C70D9DB2 (SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void SubmarineEventArrow::TaskCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEventArrow_TaskCompletion_mF7B1FC0E2E576D1A8685507830442BF9B16CCE5F (SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void SubmarineMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineMove__ctor_m558F337F5097A8ABD055F8F125C8E72ED9AD3BE4 (SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F* __this, const RuntimeMethod* method) ;
// System.Void SubmarineMove::Move(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineMove_Move_mB1114F0CF44D43A87FBCA56C59444C7ADDF155E7 (SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RB0, float ___SpeedX1, float ___SpeedY2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, const RuntimeMethod* method) ;
// System.Void UI::UIChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_UIChange_mAEBF5BFE95371225CF92274EC731BD17BDFB7B2C (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::Lose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Lose_mE2822D73D7FF8A2D098DA4C10DE2686D6676AAC0 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Win_mCACAFC0886D84FA22F82F07B6019B7007795E507 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void EntranceToTheSubmarine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntranceToTheSubmarine_Update_mF146D0254770CACBF63963D786185B6DA9906EEA (EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mBBB7117F2860B8E4504F1BCD8626BF7EB2284038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyUp(KeyCode.Space)
		//     && _canEntrance
		//     && _player)
		bool L_0;
		L_0 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_009c;
		}
	}
	{
		bool L_1 = __this->____canEntrance_12;
		if (!L_1)
		{
			goto IL_009c;
		}
	}
	{
		bool L_2 = __this->____player_11;
		if (!L_2)
		{
			goto IL_009c;
		}
	}
	{
		// submarineRB.constraints = RigidbodyConstraints2D.FreezeRotation;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___submarineRB_5;
		Rigidbody2D_set_constraints_mBF02A56E20BD497E3D291931E0AABB850952B238(L_3, 4, NULL);
		// player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// playerCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___playerCanvas_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// submarine.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___submarine_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// submarineCanvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___submarineCanvas_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// player.GetComponent<Player>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___player_8;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12;
		L_12 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_11, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)0, NULL);
		// submarine.GetComponent<Submarine>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___submarine_4;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_14;
		L_14 = GameObject_GetComponent_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mBBB7117F2860B8E4504F1BCD8626BF7EB2284038(L_13, GameObject_GetComponent_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mBBB7117F2860B8E4504F1BCD8626BF7EB2284038_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)1, NULL);
		// inSubmarine = true;
		__this->___inSubmarine_10 = (bool)1;
		// _player = false;
		__this->____player_11 = (bool)0;
		return;
	}

IL_009c:
	{
		// else if (Input.GetKeyUp(KeyCode.Space)
		//          && !_canEntrance
		//          && !_player
		//          && submarineRB.velocity.x <= 0.1
		//          && submarineRB.velocity.x >= -0.1
		//          && submarineRB.velocity.y <= 0.1
		//          && submarineRB.velocity.y >= -0.1)
		bool L_15;
		L_15 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)32), NULL);
		if (!L_15)
		{
			goto IL_01f0;
		}
	}
	{
		bool L_16 = __this->____canEntrance_12;
		if (L_16)
		{
			goto IL_01f0;
		}
	}
	{
		bool L_17 = __this->____player_11;
		if (L_17)
		{
			goto IL_01f0;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18 = __this->___submarineRB_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_18, NULL);
		float L_20 = L_19.___x_0;
		if ((!(((double)((double)L_20)) <= ((double)(0.10000000000000001)))))
		{
			goto IL_01f0;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_21 = __this->___submarineRB_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_21, NULL);
		float L_23 = L_22.___x_0;
		if ((!(((double)((double)L_23)) >= ((double)(-0.10000000000000001)))))
		{
			goto IL_01f0;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_24 = __this->___submarineRB_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_24, NULL);
		float L_26 = L_25.___y_1;
		if ((!(((double)((double)L_26)) <= ((double)(0.10000000000000001)))))
		{
			goto IL_01f0;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_27 = __this->___submarineRB_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_27, NULL);
		float L_29 = L_28.___y_1;
		if ((!(((double)((double)L_29)) >= ((double)(-0.10000000000000001)))))
		{
			goto IL_01f0;
		}
	}
	{
		// submarineRB.constraints = RigidbodyConstraints2D.FreezeAll;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_30 = __this->___submarineRB_5;
		Rigidbody2D_set_constraints_mBF02A56E20BD497E3D291931E0AABB850952B238(L_30, 7, NULL);
		// player.transform.position = new Vector2(position.position.x, position.position.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___player_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___position_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___position_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		float L_38 = L_37.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), L_35, L_38, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_39, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_40, NULL);
		// player.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___player_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// playerCanvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___playerCanvas_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
		// submarine.transform.GetChild(0).gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___submarine_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_44, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		// submarineCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___submarineCanvas_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// player.GetComponent<Player>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___player_8;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_49;
		L_49 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_48, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_49, (bool)1, NULL);
		// submarine.GetComponent<Submarine>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___submarine_4;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_51;
		L_51 = GameObject_GetComponent_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mBBB7117F2860B8E4504F1BCD8626BF7EB2284038(L_50, GameObject_GetComponent_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mBBB7117F2860B8E4504F1BCD8626BF7EB2284038_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_51, (bool)0, NULL);
		// inSubmarine = false;
		__this->___inSubmarine_10 = (bool)0;
		// _player = true;
		__this->____player_11 = (bool)1;
	}

IL_01f0:
	{
		// }
		return;
	}
}
// System.Void EntranceToTheSubmarine::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntranceToTheSubmarine_OnTriggerEnter2D_m0AFE8B7ACBCCAF2B12D0AB1B278FE0E907CF29E9 (EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other.gameObject.layer == 6)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_0015;
		}
	}
	{
		// _canEntrance = true;
		__this->____canEntrance_12 = (bool)1;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void EntranceToTheSubmarine::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntranceToTheSubmarine_OnTriggerExit2D_m0A570A67F623A3F3504B875D93CD499F2879B726 (EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other.gameObject.layer == 6)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_0015;
		}
	}
	{
		// _canEntrance = false;
		__this->____canEntrance_12 = (bool)0;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void EntranceToTheSubmarine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntranceToTheSubmarine__ctor_mD4C9BF6D8142DEAE83A6DF71AF6FF69568D93A4C (EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* __this, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public bool inSubmarine = true;
		__this->___inSubmarine_10 = (bool)1;
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
// System.Void EventControl::TaskCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventControl_TaskCompleted_mE059C9FCEF21AF044A3FF6BCC7D8119B142AF393 (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* __this, const RuntimeMethod* method) 
{
	{
		// _submarine.eventInProgress = false;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_0 = __this->____submarine_0;
		L_0->___eventInProgress_10 = (bool)0;
		// }
		return;
	}
}
// System.Void EventControl::MissionFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventControl_MissionFailed_mB80FBE47E426BBE78749DC30B55E1A901C887F29 (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* __this, const RuntimeMethod* method) 
{
	{
		// _submarine.submarineHeal--;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_0 = __this->____submarine_0;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_1 = L_0;
		int32_t L_2 = L_1->___submarineHeal_9;
		L_1->___submarineHeal_9 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// _submarine.eventInProgress = false;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_3 = __this->____submarine_0;
		L_3->___eventInProgress_10 = (bool)0;
		// }
		return;
	}
}
// System.Void EventControl::ResetEvent(UnityEngine.GameObject,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventControl_ResetEvent_m20E025E84146FE09B75F357346EE138C672E3F4A (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, int32_t* ___taskProgress1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// taskProgress = 0;
		int32_t* L_0 = ___taskProgress1;
		*((int32_t*)L_0) = (int32_t)0;
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___gameObject0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// for (int i = 0; i < gameObject.transform.childCount; i++)
		V_0 = 0;
		goto IL_0041;
	}

IL_000e:
	{
		// if (!gameObject.transform.GetChild(i).gameObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		int32_t L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		// gameObject.transform.GetChild(i).gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___gameObject0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		int32_t L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
	}

IL_003d:
	{
		// for (int i = 0; i < gameObject.transform.childCount; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0041:
	{
		// for (int i = 0; i < gameObject.transform.childCount; i++)
		int32_t L_14 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___gameObject0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		int32_t L_17;
		L_17 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_16, NULL);
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EventControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventControl__ctor_m26701BCC286ED17AE030407652551783D270CC97 (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mA1ABED219671CAA3B7C42E85393D5AF7899EF0F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Submarine _submarine = GameObject.FindObjectOfType<Submarine>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_0;
		L_0 = Object_FindObjectOfType_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mA1ABED219671CAA3B7C42E85393D5AF7899EF0F7(Object_FindObjectOfType_TisSubmarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3_mA1ABED219671CAA3B7C42E85393D5AF7899EF0F7_RuntimeMethod_var);
		__this->____submarine_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____submarine_0), (void*)L_0);
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
// System.Void O2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O2_Update_m4CCD8E6EB3920452948264C0AF018D490DC24B0A (O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!entranceToTheSubmarine.inSubmarine)
		EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* L_0 = __this->___entranceToTheSubmarine_4;
		bool L_1 = L_0->___inSubmarine_10;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// WasteOxygen();
		O2_WasteOxygen_m0DB04996EEBA262AB85E6C03365A7F18D3CD838C(__this, NULL);
		goto IL_0031;
	}

IL_0015:
	{
		// else if (entranceToTheSubmarine
		//          && o2 < 5)
		EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* L_2 = __this->___entranceToTheSubmarine_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = __this->___o2_6;
		if ((((int32_t)L_4) >= ((int32_t)5)))
		{
			goto IL_0031;
		}
	}
	{
		// OxygenReplenished();
		O2_OxygenReplenished_m822CDF257FDE6A574AD54A1DF33C471E3FCA6698(__this, NULL);
	}

IL_0031:
	{
		// if (o2 <= 0)
		int32_t L_5 = __this->___o2_6;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void O2::WasteOxygen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O2_WasteOxygen_m0DB04996EEBA262AB85E6C03365A7F18D3CD838C (O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* __this, const RuntimeMethod* method) 
{
	{
		// time -= Time.deltaTime;
		float L_0 = __this->___time_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___time_5 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (time <= 0)
		float L_2 = __this->___time_5;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// o2--;
		int32_t L_3 = __this->___o2_6;
		__this->___o2_6 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// time = 10;
		__this->___time_5 = (10.0f);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void O2::OxygenReplenished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O2_OxygenReplenished_m822CDF257FDE6A574AD54A1DF33C471E3FCA6698 (O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* __this, const RuntimeMethod* method) 
{
	{
		// time += Time.deltaTime;
		float L_0 = __this->___time_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___time_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (time >= 10)
		float L_2 = __this->___time_5;
		if ((!(((float)L_2) >= ((float)(10.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// time = 0;
		__this->___time_5 = (0.0f);
		// o2++;
		int32_t L_3 = __this->___o2_6;
		__this->___o2_6 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void O2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O2__ctor_m8924ED29049799E06878B3E83D240F893068B2D7 (O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* __this, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public float time = 10;
		__this->___time_5 = (10.0f);
		// [HideInInspector] public int o2 = 4;
		__this->___o2_6 = 4;
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playerInput = new PlayerInput(rb, speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rb_5;
		float L_1 = __this->___speed_7;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_2 = (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE*)il2cpp_codegen_object_new(PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var);
		PlayerInput__ctor_mCCC64015BB7A2222F9B1B507BA29F390723BE7A7(L_2, L_0, L_1, NULL);
		__this->____playerInput_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_4), (void*)L_2);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// _playerInput.Update(sprite);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->____playerInput_4;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___sprite_6;
		PlayerInput_Update_m2F229B652AD460D6F4DDE6FAC2645BBA2F8B5AE5(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerStay2D_m4C705E63255A3ED69D91C75D2AFE7DAF9253BD64 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other.gameObject.layer == 3)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001f;
		}
	}
	{
		// _playerInput.PickUpResource(ref resource);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_3 = __this->____playerInput_4;
		int32_t* L_4 = (&__this->___resource_8);
		PlayerInput_PickUpResource_mC75A79E0971C8E08756119957BC615A980BE1751(L_3, L_4, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_m6E01BC069CDBBED27A57ABF1E3A77B49504CD433 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___col0, const RuntimeMethod* method) 
{
	{
		// if (col.gameObject.layer == 8)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___col0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0015;
		}
	}
	{
		// win = true;
		__this->___win_9 = (bool)1;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
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
// System.Void PlayerInput::.ctor(UnityEngine.Rigidbody2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_mCCC64015BB7A2222F9B1B507BA29F390723BE7A7 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb0, float ___speed1, const RuntimeMethod* method) 
{
	{
		// private float _timeLimitation = 1;
		__this->____timeLimitation_4 = (1.0f);
		// public PlayerInput(Rigidbody2D rb, float speed)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _rb = rb;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___rb0;
		__this->____rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rb_5), (void*)L_0);
		// _speed = speed;
		float L_1 = ___speed1;
		__this->____speed_1 = L_1;
		// }
		return;
	}
}
// System.Void PlayerInput::Update(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Update_m2F229B652AD460D6F4DDE6FAC2645BBA2F8B5AE5 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sprite0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _speedX = Input.GetAxis("Horizontal") * _speed;
		float L_0;
		L_0 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_1 = __this->____speed_1;
		__this->____speedX_2 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// _speedY = Input.GetAxis("Vertical") * _speed;
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_3 = __this->____speed_1;
		__this->____speedY_3 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// if (Input.GetAxis("Horizontal") < 0)
		float L_4;
		L_4 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// sprite.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = ___sprite0;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_5, (bool)1, NULL);
		goto IL_0060;
	}

IL_0048:
	{
		// else if (Input.GetAxis("Horizontal") > 0)
		float L_6;
		L_6 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// sprite.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = ___sprite0;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_7, (bool)0, NULL);
	}

IL_0060:
	{
		// if (_speedX != 0
		//     || _speedY != 0)
		float L_8 = __this->____speedX_2;
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		float L_9 = __this->____speedY_3;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_00a2;
		}
	}

IL_007a:
	{
		// _move = new PlayerMove();
		PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* L_10 = (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4*)il2cpp_codegen_object_new(PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4_il2cpp_TypeInfo_var);
		PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2(L_10, NULL);
		__this->____move_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____move_0), (void*)L_10);
		// _move.Move(_rb, _speedX, _speedY);
		PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* L_11 = __this->____move_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12 = __this->____rb_5;
		float L_13 = __this->____speedX_2;
		float L_14 = __this->____speedY_3;
		PlayerMove_Move_mA0E6517EF7B10F0EDC56C70264AC3DADABBE7680(L_11, L_12, L_13, L_14, NULL);
	}

IL_00a2:
	{
		// if (_timeLimitation > 0)
		float L_15 = __this->____timeLimitation_4;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_00c1;
		}
	}
	{
		// _timeLimitation -= Time.deltaTime;
		float L_16 = __this->____timeLimitation_4;
		float L_17;
		L_17 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____timeLimitation_4 = ((float)il2cpp_codegen_subtract(L_16, L_17));
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void PlayerInput::PickUpResource(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_PickUpResource_mC75A79E0971C8E08756119957BC615A980BE1751 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, int32_t* ___resource0, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.E) && _timeLimitation <= 0)
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)101), NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = __this->____timeLimitation_4;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// resource++;
		int32_t* L_2 = ___resource0;
		int32_t* L_3 = ___resource0;
		int32_t L_4 = *((int32_t*)L_3);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_4, 1));
		// _timeLimitation = 1;
		__this->____timeLimitation_4 = (1.0f);
	}

IL_0027:
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
// System.Void PlayerMove::Move(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Move_mA0E6517EF7B10F0EDC56C70264AC3DADABBE7680 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RB0, float ___SpeedX1, float ___SpeedY2, const RuntimeMethod* method) 
{
	{
		// RB.velocity = new Vector2(SpeedX, SpeedY);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___RB0;
		float L_1 = ___SpeedX1;
		float L_2 = ___SpeedY2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ResourceExtraction::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceExtraction_OnTriggerStay2D_m4CC30595542999A38A21DCBCA37B599F903F1133 (ResourceExtraction_t22B1E739E35736EF26D2DD4021AABA6876FE570F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.layer == 6
		//     && Input.GetKey(KeyCode.E))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_0031;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)101), NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Destroy(gameObject.transform.parent.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void ResourceExtraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceExtraction__ctor_m60512F7EFEBBFD4CDA1E45F9E3B14F23A5A33429 (ResourceExtraction_t22B1E739E35736EF26D2DD4021AABA6876FE570F* __this, const RuntimeMethod* method) 
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
// System.Void StopZone::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopZone_Update_mA006EB3FCB616B35ED152875A751699CB31C8F7C (StopZone_t0E46E44A92F5A7A72C3043A467DB9B060FB61C0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_player.resource >= 5)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->____player_4;
		int32_t L_1 = L_0->___resource_8;
		if ((((int32_t)L_1) < ((int32_t)5)))
		{
			goto IL_003d;
		}
	}
	{
		// onTriggerZone.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___onTriggerZone_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// _submarine.canMove = true;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_3 = __this->____submarine_5;
		L_3->___canMove_12 = (bool)1;
		// _player.resource = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->____player_4;
		L_4->___resource_8 = 0;
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void StopZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopZone__ctor_m36C511D3AB82C774B37F32E3B19F1DEDE9DFD287 (StopZone_t0E46E44A92F5A7A72C3043A467DB9B060FB61C0C* __this, const RuntimeMethod* method) 
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
// System.Void Submarine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Submarine_Start_m1F2AC3C80AFD6293600AB615389DE70AC48B4C97 (Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _submarineInput = new SubmarineInput(rb, speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rb_5;
		float L_1 = __this->___speed_4;
		SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1* L_2 = (SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1*)il2cpp_codegen_object_new(SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1_il2cpp_TypeInfo_var);
		SubmarineInput__ctor_mDDBB6391D04A4B449C5A0D8BC0D9002EA82B938E(L_2, L_0, L_1, NULL);
		__this->____submarineInput_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____submarineInput_6), (void*)L_2);
		// _submarineEvent = new SubmarineEvent();
		SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016* L_3 = (SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016*)il2cpp_codegen_object_new(SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016_il2cpp_TypeInfo_var);
		SubmarineEvent__ctor_m4072B5ADF9C9709742716F97E3D7EA373FC9D102(L_3, NULL);
		__this->____submarineEvent_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____submarineEvent_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void Submarine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Submarine_Update_m72236877D030C156E87E5135C10C700F84583028 (Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* __this, const RuntimeMethod* method) 
{
	{
		// if (canMove
		//     && !eventInProgress)
		bool L_0 = __this->___canMove_12;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = __this->___eventInProgress_10;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _submarineInput.Update();
		SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1* L_2 = __this->____submarineInput_6;
		SubmarineInput_Update_m1CD3C63E89B1434CA9025D64283570F451D0B1B2(L_2, NULL);
	}

IL_001b:
	{
		// if(!(rb.velocity.x <= 0.3
		//     && rb.velocity.x >= -0.3
		//     && rb.velocity.y <= 0.3
		//     && rb.velocity.y >= -0.3))
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rb_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
		float L_5 = L_4.___x_0;
		if ((!(((double)((double)L_5)) <= ((double)(0.29999999999999999)))))
		{
			goto IL_008b;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rb_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_6, NULL);
		float L_8 = L_7.___x_0;
		if ((!(((double)((double)L_8)) >= ((double)(-0.29999999999999999)))))
		{
			goto IL_008b;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___rb_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_9, NULL);
		float L_11 = L_10.___y_1;
		if ((!(((double)((double)L_11)) <= ((double)(0.29999999999999999)))))
		{
			goto IL_008b;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12 = __this->___rb_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_12, NULL);
		float L_14 = L_13.___y_1;
		if ((((double)((double)L_14)) >= ((double)(-0.29999999999999999))))
		{
			goto IL_00a2;
		}
	}

IL_008b:
	{
		// _submarineEvent.Update(ref timeEvent, eventInProgress);
		SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016* L_15 = __this->____submarineEvent_7;
		float* L_16 = (&__this->___timeEvent_8);
		bool L_17 = __this->___eventInProgress_10;
		SubmarineEvent_Update_m6CB4EFC7CFBF16552507431DBBE5FBC3BD373168(L_15, L_16, L_17, NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void Submarine::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Submarine_OnTriggerEnter2D_m8336B4C68EE8991990D50FD1F330316C510FA770 (Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other.gameObject.layer == 7)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_0015;
		}
	}
	{
		// canMove = false;
		__this->___canMove_12 = (bool)0;
	}

IL_0015:
	{
		// if (other.gameObject.layer == 8)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)8))))
		{
			goto IL_002a;
		}
	}
	{
		// win = true;
		__this->___win_11 = (bool)1;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Submarine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Submarine__ctor_mF6077F5EF8DE8CF4A48F0BF940A4626EB34C9498 (Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* __this, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public int submarineHeal = 5;
		__this->___submarineHeal_9 = 5;
		// [HideInInspector] public bool canMove = true;
		__this->___canMove_12 = (bool)1;
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
// System.Void SubmarineClickeEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineClickeEvent_Start_m449155E3CA5F6F2975DD81C57017B4FF63722067 (SubmarineClickeEvent_t08ABD13E12BD98E44E64D43B617AE0817442AB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _eventControl = new EventControl();
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_0 = (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995*)il2cpp_codegen_object_new(EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995_il2cpp_TypeInfo_var);
		EventControl__ctor_m26701BCC286ED17AE030407652551783D270CC97(L_0, NULL);
		__this->____eventControl_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eventControl_4), (void*)L_0);
		// CreateCombination();
		SubmarineClickeEvent_CreateCombination_m857A718FFDEA70DFA476C6CF8888799F7FB747F4(__this, NULL);
		// }
		return;
	}
}
// System.Void SubmarineClickeEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineClickeEvent_Update_mA158B71832ED965ADC1A9673F4EB7BF76EC28B01 (SubmarineClickeEvent_t08ABD13E12BD98E44E64D43B617AE0817442AB23* __this, const RuntimeMethod* method) 
{
	{
		// _time -= Time.deltaTime;
		float L_0 = __this->____time_7;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____time_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_time <= 0)
		float L_2 = __this->____time_7;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// CreateCombination();
		SubmarineClickeEvent_CreateCombination_m857A718FFDEA70DFA476C6CF8888799F7FB747F4(__this, NULL);
		// _eventControl.MissionFailed();
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_3 = __this->____eventControl_4;
		EventControl_MissionFailed_mB80FBE47E426BBE78749DC30B55E1A901C887F29(L_3, NULL);
		// _eventControl.ResetEvent(gameObject, ref _taskProgress);
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_4 = __this->____eventControl_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t* L_6 = (&__this->____taskProgress_8);
		EventControl_ResetEvent_m20E025E84146FE09B75F357346EE138C672E3F4A(L_4, L_5, L_6, NULL);
		// _time = 3;
		__this->____time_7 = (3.0f);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void SubmarineClickeEvent::CreateCombination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineClickeEvent_CreateCombination_m857A718FFDEA70DFA476C6CF8888799F7FB747F4 (SubmarineClickeEvent_t08ABD13E12BD98E44E64D43B617AE0817442AB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < Button.Length; i++)
		V_1 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// Button[i].transform.position = new Vector2(0, 0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___Button_5;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
		// for (int i = 0; i < Button.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < Button.Length; i++)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___Button_5;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// Random ran = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_10 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_10, NULL);
		V_0 = L_10;
		goto IL_00ed;
	}

IL_0044:
	{
		// for (int i = 0; i < positionButton.Length; i++)
		V_2 = 0;
		goto IL_00df;
	}

IL_004b:
	{
		// if (ran.Next(0, 2) == 0
		//     && positionButton[i].gameObject.activeSelf)
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_11 = V_0;
		int32_t L_12;
		L_12 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_11, 0, 2);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = __this->___positionButton_6;
		int32_t L_14 = V_2;
		int32_t L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		bool L_18;
		L_18 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_17, NULL);
		if (!L_18)
		{
			goto IL_00db;
		}
	}
	{
		// Button[_countButton].transform.position = new Vector2(positionButton[i].position.x, positionButton[i].position.y);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___Button_5;
		int32_t L_20 = __this->____countButton_9;
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = __this->___positionButton_6;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_30 = __this->___positionButton_6;
		int32_t L_31 = V_2;
		int32_t L_32 = L_31;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), L_29, L_35, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_36, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_37, NULL);
		// positionButton[i].gameObject.SetActive(false);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_38 = __this->___positionButton_6;
		int32_t L_39 = V_2;
		int32_t L_40 = L_39;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// _countButton++;
		int32_t L_43 = __this->____countButton_9;
		__this->____countButton_9 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		// if (_countButton >= 5)
		int32_t L_44 = __this->____countButton_9;
		if ((((int32_t)L_44) >= ((int32_t)5)))
		{
			goto IL_00ed;
		}
	}

IL_00db:
	{
		// for (int i = 0; i < positionButton.Length; i++)
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00df:
	{
		// for (int i = 0; i < positionButton.Length; i++)
		int32_t L_46 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_47 = __this->___positionButton_6;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_004b;
		}
	}

IL_00ed:
	{
		// while (_countButton < 5)
		int32_t L_48 = __this->____countButton_9;
		if ((((int32_t)L_48) < ((int32_t)5)))
		{
			goto IL_0044;
		}
	}
	{
		// _countButton = 0;
		__this->____countButton_9 = 0;
		// }
		return;
	}
}
// System.Void SubmarineClickeEvent::TaskCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineClickeEvent_TaskCompletion_mC3F5CEDF44B1A948B981323BDCFBC326B9323314 (SubmarineClickeEvent_t08ABD13E12BD98E44E64D43B617AE0817442AB23* __this, const RuntimeMethod* method) 
{
	{
		// _taskProgress++;
		int32_t L_0 = __this->____taskProgress_8;
		__this->____taskProgress_8 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (_taskProgress >= 5)
		int32_t L_1 = __this->____taskProgress_8;
		if ((((int32_t)L_1) < ((int32_t)5)))
		{
			goto IL_004a;
		}
	}
	{
		// CreateCombination();
		SubmarineClickeEvent_CreateCombination_m857A718FFDEA70DFA476C6CF8888799F7FB747F4(__this, NULL);
		// _eventControl.TaskCompleted();
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_2 = __this->____eventControl_4;
		EventControl_TaskCompleted_mE059C9FCEF21AF044A3FF6BCC7D8119B142AF393(L_2, NULL);
		// _eventControl.ResetEvent(gameObject, ref _taskProgress);
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_3 = __this->____eventControl_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t* L_5 = (&__this->____taskProgress_8);
		EventControl_ResetEvent_m20E025E84146FE09B75F357346EE138C672E3F4A(L_3, L_4, L_5, NULL);
		// _time = 3;
		__this->____time_7 = (3.0f);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void SubmarineClickeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineClickeEvent__ctor_mC6F9F0B780F148FAF28C9A8DCBD3530C80F446F2 (SubmarineClickeEvent_t08ABD13E12BD98E44E64D43B617AE0817442AB23* __this, const RuntimeMethod* method) 
{
	{
		// private float _time = 3;
		__this->____time_7 = (3.0f);
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
// System.Void SubmarineEvent::Update(System.Single&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEvent_Update_m6CB4EFC7CFBF16552507431DBBE5FBC3BD373168 (SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016* __this, float* ___timeEvent0, bool ___eventInProgress1, const RuntimeMethod* method) 
{
	{
		// if (!eventInProgress)
		bool L_0 = ___eventInProgress1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// timeEvent -= Time.deltaTime;
		float* L_1 = ___timeEvent0;
		float* L_2 = ___timeEvent0;
		float L_3 = *((float*)L_2);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_1) = (float)((float)il2cpp_codegen_subtract(L_3, L_4));
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void SubmarineEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEvent__ctor_m4072B5ADF9C9709742716F97E3D7EA373FC9D102 (SubmarineEvent_t746DFF06B571BD94C98BA68267EDC76FEF89C016* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SubmarineEventArrow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEventArrow_Start_mA2CFCA7006E6C758A7851061039B0AD455CAEF96 (SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _eventControl = new EventControl();
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_0 = (EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995*)il2cpp_codegen_object_new(EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995_il2cpp_TypeInfo_var);
		EventControl__ctor_m26701BCC286ED17AE030407652551783D270CC97(L_0, NULL);
		__this->____eventControl_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eventControl_4), (void*)L_0);
		// combinations = GenerateCombination();
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_1;
		L_1 = SubmarineEventArrow_GenerateCombination_mFE6D7AF325C02A3C68CC313F8FDFD2C2C70D9DB2(__this, NULL);
		__this->___combinations_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___combinations_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void SubmarineEventArrow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEventArrow_Update_mEA6EA418392D6A86F6D896FF9F94807C1A39C78E (SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2* __this, const RuntimeMethod* method) 
{
	{
		// _time -= Time.deltaTime;
		float L_0 = __this->____time_6;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____time_6 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_time <= 0)
		float L_2 = __this->____time_6;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// combinations = GenerateCombination();
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_3;
		L_3 = SubmarineEventArrow_GenerateCombination_mFE6D7AF325C02A3C68CC313F8FDFD2C2C70D9DB2(__this, NULL);
		__this->___combinations_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___combinations_10), (void*)L_3);
		// _eventControl.MissionFailed();
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_4 = __this->____eventControl_4;
		EventControl_MissionFailed_mB80FBE47E426BBE78749DC30B55E1A901C887F29(L_4, NULL);
		// _eventControl.ResetEvent(gameObject,  ref _taskProgress);
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_5 = __this->____eventControl_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t* L_7 = (&__this->____taskProgress_7);
		EventControl_ResetEvent_m20E025E84146FE09B75F357346EE138C672E3F4A(L_5, L_6, L_7, NULL);
		// _time = 5;
		__this->____time_6 = (5.0f);
	}

IL_0058:
	{
		// if (_taskProgress == 0
		//     && Input.GetKeyDown(combinations[0]))
		int32_t L_8 = __this->____taskProgress_7;
		if (L_8)
		{
			goto IL_0076;
		}
	}
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_9 = __this->___combinations_10;
		int32_t L_10 = 0;
		int32_t L_11 = (int32_t)(L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12;
		L_12 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_11, NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		// TaskCompletion();
		SubmarineEventArrow_TaskCompletion_mF7B1FC0E2E576D1A8685507830442BF9B16CCE5F(__this, NULL);
		return;
	}

IL_0076:
	{
		// else if (_taskProgress == 1
		//          && Input.GetKeyDown(combinations[1]))
		int32_t L_13 = __this->____taskProgress_7;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0095;
		}
	}
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_14 = __this->___combinations_10;
		int32_t L_15 = 1;
		int32_t L_16 = (int32_t)(L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		bool L_17;
		L_17 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_16, NULL);
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// TaskCompletion();
		SubmarineEventArrow_TaskCompletion_mF7B1FC0E2E576D1A8685507830442BF9B16CCE5F(__this, NULL);
		return;
	}

IL_0095:
	{
		// else if (_taskProgress == 2
		//          && Input.GetKeyDown(combinations[2]))
		int32_t L_18 = __this->____taskProgress_7;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00b4;
		}
	}
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_19 = __this->___combinations_10;
		int32_t L_20 = 2;
		int32_t L_21 = (int32_t)(L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_21, NULL);
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		// TaskCompletion();
		SubmarineEventArrow_TaskCompletion_mF7B1FC0E2E576D1A8685507830442BF9B16CCE5F(__this, NULL);
		return;
	}

IL_00b4:
	{
		// else if (_taskProgress == 3
		//          && Input.GetKeyDown(combinations[3]))
		int32_t L_23 = __this->____taskProgress_7;
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_00d3;
		}
	}
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_24 = __this->___combinations_10;
		int32_t L_25 = 3;
		int32_t L_26 = (int32_t)(L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_26, NULL);
		if (!L_27)
		{
			goto IL_00d3;
		}
	}
	{
		// TaskCompletion();
		SubmarineEventArrow_TaskCompletion_mF7B1FC0E2E576D1A8685507830442BF9B16CCE5F(__this, NULL);
		return;
	}

IL_00d3:
	{
		// else if (Input.GetKeyDown(combinations[0])
		//          || Input.GetKeyDown(combinations[1])
		//          || Input.GetKeyDown(combinations[2])
		//          || Input.GetKeyDown(combinations[3]))
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_28 = __this->___combinations_10;
		int32_t L_29 = 0;
		int32_t L_30 = (int32_t)(L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		bool L_31;
		L_31 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_30, NULL);
		if (L_31)
		{
			goto IL_010f;
		}
	}
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_32 = __this->___combinations_10;
		int32_t L_33 = 1;
		int32_t L_34 = (int32_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		bool L_35;
		L_35 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_34, NULL);
		if (L_35)
		{
			goto IL_010f;
		}
	}
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_36 = __this->___combinations_10;
		int32_t L_37 = 2;
		int32_t L_38 = (int32_t)(L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		bool L_39;
		L_39 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_38, NULL);
		if (L_39)
		{
			goto IL_010f;
		}
	}
	{
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_40 = __this->___combinations_10;
		int32_t L_41 = 3;
		int32_t L_42 = (int32_t)(L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_42, NULL);
		if (!L_43)
		{
			goto IL_0148;
		}
	}

IL_010f:
	{
		// combinations = GenerateCombination();
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_44;
		L_44 = SubmarineEventArrow_GenerateCombination_mFE6D7AF325C02A3C68CC313F8FDFD2C2C70D9DB2(__this, NULL);
		__this->___combinations_10 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___combinations_10), (void*)L_44);
		// _eventControl.MissionFailed();
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_45 = __this->____eventControl_4;
		EventControl_MissionFailed_mB80FBE47E426BBE78749DC30B55E1A901C887F29(L_45, NULL);
		// _eventControl.ResetEvent(gameObject, ref _taskProgress);
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_46 = __this->____eventControl_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t* L_48 = (&__this->____taskProgress_7);
		EventControl_ResetEvent_m20E025E84146FE09B75F357346EE138C672E3F4A(L_46, L_47, L_48, NULL);
		// _time = 5;
		__this->____time_6 = (5.0f);
	}

IL_0148:
	{
		// }
		return;
	}
}
// UnityEngine.KeyCode[] SubmarineEventArrow::GenerateCombination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* SubmarineEventArrow_GenerateCombination_mFE6D7AF325C02A3C68CC313F8FDFD2C2C70D9DB2 (SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Random ran = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		// _whichArrow = new int[]
		// {
		//     ran.Next(0, 4),
		//     ran.Next(0, 4),
		//     ran.Next(0, 4),
		//     ran.Next(0, 4)
		// };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = V_0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_3, 0, 4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_6 = V_0;
		int32_t L_7;
		L_7 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_6, 0, 4);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_5;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_9 = V_0;
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_9, 0, 4);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_8;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_12 = V_0;
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_12, 0, 4);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)L_13);
		__this->____whichArrow_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____whichArrow_8), (void*)L_11);
		// KeyCode[] combination = new KeyCode[]
		// {
		//     _arrow[_whichArrow[0]],
		//     _arrow[_whichArrow[1]],
		//     _arrow[_whichArrow[2]],
		//     _arrow[_whichArrow[3]]
		// };
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_14 = (KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)SZArrayNew(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var, (uint32_t)4);
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_15 = L_14;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_16 = __this->____arrow_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____whichArrow_8;
		int32_t L_18 = 0;
		int32_t L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = L_19;
		int32_t L_21 = (int32_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_21);
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_22 = L_15;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_23 = __this->____arrow_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____whichArrow_8;
		int32_t L_25 = 1;
		int32_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = L_26;
		int32_t L_28 = (int32_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_28);
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_29 = L_22;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_30 = __this->____arrow_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____whichArrow_8;
		int32_t L_32 = 2;
		int32_t L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		int32_t L_35 = (int32_t)(L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_35);
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_36 = L_29;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_37 = __this->____arrow_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____whichArrow_8;
		int32_t L_39 = 3;
		int32_t L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = L_40;
		int32_t L_42 = (int32_t)(L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)L_42);
		V_1 = L_36;
		// for (int i = 0; i < TaskProgress.Length; i++)
		V_2 = 0;
		goto IL_0164;
	}

IL_0094:
	{
		// if (_whichArrow[i] == 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->____whichArrow_8;
		int32_t L_44 = V_2;
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		if (L_46)
		{
			goto IL_00c9;
		}
	}
	{
		// TaskProgress[i].transform.rotation = Quaternion.Euler(0, 0, 0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = __this->___TaskProgress_5;
		int32_t L_48 = V_2;
		int32_t L_49 = L_48;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_51, L_52, NULL);
		goto IL_0160;
	}

IL_00c9:
	{
		// else if (_whichArrow[i] == 1)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____whichArrow_8;
		int32_t L_54 = V_2;
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_00fc;
		}
	}
	{
		// TaskProgress[i].transform.rotation = Quaternion.Euler(0, 0, 180);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_57 = __this->___TaskProgress_5;
		int32_t L_58 = V_2;
		int32_t L_59 = L_58;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_60, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		L_62 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (180.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_61, L_62, NULL);
		goto IL_0160;
	}

IL_00fc:
	{
		// else if (_whichArrow[i] == 2)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->____whichArrow_8;
		int32_t L_64 = V_2;
		int32_t L_65 = L_64;
		int32_t L_66 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		if ((!(((uint32_t)L_66) == ((uint32_t)2))))
		{
			goto IL_012f;
		}
	}
	{
		// TaskProgress[i].transform.rotation = Quaternion.Euler(0, 0, 90);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_67 = __this->___TaskProgress_5;
		int32_t L_68 = V_2;
		int32_t L_69 = L_68;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_70, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (90.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_71, L_72, NULL);
		goto IL_0160;
	}

IL_012f:
	{
		// else if (_whichArrow[i] == 3)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->____whichArrow_8;
		int32_t L_74 = V_2;
		int32_t L_75 = L_74;
		int32_t L_76 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((uint32_t)L_76) == ((uint32_t)3))))
		{
			goto IL_0160;
		}
	}
	{
		// TaskProgress[i].transform.rotation = Quaternion.Euler(0, 0, -90);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_77 = __this->___TaskProgress_5;
		int32_t L_78 = V_2;
		int32_t L_79 = L_78;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_82;
		L_82 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (-90.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_81, L_82, NULL);
	}

IL_0160:
	{
		// for (int i = 0; i < TaskProgress.Length; i++)
		int32_t L_83 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0164:
	{
		// for (int i = 0; i < TaskProgress.Length; i++)
		int32_t L_84 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_85 = __this->___TaskProgress_5;
		if ((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
		{
			goto IL_0094;
		}
	}
	{
		// return combination;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_86 = V_1;
		return L_86;
	}
}
// System.Void SubmarineEventArrow::TaskCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEventArrow_TaskCompletion_mF7B1FC0E2E576D1A8685507830442BF9B16CCE5F (SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2* __this, const RuntimeMethod* method) 
{
	{
		// TaskProgress[_taskProgress].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___TaskProgress_5;
		int32_t L_1 = __this->____taskProgress_7;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// _taskProgress++;
		int32_t L_4 = __this->____taskProgress_7;
		__this->____taskProgress_7 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (_taskProgress >= 4)
		int32_t L_5 = __this->____taskProgress_7;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_0063;
		}
	}
	{
		// combinations = GenerateCombination();
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_6;
		L_6 = SubmarineEventArrow_GenerateCombination_mFE6D7AF325C02A3C68CC313F8FDFD2C2C70D9DB2(__this, NULL);
		__this->___combinations_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___combinations_10), (void*)L_6);
		// _eventControl.TaskCompleted();
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_7 = __this->____eventControl_4;
		EventControl_TaskCompleted_mE059C9FCEF21AF044A3FF6BCC7D8119B142AF393(L_7, NULL);
		// _eventControl.ResetEvent(gameObject,  ref _taskProgress);
		EventControl_t8C3467D4E1CFD428A02A264615A0A04F2239E995* L_8 = __this->____eventControl_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t* L_10 = (&__this->____taskProgress_7);
		EventControl_ResetEvent_m20E025E84146FE09B75F357346EE138C672E3F4A(L_8, L_9, L_10, NULL);
		// _time = 5;
		__this->____time_6 = (5.0f);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void SubmarineEventArrow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineEventArrow__ctor_m461DDBD4E28C8D70DFEECB0DE58DCA78E2B205C1 (SubmarineEventArrow_tC905ECE6528DF158B3FE9969FEA1900EC685A5A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B8C17035814E790C0DC63AD5884BA9B76B05694EAD7D856FB66D6E5294A3498A_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _time = 5;
		__this->____time_6 = (5.0f);
		// private KeyCode[] _arrow = new[]
		// {
		//     KeyCode.UpArrow,
		//     KeyCode.DownArrow,
		//     KeyCode.LeftArrow,
		//     KeyCode.RightArrow
		// };
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_0 = (KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)SZArrayNew(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var, (uint32_t)4);
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B8C17035814E790C0DC63AD5884BA9B76B05694EAD7D856FB66D6E5294A3498A_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->____arrow_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrow_9), (void*)L_1);
		// private KeyCode[] combinations = new KeyCode[4];
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_3 = (KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)SZArrayNew(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___combinations_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___combinations_10), (void*)L_3);
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
// System.Void SubmarineInput::.ctor(UnityEngine.Rigidbody2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineInput__ctor_mDDBB6391D04A4B449C5A0D8BC0D9002EA82B938E (SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb0, float ___speed1, const RuntimeMethod* method) 
{
	{
		// public SubmarineInput(Rigidbody2D rb, float speed)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _rb = rb;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___rb0;
		__this->____rb_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rb_4), (void*)L_0);
		// _speed = speed;
		float L_1 = ___speed1;
		__this->____speed_1 = L_1;
		// }
		return;
	}
}
// System.Void SubmarineInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineInput_Update_m1CD3C63E89B1434CA9025D64283570F451D0B1B2 (SubmarineInput_t12413B884752A1D2B22D0AAE721CBEADFFE7F0A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _speedX = Input.GetAxis("Horizontal") * _speed;
		float L_0;
		L_0 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_1 = __this->____speed_1;
		__this->____speedX_2 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// _speedY = Input.GetAxis("Vertical") * _speed;
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_3 = __this->____speed_1;
		__this->____speedY_3 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// if (_speedX != 0
		//     || _speedY != 0)
		float L_4 = __this->____speedX_2;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		float L_5 = __this->____speedY_3;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}

IL_0048:
	{
		// _move = new SubmarineMove();
		SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F* L_6 = (SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F*)il2cpp_codegen_object_new(SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F_il2cpp_TypeInfo_var);
		SubmarineMove__ctor_m558F337F5097A8ABD055F8F125C8E72ED9AD3BE4(L_6, NULL);
		__this->____move_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____move_0), (void*)L_6);
		// _move.Move(_rb, _speedX, _speedY);
		SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F* L_7 = __this->____move_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = __this->____rb_4;
		float L_9 = __this->____speedX_2;
		float L_10 = __this->____speedY_3;
		SubmarineMove_Move_mB1114F0CF44D43A87FBCA56C59444C7ADDF155E7(L_7, L_8, L_9, L_10, NULL);
	}

IL_0070:
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
// System.Void SubmarineMove::Move(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineMove_Move_mB1114F0CF44D43A87FBCA56C59444C7ADDF155E7 (SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RB0, float ___SpeedX1, float ___SpeedY2, const RuntimeMethod* method) 
{
	{
		// RB.AddForce(new Vector2(SpeedX, SpeedY));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___RB0;
		float L_1 = ___SpeedX1;
		float L_2 = ___SpeedY2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void SubmarineMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmarineMove__ctor_m558F337F5097A8ABD055F8F125C8E72ED9AD3BE4 (SubmarineMove_t48CFF2D33D298E7A8013A210807DC84EE81F018F* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void UI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Update_m7F9212980C571870E0700BAB400E09111370F6ED (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	{
		// UIChange();
		UI_UIChange_mAEBF5BFE95371225CF92274EC731BD17BDFB7B2C(__this, NULL);
		// if (submarine.timeEvent <= 0)
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_0 = __this->___submarine_5;
		float L_1 = L_0->___timeEvent_8;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		// Random ran = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_2, NULL);
		V_0 = L_2;
		// eventPanel[ran.Next(0, eventPanel.Length)].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___eventPanel_14;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___eventPanel_14;
		int32_t L_6;
		L_6 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)));
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// submarine.eventInProgress = true;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_9 = __this->___submarine_5;
		L_9->___eventInProgress_10 = (bool)1;
		// submarine.timeEvent = 10;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_10 = __this->___submarine_5;
		L_10->___timeEvent_8 = (10.0f);
	}

IL_0056:
	{
		// if (o2.o2 <= 0
		//     || submarine.submarineHeal <= 0)
		O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* L_11 = __this->___o2_6;
		int32_t L_12 = L_11->___o2_6;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_13 = __this->___submarine_5;
		int32_t L_14 = L_13->___submarineHeal_9;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0078;
		}
	}

IL_0072:
	{
		// Lose();
		UI_Lose_mE2822D73D7FF8A2D098DA4C10DE2686D6676AAC0(__this, NULL);
	}

IL_0078:
	{
		// if (player.win
		//     || submarine.win)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_15 = __this->___player_4;
		bool L_16 = L_15->___win_9;
		if (L_16)
		{
			goto IL_0092;
		}
	}
	{
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_17 = __this->___submarine_5;
		bool L_18 = L_17->___win_11;
		if (!L_18)
		{
			goto IL_0098;
		}
	}

IL_0092:
	{
		// Win();
		UI_Win_mCACAFC0886D84FA22F82F07B6019B7007795E507(__this, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void UI::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Pause_mBD6822CB5B3BBA6B64C38F39AFBB6697351CD5CB (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// pausePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pausePanel_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// gamePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gamePanel_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UI::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Continue_m6D7702BC095F2BE55E9A03FC9AD3668D30B8651D (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// pausePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pausePanel_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// gamePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gamePanel_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UI::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Menu_m59C9A890D7FBCADB53F2B35CD48945295D7F4FFA (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void UI::Replay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Replay_m8F0570E80791E33AEFA23B9421FAD5E9A6BD1B94 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void UI::Lose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Lose_mE2822D73D7FF8A2D098DA4C10DE2686D6676AAC0 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// losePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___losePanel_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UI::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Win_mCACAFC0886D84FA22F82F07B6019B7007795E507 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// winPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___winPanel_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// gamePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gamePanel_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UI::UIChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_UIChange_mAEBF5BFE95371225CF92274EC731BD17BDFB7B2C (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC23E13C8205D33A1A8059F86B6F5E7E10705CF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textResource.text = $"{player.resource}/5";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textResource_9;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___player_4;
		int32_t L_2 = L_1->___resource_8;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralDC23E13C8205D33A1A8059F86B6F5E7E10705CF9, L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// textO2.text = o2.time.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___textO2_8;
		O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* L_7 = __this->___o2_6;
		float* L_8 = (&L_7->___time_5);
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// if (o2.o2 < 4
		//     && !entranceToTheSubmarine.inSubmarine)
		O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* L_10 = __this->___o2_6;
		int32_t L_11 = L_10->___o2_6;
		if ((((int32_t)L_11) >= ((int32_t)4)))
		{
			goto IL_0075;
		}
	}
	{
		EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* L_12 = __this->___entranceToTheSubmarine_7;
		bool L_13 = L_12->___inSubmarine_10;
		if (L_13)
		{
			goto IL_0075;
		}
	}
	{
		// playerO2[o2.o2].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___playerO2_16;
		O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* L_15 = __this->___o2_6;
		int32_t L_16 = L_15->___o2_6;
		int32_t L_17 = L_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		goto IL_00a8;
	}

IL_0075:
	{
		// else if (o2.o2 < 4
		//          && entranceToTheSubmarine.inSubmarine)
		O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* L_19 = __this->___o2_6;
		int32_t L_20 = L_19->___o2_6;
		if ((((int32_t)L_20) >= ((int32_t)4)))
		{
			goto IL_00a8;
		}
	}
	{
		EntranceToTheSubmarine_t94C32C3BBDDF7F5B82F4457FA6D34F08DDF44178* L_21 = __this->___entranceToTheSubmarine_7;
		bool L_22 = L_21->___inSubmarine_10;
		if (!L_22)
		{
			goto IL_00a8;
		}
	}
	{
		// playerO2[o2.o2].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = __this->___playerO2_16;
		O2_tFC3941786049A81F798FE9AE7EB13120415C73AD* L_24 = __this->___o2_6;
		int32_t L_25 = L_24->___o2_6;
		int32_t L_26 = L_25;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
	}

IL_00a8:
	{
		// if (submarine.submarineHeal < 5)
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_28 = __this->___submarine_5;
		int32_t L_29 = L_28->___submarineHeal_9;
		if ((((int32_t)L_29) >= ((int32_t)5)))
		{
			goto IL_00ce;
		}
	}
	{
		// submarineHeal[submarine.submarineHeal].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = __this->___submarineHeal_15;
		Submarine_t4AA91748BA1D7DF5213760FD359EE4BF3AC709C3* L_31 = __this->___submarine_5;
		int32_t L_32 = L_31->___submarineHeal_9;
		int32_t L_33 = L_32;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void UI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI__ctor_m177FCA8E7C6A148BFF6FED9F758B3396F25FDFBB (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
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
// System.Void UIMenu::Tutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu_Tutorial_m5CD9D12630AE63BB1C9268C6EADED065EC9CD1FE (UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195* __this, const RuntimeMethod* method) 
{
	{
		// MenuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MenuPanel_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// TutorPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___TutorPanel_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIMenu::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu_Menu_m96DD5A58F6C2DE909813D8E8EAD3BF61AA842D7A (UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195* __this, const RuntimeMethod* method) 
{
	{
		// MenuPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MenuPanel_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// TutorPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___TutorPanel_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu_StartGame_m2CA6A643FB16135901A346BEB561A8927653B5BC (UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void UIMenu::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu_Play_m30292A5DAE06DCF9C5D461445B50A17BE36D503A (UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195* __this, const RuntimeMethod* method) 
{
	{
		// StoryPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___StoryPanel_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu__ctor_m3382AC3B4091E96F32BDC15216F9CE597719BA0B (UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
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
