#pragma once

#include "LuaEngine.h"
#include "Unit.h"

class CNpc  : public Unit
{
public:
	virtual uint16 GetID() { return m_sNid; }
	virtual const char * GetName() { return m_strName; }

	uint16	m_sNid; // NPC ID
	uint16	m_sSid; // prototype ID

	short	m_sPid;				// MONSTER(NPC) Picture ID
	short	m_sSize;			// MONSTER(NPC) Size
	int		m_iWeapon_1;
	int		m_iWeapon_2;
	char	m_strName[MAX_NPC_SIZE+1];		// MONSTER(NPC) Name
	int		m_iMaxHP;			// �ִ� HP
	int		m_iHP;				// ���� HP
	uint8	m_byState;			// ���� (NPC) ����
	uint8	m_tNpcType;			// NPC Type
								// 0 : Normal Monster
								// 1 : NPC
								// 2 : �� �Ա�,�ⱸ NPC
								// 3 : ���
	int   m_iSellingGroup;		// ItemGroup

	uint8	m_NpcState;			// NPC�� ���� - ��Ҵ�, �׾���, ���ִ� ���...
	uint8	m_byGateOpen;		// Gate Npc Status -> 1 : open 0 : close

	uint8    m_byObjectType;     // ������ 0, objectŸ��(����, ����)�� 1
	int16	m_byDirection;

	uint8   m_byTrapNumber;

public:
	CNpc();

	virtual void Initialize();
	virtual void AddToRegion(int16 new_region_x, int16 new_region_z);

	void MoveResult(float xpos, float ypos, float zpos, float speed);
	virtual void GetInOut(Packet & result, uint8 bType);
	void SendInOut(uint8 bType, float fx, float fz, float fy);
	void GetNpcInfo(Packet & pkt);

	void SendGateFlag(uint8 bFlag = -1, bool bSendAI = true);

	virtual void HpChange(int amount, Unit *pAttacker = nullptr, bool bSendToAI = true); 
	virtual void MSpChange(int amount);

	virtual void OnDeath(Unit *pKiller);

	virtual bool isDead() { return m_NpcState == NPC_DEAD || m_iHP <= 0; };

	INLINE bool isGate() { return GetType() == NPC_GATE || GetType() == NPC_PHOENIX_GATE || GetType() == NPC_SPECIAL_GATE || GetType() == NPC_VICTORY_GATE; };
	INLINE bool isGateOpen() { return m_byGateOpen == 1; };
	INLINE bool isGateClosed() { return !isGateOpen(); };

	INLINE short GetEntryID() { return m_sSid; };
	INLINE uint8 GetType() { return m_tNpcType; };
	INLINE uint8 GetState() { return m_byState; };

	virtual int32 GetHealth() { return m_iHP; }
	virtual int32 GetMaxHealth() { return m_iMaxHP; }
	virtual int32 GetMana() { return 0; }
	virtual int32 GetMaxMana() { return 0; }

	virtual ~CNpc();

	DECLARE_LUA_CLASS(CNpc);

	DECLARE_LUA_GETTER(GetID);
	DECLARE_LUA_GETTER(GetEntryID);
	DECLARE_LUA_GETTER(GetName);
	DECLARE_LUA_GETTER(GetNation);
	DECLARE_LUA_GETTER(GetType);
	DECLARE_LUA_GETTER(GetZoneID);
	DECLARE_LUA_GETTER(GetX);
	DECLARE_LUA_GETTER(GetY);
	DECLARE_LUA_GETTER(GetZ);
};