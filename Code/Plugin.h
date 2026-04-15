// Copyright 2016-2018 Crytek GmbH / Crytek Group. All rights reserved.
#pragma once

#include <CrySystem/ICryPlugin.h>

#include <CryGame/IGameFramework.h>

#include <CryEntitySystem/IEntityClass.h>

class CPlugin 
	: public Cry::IEnginePlugin
	, public ISystemEventListener
{
public:
	CRYINTERFACE_SIMPLE(Cry::IEnginePlugin)
	CRYGENERATE_SINGLETONCLASS_GUID(CPlugin, "ECS AreaTrigger", "{3E1672E8-D3E2-4098-9749-DD1163DD805F}"_cry_guid)

	PLUGIN_FLOWNODE_REGISTER
	PLUGIN_FLOWNODE_UNREGISTER

	virtual ~CPlugin();
	
	// Cry::IEnginePlugin
	virtual bool Initialize(SSystemGlobalEnvironment& env, const SSystemInitParams& initParams) override;
	// ~Cry::IEnginePlugin
	
	// ISystemEventListener
	virtual void OnSystemEvent(ESystemEvent event, UINT_PTR wparam, UINT_PTR lparam) override;
	// ~ISystemEventListener
};