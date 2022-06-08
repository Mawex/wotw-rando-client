using namespace app;

namespace app::methods::SeinSwimming {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A83B70, bool, get_IsUpsideDown, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A83D30, bool, ShouldHandleKickback, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A83E60, bool, IsDashingInWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A83F80, bool, get_IsDrowning, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A83F90, SeinSwimmingPuppet *, get_Puppet, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00875720, bool, get_OriUnderWaterWwiseStateValue, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84050, void, set_OriUnderWaterWwiseStateValue, (SeinSwimming * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A84250, float, get_BoostMaxSpeed, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A842E0, bool, get_IsGlowPerforming, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84420, void, set_SwimAngle, (SeinSwimming * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A84540, float, get_SwimAngle, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84550, float, get_KickbackForce, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84580, float, get_DigLeftStickDeadZone, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84680, WaterZone *, get_PreviousWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84690, WaterZone *, get_CurrentWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A846A0, void, set_CurrentWater, (SeinSwimming * __this, WaterZone * value));
IL2CPP_REGISTER_METHOD(0x00A848B0, bool, get_IsInsideWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84960, SeinDigging *, get_DigAbility, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A849A0, bool, get_IsDigging, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x009CD4A0, float, GetDashDamage, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x004A3B10, float, get_RemainingBreath, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84AF0, void, set_RemainingBreath, (SeinSwimming * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A84B00, bool, get_JustBashed, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84C50, bool, get_IsDashing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84C60, bool, get_IsSurfaceDashing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84C70, bool, get_IsDashingIntoWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84C80, bool, get_CanTurnPlay, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84CC0, bool, get_CanWaterDash, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84CF0, bool, get_CanIntoWaterDash, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84CC0, bool, get_CanSurfaceDash, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84E70, bool, HasAbility, (SeinSwimming * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00A84F30, bool, get_IsSeinGrabAllowed, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84F50, float, get_AngleDeltaLimit, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84F70, bool, get_HasUnlimitedBreathingUnderwater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x006F40D0, CharacterPlatformMovement *, get_PlatformMovement, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity *, get_Gravity, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84FD0, bool, get_IsStatePerforming, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84FD0, bool, get_IsSwimming, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A84FF0, float, get_WaterSurfacePositionY, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85020, Rect, get_WaterSurfaceBound, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85120, void, OnSetReferenceToSein, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85200, bool, get_IsUnderwater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85220, bool, get_IsDashExiting, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85230, bool, get_IsSwimmingPostDash, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85260, bool, get_IsSwimmingPostSurfaceDash, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85280, bool, get_IsSurfaceSwimming, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00706210, bool, get_IsSwimmingUnderwater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A852A0, void, SetShouldStartDashing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A852B0, bool, get_SpriteMirrorLock, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A852C0, void, set_SpriteMirrorLock, (SeinSwimming * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A85380, void, HideBreathingUI, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85410, void, ShowBreathingUI, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A854A0, void, OnAwake, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85670, void, RestoreBreath, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85680, void, HandleDamageAnimationAndKickback, (SeinSwimming * __this, Damage * damage, bool kickbackEnabled, float * hurtTimeremaining, ActiveAnimationHandle * activeAnimation, SeinDamageReceiverPuppet * puppet));
IL2CPP_REGISTER_METHOD(0x00A85C00, float, get_WaterDamage, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A85E70, void, UpdateWaterDyingConditions, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A86170, void, UpdateDashParticleEffects, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A86EF0, bool, NeedsBreath, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A87020, void, SetCurvatureParameter, (SeinSwimming * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A87090, void, UpdateSwimAngleAnimationParameter, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A87190, void, UpdateTimeInsideWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A872A0, void, UpdateDistanceSwam, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A87550, void, TryFlushDistanceSwam, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A87650, void, UpdateBreathingUI, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A87700, void, UpadateInsideWaterCurrent, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A87B10, void, UpdateDrowning, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A88100, void, UpdateImpureWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A88440, void, UpdateDamagingWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A88560, void, UpdateDamagingWaterPoisonCloud, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A88850, void, Start, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A890A0, void, OnDestroy, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A89AE0, void, Serialize, (SeinSwimming * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A89C20, void, OnRestoreCheckpoint, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x047965C8, SeinSwimming_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A89C50, void, DestroySwimDashEffect, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A89D40, void, ModifyHorizontalPlatformMovementSettings, (SeinSwimming * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04777A40, SeinSwimming_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A89E50, void, ModifyGravityPlatformMovementSettings, (SeinSwimming * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04759408, SeinSwimming_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A89EB0, void, OnEnter, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A89FE0, void, OnExit, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8A010, void, UpdateCharacterState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8A4B0, void, CacheFacing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8A520, void, ChangeState, (SeinSwimming * __this, SeinSwimming_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00A8A8E0, void, UpdateSoundUnderWaterState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8AAE0, void, GetOutOfWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InstantiateWaterSplashEffect, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8AE40, void, SwimUnderwater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8B6D0, float, WrapAngle, (SeinSwimming * __this, float angle));
IL2CPP_REGISTER_METHOD(0x00A8B7E0, WaterZone *, ComputeCurrentWaterZone, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8B9B0, void, HandleEnteringWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8BF30, void, UpdateOutOfWaterState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8C180, void, DealDamage, (SeinSwimming * __this, WaterZone * waterZone));
IL2CPP_REGISTER_METHOD(0x00A8C4F0, void, SwimOnSurface, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x006EF310, void, OnDisable, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8CC10, void, UpdateSwimmingOnSurfaceState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8DBC0, void, HorizontalFlip, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8DE40, void, VerticalFlip, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8E0B0, void, HorizontalVerticalFlip, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8E2F0, void, OnBashBegin, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x047533B8, SeinSwimming_OnBashBegin__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A8E540, void, OnBashPerformed, (SeinSwimming * __this, Vector2 vel));
IL2CPP_REGISTER_METHODINFO(0x0470E5C8, SeinSwimming_OnBashPerformed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A8E590, void, OnBash, (SeinSwimming * __this, float angle));
IL2CPP_REGISTER_METHOD(0x00A8E650, void, StartDashing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8E8C0, void, EndDash, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8E8D0, void, OnEnterSwimMovingUnderwater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitSwimMovingUnderwater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8EC70, void, OnEnterSwimmingOnSurface, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitSwimmingOnSurface, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterSwimIdleUnderwater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitSwimIdleUnderwater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8EF80, void, OnEnterOutOfWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitOutOfWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8EFE0, void, OnEnterDashing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8F3A0, void, OnExitDashing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A8F3C0, void, OnMoonControllerCollision, (SeinSwimming * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x04747688, SeinSwimming_OnMoonControllerCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A8FF00, void, WallImpact, (SeinSwimming * __this, Vector3 impactPoint, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x00A904B0, void, SurfaceWallImpact, (SeinSwimming * __this, Vector3 impactPoint, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x00A90A60, void, UpdateDashingState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A91550, void, ClearDashDamage, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A916A0, void, UpdateDashDamage, (SeinSwimming * __this, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x00A92000, void, OnEnterDashingOutOfWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A92CB0, float, GetWaterCurrentForceMultiplier, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A92DE0, void, OnRootMotionForWallImpact, (SeinSwimming * __this, Vector3 root));
IL2CPP_REGISTER_METHODINFO(0x0475F6A0, SeinSwimming_OnRootMotionForWallImpact__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A92EE0, void, OnWallImpactAnimationEnded, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A930A0, void, OnRootMotionForExitSand, (SeinSwimming * __this, Vector3 root));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitDashingOutOfWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A93220, void, OnDrillZoneReleaseEvent, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A93260, void, UpdateDashingOutOfWaterState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A935F0, void, PushAngleToCharacter, (SeinSwimming * __this, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x00A93700, void, PlaySound, (SeinSwimming * __this, SoundProvider * provider));
IL2CPP_REGISTER_METHOD(0x00A938A0, void, PlaySound, (SeinSwimming * __this, Event_1 * soundEvent));
IL2CPP_REGISTER_METHOD(0x00A93A20, void, UpdateSwimMovingUnderwaterState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A95090, void, UpdateSwimIdleUnderwaterState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A95A10, bool, HandleLeavingWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A96060, void, StopBoosting, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A96080, void, OnEnterWallImpact, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A96690, void, OnExitWallImpact, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A968E0, void, UpdateWallImpactState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A96CB0, void, OnWallImpactCancellationWindowStarted, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04759E40, SeinSwimming_OnWallImpactCancellationWindowStarted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A96DE0, void, OnWallImpactCancellationWindowEnded, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A5F8, SeinSwimming_OnWallImpactCancellationWindowEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A96DF0, void, OnWallImpactTimelineEnded, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04768590, SeinSwimming_OnWallImpactTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A97020, void, OnEnterSurfaceWallImpact, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A97630, void, OnExitSurfaceWallImpact, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A97880, void, UpdateSurfaceWallImpactState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A97C40, void, OnSurfaceWallImpactCancellationWindowStarted, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x047422E8, SeinSwimming_OnSurfaceWallImpactCancellationWindowStarted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A97C50, void, OnSurfaceWallImpactCancellationWindowEnded, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04713610, SeinSwimming_OnSurfaceWallImpactCancellationWindowEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A97C60, void, OnSurfaceWallImpactTimelineEnded, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04745D00, SeinSwimming_OnSurfaceWallImpactTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A97C70, void, OnRootMotionForSurfaceWallImpact, (SeinSwimming * __this, Vector3 root));
IL2CPP_REGISTER_METHODINFO(0x04752CE0, SeinSwimming_OnRootMotionForSurfaceWallImpact__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A97D70, void, OnEnterSurfaceDash, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A98460, void, OnExitSurfaceDash, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A984D0, void, UpdateSurfaceDashState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x006FBDD0, bool, IsHittingWall, (SeinSwimming * __this, int32_t dashDirection));
IL2CPP_REGISTER_METHOD(0x00A98FB0, void, OnEnterDashIntoWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitDashIntoWater, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A99360, void, UpdateDashIntoWaterState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9A170, void, OnSurfaceDashStartAnimationEnded, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04712F00, SeinSwimming_OnSurfaceDashStartAnimationEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSurfaceDashEndAnimationEnded, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9A380, bool, CanJump, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9A3A0, Vector2, ComputeIntersectionWithWaterSurface, (SeinSwimming * __this, Vector3 p0, Vector3 p1, WaterZone * zone));
IL2CPP_REGISTER_METHOD(0x00A9A590, void, SurfaceSwimJump, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9A990, float, ComputeDashIntoWaterMaxDistance, (SeinSwimming * __this, Vector2 inputAxis));
IL2CPP_REGISTER_METHOD(0x00706210, bool, ShouldSwimUnderwaterAnimationPlay, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x0470FB08, SeinSwimming_ShouldSwimUnderwaterAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A9AA40, bool, ShouldIdleUnderwaterAnimationPlay, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x0475DCC8, SeinSwimming_ShouldIdleUnderwaterAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A9AA50, bool, ShouldSwimSurfaceAnimationPlay, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x0477FB00, SeinSwimming_ShouldSwimSurfaceAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A9AA60, bool, ShouldJumpOutOfWaterAnimationIdleKeepPlaying, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04770498, SeinSwimming_ShouldJumpOutOfWaterAnimationIdleKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A9AC10, bool, ShouldJumpOutOfWaterAnimationMovingKeepPlaying, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x0477CE90, SeinSwimming_ShouldJumpOutOfWaterAnimationMovingKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A9ADC0, bool, CanGlow, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9ADE0, void, OnQuickGlowStarted, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04789E60, SeinSwimming_OnQuickGlowStarted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A9AF50, void, SetShouldStartDigDashing, (SeinSwimming * __this, DigZone * zone, Vector3 adjustedDigDirection));
IL2CPP_REGISTER_METHOD(0x00A9B2E0, void, OnEnterDigging, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitDigging, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9B2F0, void, UpdateDiggingState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9B300, void, OnDigGotOutoOfZone, (SeinSwimming * __this, bool shouldDash));
IL2CPP_REGISTER_METHOD(0x00A9B420, void, OnEnterDrowning, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9B500, void, OnExitDrowning, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9B580, void, UpdateDrowningState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBashing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitBashing, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9BCF0, void, UpdateBashingState, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9BDD0, void, OnDrawGizmosSelected, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9BE70, void, __ctor, (SeinSwimming * __this));
IL2CPP_REGISTER_METHOD(0x00A9C400, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00A84C50, bool, _StartDashing_b__300_0, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B7B0, SeinSwimming__StartDashing_b__300_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A9C480, EffectSpawn, _UpdateDashDamage_b__317_0, (SeinSwimming * __this, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04701C18, SeinSwimming__UpdateDashDamage_b__317_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0070CE70, bool, _OnEnterDashingOutOfWater_b__318_0, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x0474AA00, SeinSwimming__OnEnterDashingOutOfWater_b__318_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A84C60, bool, _OnEnterSurfaceDash_b__346_0, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x047956B0, SeinSwimming__OnEnterSurfaceDash_b__346_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A84C70, bool, _OnEnterDashIntoWater_b__350_0, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04779800, SeinSwimming__OnEnterDashIntoWater_b__350_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A84C60, bool, _OnSurfaceDashStartAnimationEnded_b__353_0, (SeinSwimming * __this));
IL2CPP_REGISTER_METHODINFO(0x04795178, SeinSwimming__OnSurfaceDashStartAnimationEnded_b__353_0__MethodInfo);
}
