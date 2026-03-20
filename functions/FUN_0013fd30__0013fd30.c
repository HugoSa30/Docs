/*
 * Program: n42.bin
 * Function: FUN_0013fd30
 * Entry: 0013fd30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013fd30(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint in_r11;
  ushort uVar4;
  short *unaff_r22;
  byte *unaff_r23;
  byte *unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  byte *unaff_r27;
  short sVar5;
  undefined *unaff_r28;
  int unaff_r29;
  byte *unaff_r30;
  
  uVar2 = (int)((in_r11 & 0xffff) * unaff_r29) >> 3;
  DAT_005b8a6e = (undefined2)uVar2;
  uVar2 = uVar2 & 0xffff;
  uVar2 = uVar2 * uVar2 >> 10;
  DAT_005b8a66 = (undefined2)uVar2;
  DAT_005b8a9c = (unaff_r25 & 0xffff) * (uVar2 & 0xffff) >> 2;
  if (unaff_r26 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013fd84 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r26 * 4 + 0xf3fd90))();
    return;
  }
  uVar2 = (int)((in_r11 & 0xffff) * (uint)DAT_001cad92) >> 3;
  DAT_005b8a6c = (undefined2)uVar2;
  if (unaff_r26 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013fe0c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r26 * 4 + 0xf3fe18))();
    return;
  }
  DAT_005b8a94 = (uVar2 & 0xffff) * (uint)DAT_001cadc1 * 4;
  if (unaff_r26 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013fe9c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r26 * 4 + 0xf3fea8))();
    return;
  }
  uVar2 = func_0xff2189bc(&DAT_001ca6fe,gentemp);
  uVar2 = DAT_005b8a94 * (uVar2 & 0xff);
  DAT_005b8aa0 = uVar2 >> 7;
  uVar2 = (DAT_005b8a9c >> 9) + (uVar2 >> 0x10);
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  DAT_005b8a72 = (ushort)uVar2;
  if (7 < *unaff_r30) {
    uVar2 = func_0xff2189bc(&DAT_001ca9e0,DAT_005b9b08);
    if (DAT_001cadb7 < *unaff_r23) {
      if (*unaff_r30 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001401d4 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*unaff_r30 * 4 + 0xf401e0))();
        return;
      }
      uVar3 = func_0xff2187cc(&DAT_001cab70,*unaff_r28);
    }
    else {
      if (*unaff_r30 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001400f0 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*unaff_r30 * 4 + 0xf400fc))();
        return;
      }
      uVar3 = func_0xff2187cc(&DAT_001caab0,*unaff_r28);
    }
    uVar2 = (((uint)DAT_005b8a72 * (uVar2 & 0xffff) >> 2) * (uVar3 & 0xff)) / 0x60000;
    if (0x100 < uVar2) {
      uVar2 = 0x100;
    }
    DAT_005b8a64 = (undefined2)uVar2;
    uVar2 = uVar2 * 3;
    DAT_005b8a60 = (undefined2)uVar2;
    if (DAT_005b8a62 < uVar2) {
      DAT_005b8ec5 = '\x01';
    }
    else if (uVar2 < DAT_005b8a62) {
      DAT_005b8ec5 = '\0';
    }
    if (DAT_005b8ec5 == '\0') {
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
    func_0xff222514(&DAT_003fb3f0,uVar2,uVar1);
    DAT_005b9b06 = (short)((uint)_DAT_003fb3f0 >> 0x10);
    DAT_005b8a62 = DAT_005b8a60;
    sVar5 = ((ushort)*unaff_r24 - (ushort)DAT_001cada4) + 0x40;
    if (sVar5 < 0) {
      sVar5 = 0;
    }
    func_0xff222514(&DAT_003fb408,sVar5,_DAT_001cad6a);
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
        sVar5 = DAT_005b8a74 + -0x40;
      }
      else if (DAT_001cadb7 < *unaff_r27) {
        if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001407bc */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)DAT_003fddc4 * 4 + 0xf407c8))();
          return;
        }
        uVar4 = func_0xff2187cc(&DAT_001cac30,*unaff_r27);
        sVar5 = (uVar4 & 0xff) + (ushort)tumg + -0x80;
      }
      else {
        if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140730 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)DAT_003fddc4 * 4 + 0xf4073c))();
          return;
        }
        sVar5 = (ushort)*unaff_r24 - (ushort)DAT_001cada5;
      }
      uVar4 = sVar5 + 0x40;
      if ((short)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (short)uVar4) {
        uVar4 = 0xff;
      }
      DAT_005b8a78 = uVar4 & 0xff;
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
                    /* WARNING: Could not emulate address calculation at 0x0013ffe4 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)*unaff_r30 * 4 + 0xf3fff0))();
  return;
}

