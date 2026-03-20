/*
 * Program: n42.bin
 * Function: FUN_00092a9c
 * Entry: 00092a9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00092a9c(uint *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (_DAT_003fa1a4 == 0) {
    uVar7 = *param_1;
    uVar5 = param_1[1];
    if (uVar7 < uVar5) {
      *param_2 = 0;
      DAT_003fa1aa = 0;
      uVar6 = 0;
      uVar4 = (uint)DAT_001c02ac;
      if (uVar4 != 0) {
        do {
          uVar3 = (&DAT_001c02b4)[uVar6 * 7];
          if ((uVar7 <= uVar3) && (uVar1 = (&DAT_001c02b0)[uVar6 * 7], uVar1 <= uVar5)) {
            (&UNK_003fa240)[DAT_003fa1aa] = (char)uVar6;
            DAT_003fa1aa = DAT_003fa1aa + 1;
            if (uVar1 <= uVar7) {
              uVar1 = uVar7;
            }
            if (uVar5 <= uVar3) {
              uVar3 = uVar5;
            }
            uVar2 = (*(code *)(&DAT_001c02c4)[uVar6 * 7])(uVar1,uVar3);
            *param_2 = uVar2 | *param_2;
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < uVar4);
      }
      if (DAT_003fa1aa != 0) goto LAB_00092b98;
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 4;
  }
  *param_2 = uVar2;
LAB_00092b98:
  if (*param_2 == 0) {
    _DAT_003fa1a4 = 3;
    _DAT_003fa1a8 = 0x100;
    _DAT_003fa1ac = 0;
    DAT_003fa1ab = 0;
  }
  return *param_2;
}

