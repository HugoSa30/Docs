/*
 * Program: n42.bin
 * Function: FUN_001004c8
 * Entry: 001004c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_001004c8(uint *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (_DAT_003fb988 == 0) {
    uVar7 = *param_1;
    uVar5 = param_1[1];
    if (uVar7 < uVar5) {
      uVar6 = 0;
      *param_2 = 0;
      DAT_003fb982 = 0;
      if (DAT_005bc800 != 0) {
        do {
          uVar4 = (&DAT_005bc808)[uVar6 * 8];
          if ((uVar7 <= uVar4) && (uVar1 = (&DAT_005bc804)[uVar6 * 8], uVar1 <= uVar5)) {
            uVar3 = (uint)DAT_003fb982;
            DAT_003fb982 = DAT_003fb982 + 1;
            (&DAT_003f9f30)[uVar3] = (char)uVar6;
            if (uVar1 <= uVar7) {
              uVar1 = uVar7;
            }
            if (uVar5 <= uVar4) {
              uVar4 = uVar5;
            }
            uVar2 = (*(code *)(&DAT_005bc818)[uVar6 * 8])(uVar1,uVar4);
            *param_2 = uVar2 | *param_2;
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < DAT_005bc800);
      }
      if (DAT_003fb982 != 0) goto LAB_001005d4;
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
LAB_001005d4:
  if (*param_2 == 0) {
    _DAT_003fb988 = 3;
    _DAT_003fb98c = 0x100;
    _DAT_003fb984 = 0;
    DAT_003fb983 = 0;
  }
  return *param_2;
}

