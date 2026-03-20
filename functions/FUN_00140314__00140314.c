/*
 * Program: n42.bin
 * Function: FUN_00140314
 * Entry: 00140314
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00140314(undefined *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  short *unaff_r22;
  byte *unaff_r23;
  byte *unaff_r24;
  char *unaff_r25;
  undefined2 *unaff_r26;
  byte *unaff_r27;
  short sVar3;
  undefined2 *unaff_r28;
  undefined4 unaff_r29;
  byte *unaff_r30;
  
  *param_1 = 1;
  if (*unaff_r25 == '\0') {
    if (DAT_001cadb7 < *unaff_r23) {
      uVar1 = _DAT_001cad5a;
      if (*unaff_r30 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140500 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*unaff_r30 * 4 + 0xf4050c))();
        return;
      }
    }
    else {
      uVar1 = _DAT_001cad3a;
      if (*unaff_r30 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0014047c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*unaff_r30 * 4 + 0xf40488))();
        return;
      }
    }
  }
  else if (DAT_001cadb7 < *unaff_r23) {
    uVar1 = _DAT_001cad4a;
    if (*unaff_r30 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001403e4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*unaff_r30 * 4 + 0xf403f0))();
      return;
    }
  }
  else {
    uVar1 = _DAT_001cad2a;
    if (*unaff_r30 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140360 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*unaff_r30 * 4 + 0xf4036c))();
      return;
    }
  }
  func_0xff222514(&DAT_003fb3f0,unaff_r29,uVar1);
  DAT_005b9b06 = (short)((uint)_DAT_003fb3f0 >> 0x10);
  *unaff_r26 = *unaff_r28;
  sVar3 = ((ushort)*unaff_r24 - (ushort)DAT_001cada4) + 0x40;
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  func_0xff222514(&DAT_003fb408,sVar3,_DAT_001cad6a);
  if (DAT_001cadad != '\x01') {
    _DAT_003fddc6 = DAT_005b9b06 + *unaff_r22;
    if (0x200 < _DAT_003fddc6) {
      _DAT_003fddc6 = 0x200;
    }
    if ((DAT_001cadc0 == '\x01') || (DAT_005b8ec7 != '\0')) {
      _DAT_003fb3f8 = 0;
    }
    gentemp = _DAT_003fddc6;
    func_0xff222514(&DAT_003fb3f8,_DAT_001cad26,_DAT_001cad8e);
    DAT_005b8a90 = (undefined2)((uint)_DAT_003fb3f8 >> 0x10);
    DAT_005b8ec7 = 0;
    if (DAT_001cadc0 == '\x01') {
      _DAT_003fb3fc = 0;
    }
    if (DAT_001cadbf == '\x01') {
      func_0xff221d28(&DAT_003fb3fc);
    }
    DAT_005b8a8e = _DAT_003fb3fc;
    DAT_003fb405 = func_0xff221e78(&UNK_003fb404,DAT_001cad90 < *unaff_r24,DAT_001cadbc);
    if (DAT_003fb406 == '\0') {
      sVar3 = DAT_005b8a74 + -0x40;
    }
    else if (DAT_001cadb7 < *unaff_r27) {
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001407bc */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf407c8))();
        return;
      }
      uVar2 = func_0xff2187cc(&DAT_001cac30,*unaff_r27);
      sVar3 = (uVar2 & 0xff) + (ushort)tumg + -0x80;
    }
    else {
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140730 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf4073c))();
        return;
      }
      sVar3 = (ushort)*unaff_r24 - (ushort)DAT_001cada5;
    }
    uVar2 = sVar3 + 0x40;
    if ((short)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0xff < (short)uVar2) {
      uVar2 = 0xff;
    }
    DAT_005b8a78 = uVar2 & 0xff;
    if (DAT_001cadb7 < *unaff_r23) {
      uVar1 = _DAT_001cad7c;
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140994 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf409a0))();
        return;
      }
    }
    else {
      uVar1 = _DAT_001cad6c;
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0014090c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf40918))();
        return;
      }
    }
    func_0xff222514(&DAT_003fb400,DAT_005b8a78,uVar1);
    *unaff_r22 = (short)((uint)_DAT_003fb400 >> 0x10);
    return;
  }
  FUN_00140600();
  return;
}

