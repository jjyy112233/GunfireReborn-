#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C;
// System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode>
struct List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// DungeonArchitect.Meshing.Common.GeometryVertex[]
struct GeometryVertexU5BU5D_t1EE3A14E6B74B4A4BB05978BA0601AA957D1A275;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// DungeonArchitect.Visibility.VisibilityGraphNode
struct VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DungeonArchitect.Meshing.Common.GeometryData
struct GeometryData_t72C3B8549D86EEB776C67101C593722C48A3A7E7  : public RuntimeObject
{
	// DungeonArchitect.Meshing.Common.GeometryVertex[] DungeonArchitect.Meshing.Common.GeometryData::vertices
	GeometryVertexU5BU5D_t1EE3A14E6B74B4A4BB05978BA0601AA957D1A275* ___vertices_0;
	// System.Int32[] DungeonArchitect.Meshing.Common.GeometryData::indices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices_1;
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

// DungeonArchitect.Visibility.VisibilityGraph
struct VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47  : public RuntimeObject
{
	// System.Int32 DungeonArchitect.Visibility.VisibilityGraph::<VisibilityDepth>k__BackingField
	int32_t ___U3CVisibilityDepthU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<DungeonArchitect.Visibility.VisibilityGraphNode> DungeonArchitect.Visibility.VisibilityGraph::nodes
	List_1_tDAF0BBB003AF6A251E4554F4C8FBA816D38F8C97* ___nodes_1;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
struct VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0 
{
	// DungeonArchitect.Visibility.VisibilityGraphNode DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState::Node
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___Node_0;
	// System.Int32 DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState::Depth
	int32_t ___Depth_1;
};
// Native definition for P/Invoke marshalling of DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
struct VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_pinvoke
{
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___Node_0;
	int32_t ___Depth_1;
};
// Native definition for COM marshalling of DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState
struct VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0_marshaled_com
{
	VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98* ___Node_0;
	int32_t ___Depth_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// DungeonArchitect.Meshing.Common.GeometryVertex
struct GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1 
{
	// UnityEngine.Vector3 DungeonArchitect.Meshing.Common.GeometryVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 DungeonArchitect.Meshing.Common.GeometryVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector2 DungeonArchitect.Meshing.Common.GeometryVertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
	// System.Single DungeonArchitect.Meshing.Common.GeometryVertex::ao
	float ___ao_3;
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// DungeonArchitect.Visibility.VisibilityGraphNode
struct VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98  : public RuntimeObject
{
	// UnityEngine.Bounds DungeonArchitect.Visibility.VisibilityGraphNode::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_0;
	// System.Boolean DungeonArchitect.Visibility.VisibilityGraphNode::_visible
	bool ____visible_1;
	// System.Collections.Generic.HashSet`1<DungeonArchitect.Visibility.VisibilityGraphNode> DungeonArchitect.Visibility.VisibilityGraphNode::connectedNodes
	HashSet_1_tABAD95221B2F01F5CAE7EA6D4D1922124AD17D8C* ___connectedNodes_2;
};

// UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 
{
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_MeshIndexSet
	bool ___m_MeshIndexSet_10;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_pinvoke
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_com
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};

// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode
struct GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6  : public VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98
{
	// UnityEngine.GameObject[] DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode::gameObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___gameObjects_3;
};

// DungeonArchitect.Meshing.Common.GeometryData

// DungeonArchitect.Meshing.Common.GeometryData

// System.ValueType

// System.ValueType

// DungeonArchitect.Visibility.VisibilityGraph

// DungeonArchitect.Visibility.VisibilityGraph

// UnityEngine.Color32

// UnityEngine.Color32

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState

// DungeonArchitect.Visibility.VisibilityGraph/VisibilitySearchState

// UnityEngine.Bounds

// UnityEngine.Bounds

// DungeonArchitect.Meshing.Common.GeometryVertex

// DungeonArchitect.Meshing.Common.GeometryVertex

// UnityEngine.ParticleSystem/Particle

// UnityEngine.ParticleSystem/Particle

// DungeonArchitect.Visibility.VisibilityGraphNode

// DungeonArchitect.Visibility.VisibilityGraphNode

// UnityEngine.ParticleSystem/EmitParams

// UnityEngine.ParticleSystem/EmitParams

// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode

// DungeonArchitect.Visibility.Impl.GameObjectVisibilityGraphNode
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6000[12] = 
{
	static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_Particle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_PositionSet_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_VelocitySet_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_AxisOfRotationSet_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_RotationSet_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_AngularVelocitySet_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartSizeSet_6)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartColorSet_7)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_RandomSeedSet_8)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartLifetimeSet_9)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_MeshIndexSet_10)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_ApplyShapeToPosition_11)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6003[3] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6004[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6011[2] = 
{
	static_cast<int32_t>(offsetof(VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0, ___Node_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(VisibilitySearchState_t5B198DE8602C802E5553B4A4FA3B53C3B5C984A0, ___Depth_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6012[2] = 
{
	static_cast<int32_t>(offsetof(VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47, ___U3CVisibilityDepthU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(VisibilityGraph_tDF9CBA378FA4709D3455EF0AB96EF9F863BC4A47, ___nodes_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6013[3] = 
{
	static_cast<int32_t>(offsetof(VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98, ___bounds_0)),static_cast<int32_t>(offsetof(VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98, ____visible_1)),static_cast<int32_t>(offsetof(VisibilityGraphNode_t21FFD21EAFA1E70B27DB3928503AC875EC728E98, ___connectedNodes_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6014[1] = 
{
	static_cast<int32_t>(offsetof(GameObjectVisibilityGraphNode_tC36EE52E36547F640A6271908B21396895DD81B6, ___gameObjects_3)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6018[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6026[4] = 
{
	static_cast<int32_t>(offsetof(GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1, ___position_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1, ___normal_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1, ___uv_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(GeometryVertex_t763497B2C5A0DF03911F2C1409F0BE5C94E930E1, ___ao_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6027[2] = 
{
	static_cast<int32_t>(offsetof(GeometryData_t72C3B8549D86EEB776C67101C593722C48A3A7E7, ___vertices_0)),static_cast<int32_t>(offsetof(GeometryData_t72C3B8549D86EEB776C67101C593722C48A3A7E7, ___indices_1)),};
