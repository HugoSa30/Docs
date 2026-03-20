/*
 * Program: n42.bin
 * Function: FUN_0013fb90
 * Entry: 0013fb90
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013fb90(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  
  if (B_stend != '\0') {
    uVar7 = ((int)((uint)DAT_005b8a7e * 0x1a6a0 + -0x95a999) >> 0xb) + 0x3ff0;
    DAT_005b8a5e = (undefined2)uVar7;
    uVar5 = (uint)DAT_003fddc4;
    if (uVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013fc14 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar5 * 4 + 0xf3fc20))();
      return;
    }
    uVar7 = (uVar7 & 0xffff) * (uint)_DAT_001cad12 >> 0xe;
    if (0xffff < uVar7) {
      uVar7 = 0xffff;
    }
    DAT_005b8a70 = (undefined2)uVar7;
    if (uVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013fcbc */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar5 * 4 + 0xf3fcc8))();
      return;
    }
    iVar3 = (int)((uint)geni_end * (uint)DAT_001cad9b) >> 3;
    DAT_005b8a6e = (undefined2)iVar3;
    uVar2 = (uint)(iVar3 * iVar3) >> 10;
    DAT_005b8a66 = (undefined2)uVar2;
    DAT_005b8a9c = (uVar7 & 0xffff) * uVar2 >> 2;
    if (uVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013fd84 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar5 * 4 + 0xf3fd90))();
      return;
    }
    iVar3 = (int)((uint)geni_end * (uint)DAT_001cad92) >> 3;
    DAT_005b8a6c = (undefined2)iVar3;
    if (uVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013fe0c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar5 * 4 + 0xf3fe18))();
      return;
    }
    DAT_005b8a94 = iVar3 * (uint)DAT_001cadc1 * 4;
    if (uVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013fe9c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar5 * 4 + 0xf3fea8))();
      return;
    }
    uVar5 = func_0xff2189bc(&DAT_001ca6fe,gentemp);
    uVar5 = DAT_005b8a94 * (uVar5 & 0xff);
    DAT_005b8aa0 = uVar5 >> 7;
    uVar5 = (DAT_005b8a9c >> 9) + (uVar5 >> 0x10);
    if (0xffff < uVar5) {
      uVar5 = 0xffff;
    }
    DAT_005b8a72 = (ushort)uVar5;
    if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0013ffe4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)DAT_003fddc4 * 4 + 0xf3fff0))();
      return;
    }
    uVar5 = func_0xff2189bc(&DAT_001ca9e0,DAT_005b9b08);
    if (DAT_001cadb7 < vfzg) {
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001401d4 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf401e0))();
        return;
      }
      uVar7 = func_0xff2187cc(&DAT_001cab70,geni_end);
    }
    else {
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001400f0 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf400fc))();
        return;
      }
      uVar7 = func_0xff2187cc(&DAT_001caab0,geni_end);
    }
    uVar5 = (((uint)DAT_005b8a72 * (uVar5 & 0xffff) >> 2) * (uVar7 & 0xff)) / 0x60000;
    if (0x100 < uVar5) {
      uVar5 = 0x100;
    }
    DAT_005b8a64 = (undefined2)uVar5;
    uVar5 = uVar5 * 3;
    DAT_005b8a60 = (ushort)uVar5;
    if (DAT_005b8a62 < uVar5) {
      DAT_005b8ec5 = '\x01';
    }
    else if (uVar5 < DAT_005b8a62) {
      DAT_005b8ec5 = '\0';
    }
    if (DAT_005b8ec5 == '\0') {
      if (DAT_001cadb7 < vfzg) {
        uVar1 = _DAT_001cad5a;
        if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140500 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)DAT_003fddc4 * 4 + 0xf4050c))();
          return;
        }
      }
      else {
        uVar1 = _DAT_001cad3a;
        if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0014047c */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)DAT_003fddc4 * 4 + 0xf40488))();
          return;
        }
      }
    }
    else if (DAT_001cadb7 < vfzg) {
      uVar1 = _DAT_001cad4a;
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001403e4 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf403f0))();
        return;
      }
    }
    else {
      uVar1 = _DAT_001cad2a;
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140360 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0xf4036c))();
        return;
      }
    }
    func_0xff222514(&DAT_003fb3f0,uVar5,uVar1);
    DAT_005b9b06 = (short)((uint)_DAT_003fb3f0 >> 0x10);
    DAT_005b8a62 = DAT_005b8a60;
    sVar6 = ((ushort)tmot - (ushort)DAT_001cada4) + 0x40;
    if (sVar6 < 0) {
      sVar6 = 0;
    }
    func_0xff222514(&DAT_003fb408,sVar6,_DAT_001cad6a);
    if (DAT_001cadad == '\x01') {
      FUN_00140600();
      return;
    }
    _DAT_003fddc6 = DAT_005b9b06 + DAT_005b8a76;
    gentemp = _DAT_003fddc6;
    if (0x200 < _DAT_003fddc6) {
      _DAT_003fddc6 = 0x200;
      gentemp = _DAT_003fddc6;
    }
  }
  if ((DAT_001cadc0 == '\x01') || (DAT_005b8ec7 != '\0')) {
    _DAT_003fb3f8 = 0;
  }
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
  DAT_003fb405 = func_0xff221e78(&UNK_003fb404,DAT_001cad90 < tmot,DAT_001cadbc);
  if (DAT_003fb406 == '\0') {
    sVar6 = DAT_005b8a74 + -0x40;
  }
  else if (DAT_001cadb7 < vfzg) {
    if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001407bc */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)DAT_003fddc4 * 4 + 0xf407c8))();
      return;
    }
    uVar4 = func_0xff2187cc(&DAT_001cac30,vfzg);
    sVar6 = (uVar4 & 0xff) + (ushort)tumg + -0x80;
  }
  else {
    if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140730 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)DAT_003fddc4 * 4 + 0xf4073c))();
      return;
    }
    sVar6 = (ushort)tmot - (ushort)DAT_001cada5;
  }
  uVar4 = sVar6 + 0x40;
  if ((short)uVar4 < 0) {
    uVar4 = 0;
  }
  else if (0xff < (short)uVar4) {
    uVar4 = 0xff;
  }
  DAT_005b8a78 = uVar4 & 0xff;
  if (DAT_001cadb7 < vfzg) {
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
  DAT_005b8a76 = (short)((uint)_DAT_003fb400 >> 0x10);
  return;
}

