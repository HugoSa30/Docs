/*
 * Program: n42.bin
 * Function: FUN_000fb3a0
 * Entry: 000fb3a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fb3a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(*(int *)(_DAT_003fbcbc + 0x6c) + param_1 * 4) == -1) {
    FUN_000fba18(5,param_1);
    uVar3 = 5;
  }
  else {
    puVar2 = _DAT_003fbcb8 + 1;
    *_DAT_003fbcb8 = _DAT_002fc014;
    _DAT_003fbcb8 = puVar2;
    iVar1 = _DAT_003fbcbc;
    iVar4 = *(int *)(_DAT_003fbcbc + 0x24);
    iVar5 = *(int *)(*(int *)(_DAT_003fbcbc + 0x68) + iVar4 * 4);
    if (iVar4 != iVar5) {
      do {
        iVar6 = iVar5;
        if (iVar6 == param_1) {
          *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x68) + iVar4 * 4) =
               *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x68) + iVar6 * 4);
          *(undefined4 *)(*(int *)(iVar1 + 0x6c) + iVar6 * 4) = 0xffffffff;
          DAT_003fbcad = DAT_003fbcad + -1;
          break;
        }
        iVar5 = *(int *)(*(int *)(_DAT_003fbcbc + 0x68) + iVar6 * 4);
        iVar4 = iVar6;
      } while (*(int *)(_DAT_003fbcbc + 0x24) != iVar5);
    }
    _DAT_002fc014 = _DAT_003fbcb8[-1];
    _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
    uVar3 = 0;
  }
  return uVar3;
}

