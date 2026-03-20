/*
 * Program: n42.bin
 * Function: FUN_0010b220
 * Entry: 0010b220
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0010b220(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  DAT_003fbd45 = '\0';
  if (*(byte *)(_DAT_003fbd48 + 2) == param_1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar2 = (uint)DAT_003fbd44;
    iVar3 = _DAT_003fbd3c;
    iVar4 = _DAT_003fbd48;
    if (uVar2 != 0) {
      do {
        if (uVar5 != 0) break;
        if ((param_1 == *(byte *)(iVar3 + uVar6)) ||
           (((uint)*(byte *)(iVar4 + 2) == (uint)*(byte *)(iVar3 + uVar6) &&
            (iVar1 = FUN_0010b1e0(param_1), iVar1 != 0)))) {
          uVar5 = 1;
          DAT_003fbd5e = (undefined)param_1;
          DAT_003fbd5d = *(undefined *)(_DAT_003fbd40 + uVar6);
          if (_DAT_003fbd50 != 0) {
            DAT_003fbd45 = *(char *)(_DAT_003fbd50 + param_1);
          }
          if (DAT_003fbd45 == '\0') {
            DAT_003fbd45 = '\x01';
          }
          DAT_003fbd5f = (undefined)param_2;
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while ((int)uVar6 < (int)uVar2);
    }
  }
  return uVar5 & 0xff;
}

