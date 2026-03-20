/*
 * Program: n42.bin
 * Function: FUN_001a59b8
 * Entry: 001a59b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a59b8(void)

{
  int iVar1;
  
  iVar1 = FUN_001a4d74(DAT_005baa08);
  if (iVar1 == 7) {
    if ((DAT_005baa0c != '\0') && (**(char **)*_DAT_003fbd84 == 'P')) {
      FUN_001a5484();
    }
    DAT_003fbda6 = DAT_005ba9f4;
    _DAT_003fbda0 = *(undefined4 *)*_DAT_003fbd84;
    _DAT_003fbda4 =
         FUN_0010fdb0(*(undefined *)(*(int *)(DAT_005ba9f0 + 0x18) + (uint)DAT_005baa08 * 0xc + 1));
    DAT_003fbda7 = 1;
    _DAT_003fbd84 = (undefined4 *)&DAT_003fbd9c;
    DAT_003fbd88 = 1;
    DAT_005baa04 = 0xfa5a90;
  }
  return;
}

