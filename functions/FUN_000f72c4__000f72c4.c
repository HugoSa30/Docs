/*
 * Program: n42.bin
 * Function: FUN_000f72c4
 * Entry: 000f72c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f72c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar2;
  int iVar1;
  ushort uVar3;
  
  uVar3 = *(short *)(param_1 + 0x4a) - *(short *)(param_1 + 0x48);
  if ((short)uVar3 < 0) {
    uVar3 = uVar3 + 0x78;
  }
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x4a);
  (*(code *)&SUB_0006a0f4)(uVar3 & 0xff,DAT_003fc5ad);
  cVar2 = (*(code *)&SUB_0006a138)
                    (param_2,*(undefined2 *)(param_1 + 0x4a),*(undefined *)(param_1 + 99));
  if (cVar2 < '\0') {
    if (((cVar2 == -1) && (_DAT_003fc3e0 != (code **)0x0)) && (*_DAT_003fc3e0 != (code *)0x0)) {
      (**_DAT_003fc3e0)(4,0x36,param_3);
    }
    iVar1 = -1;
  }
  else {
    iVar1 = (int)cVar2;
  }
  return iVar1;
}

