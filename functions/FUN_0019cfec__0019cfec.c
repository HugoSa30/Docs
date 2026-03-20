/*
 * Program: n42.bin
 * Function: FUN_0019cfec
 * Entry: 0019cfec
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019cfec(void)

{
  short sVar1;
  ENUM_005b8d40 EVar2;
  short sVar3;
  byte bVar4;
  undefined uVar5;
  uint uVar6;
  
  func_0xff221d28(&DAT_003fb82a);
  EVar2 = B_dzdmden;
  if (((0x5dc00000 / ((uint)nmot * 0x8000 + 0x333 >> 1)) / 0x19) * (uint)DAT_001ccc61 <
      ((uint)_DAT_003fb82a << 8) / 5) {
    uVar6 = 0;
    do {
      sVar1 = (&DAT_005b973e)[uVar6];
      sVar3 = sVar1 - (&DAT_005b9ba6)[uVar6];
      (&DAT_005b9b96)[uVar6] = sVar3;
      if ((EVar2 == 0) || ((int)sVar3 <= (int)(uint)_DAT_001ccc56)) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      (&B_dzkdmd)[uVar6] = bVar4;
      (&DAT_005b9ba6)[uVar6] = sVar1;
      if ((EVar2 == 0) || ((int)sVar3 <= (int)(uint)_DAT_001ccc58)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      (&DAT_005b8f20)[uVar6] = uVar5;
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 4);
    if (((int)(uint)_DAT_001ccc56 < (int)(short)(&DAT_005b9b96)[uVar6]) &&
       ((int)(uint)_DAT_001ccc58 < (int)(short)(&DAT_005b9b96)[uVar6])) {
      B_dzkprl = B_dzkprl;
    }
    _DAT_003fb82a = 0;
  }
  return;
}

