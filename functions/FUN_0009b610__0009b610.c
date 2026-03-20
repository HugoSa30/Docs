/*
 * Program: n42.bin
 * Function: FUN_0009b610
 * Entry: 0009b610
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009b610(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar2;
  uint *puVar1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar4 = param_1[0xb];
    puVar1 = param_1 + 0xb;
    _DAT_003fa128 = param_1 + 9;
    uVar3 = *param_1;
    *param_1 = *param_1 & 0xffff9fff;
    *param_1 = *param_1 | (uVar3 >> 0xd & 3 | 1) << 0xd;
    cVar2 = (*(code *)&SUB_00fac610)();
    if (cVar2 != '\0') {
      _DAT_003fa128 = (uint *)(*(code *)&SUB_00fac6dc)();
      puVar1 = (uint *)(*(code *)&SUB_00fac6cc)();
      uVar4 = *puVar1;
      *param_1 = *param_1 & 0xffff9fff;
      *param_1 = *param_1;
    }
    if ((param_2 & 0xff) != 0) {
      cVar2 = (*(code *)&SUB_00fac610)();
      if (cVar2 == '\0') {
        uVar4 = uVar4 & 0xffffff00 | param_3 & 0xff;
      }
      else if ((param_3 & 0xff) == 0) {
        uVar4 = uVar4 & 0xfffffffe;
      }
      else {
        uVar4 = uVar4 | 1;
      }
    }
    if ((param_2 >> 8 & 0xff) != 0) {
      iVar5 = 0xd;
      cVar2 = (*(code *)&SUB_00fac610)();
      if (cVar2 != '\0') {
        iVar5 = 1;
      }
      if ((param_3 >> 8 & 0xff) == 0) {
        uVar4 = uVar4 & ~(1 << iVar5);
      }
      else {
        uVar4 = uVar4 | 1 << iVar5;
      }
    }
    if ((param_2 >> 0x10 & 0xff) != 0) {
      iVar5 = 0xe;
      cVar2 = (*(code *)&SUB_00fac610)();
      if (cVar2 != '\0') {
        iVar5 = 2;
      }
      if ((param_3 >> 0x10 & 0xff) == 0) {
        uVar4 = uVar4 & ~(1 << iVar5);
      }
      else {
        uVar4 = uVar4 | 1 << iVar5;
      }
    }
    if (param_2 >> 0x18 != 0) {
      iVar5 = 0xf;
      cVar2 = (*(code *)&SUB_00fac610)();
      if (cVar2 != '\0') {
        iVar5 = 3;
      }
      if (param_3 >> 0x18 == 0) {
        uVar4 = uVar4 & ~(1 << iVar5);
      }
      else {
        uVar4 = uVar4 | 1 << iVar5;
      }
    }
    *puVar1 = uVar4;
    param_1[9] = param_4 & param_2 & param_3;
    *_DAT_003fa128 = param_4 & param_2 & param_3;
  }
  return 0;
}

