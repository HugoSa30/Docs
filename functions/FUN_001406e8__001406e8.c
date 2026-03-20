/*
 * Program: n42.bin
 * Function: FUN_001406e8
 * Entry: 001406e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001406e8(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined uVar2;
  ushort uVar3;
  undefined2 *unaff_r22;
  byte *unaff_r23;
  byte *unaff_r24;
  byte *unaff_r27;
  short sVar4;
  int unaff_r30;
  
  uVar2 = func_0xff221e78(unaff_r30,param_2,DAT_001cadbc);
  *(undefined *)(unaff_r30 + 1) = uVar2;
  if (DAT_003fb406 == '\0') {
    sVar4 = DAT_005b8a74 + -0x40;
  }
  else if (DAT_001cadb7 < *unaff_r27) {
    if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001407bc */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)DAT_003fddc4 * 4 + 0xf407c8))();
      return;
    }
    uVar3 = func_0xff2187cc(&DAT_001cac30,*unaff_r27);
    sVar4 = (uVar3 & 0xff) + (ushort)tumg + -0x80;
  }
  else {
    if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00140730 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)DAT_003fddc4 * 4 + 0xf4073c))();
      return;
    }
    sVar4 = (ushort)*unaff_r24 - (ushort)DAT_001cada5;
  }
  uVar3 = sVar4 + 0x40;
  if ((short)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xff < (short)uVar3) {
    uVar3 = 0xff;
  }
  DAT_005b8a78 = uVar3 & 0xff;
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

