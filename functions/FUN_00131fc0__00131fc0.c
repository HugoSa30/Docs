/*
 * Program: n42.bin
 * Function: FUN_00131fc0
 * Entry: 00131fc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00131fc0(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = func_0xff2189bc(0x1cb746,tmot);
  uVar2 = 0;
  do {
    iVar4 = uVar2 * 0x78;
    **(undefined2 **)(iVar4 + 0x1f84c) = uVar1;
    **(undefined2 **)(iVar4 + 0x1f838) = *(undefined2 *)(&SPRZG_AN + uVar2 * 2);
    **(byte **)(iVar4 + 0x1f830) = **(byte **)(iVar4 + 0x1f830) & 0x10;
    if (B_pwf != '\0') {
      **(undefined2 **)(iVar4 + 0x1f810) = **(undefined2 **)(iVar4 + 0x1f814);
      uVar3 = 0;
      do {
        *(undefined *)(*(int *)(iVar4 + 0x1f818) + uVar3) = 0;
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 4);
      **(byte **)(iVar4 + 0x1f830) = **(byte **)(iVar4 + 0x1f830) | 0x10;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 2);
  return;
}

