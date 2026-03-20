/*
 * Program: n42.bin
 * Function: FUN_00117570
 * Entry: 00117570
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00117570(undefined4 param_1,byte **param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = *(short *)((int)param_2 + 6);
  if ((((sVar2 == 3) || (sVar2 == 2)) || (sVar2 == 5)) || (sVar2 == 7)) {
    bVar1 = **param_2;
    DAT_003fb274 = 0;
    if (bVar1 == 0x7a) {
      DAT_003fb274 = (DAT_003fbe95 & 1) << 2 | (DAT_003fbe94 & 1) << 1 | DAT_003fbe93 & 1;
    }
    if (0x8e < bVar1 - 0x11) {
      if (0x58 < bVar1 - 0xa1) {
        **param_2 = 0x12;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
                    /* WARNING: Could not emulate address calculation at 0x00117724 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((bVar1 - 0xa1) * 4 + 0xf17730))();
      return;
    }
    if ((*param_2)[1] != 1) {
      **param_2 = 0x12;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
    iVar3 = (uint)bVar1 * 8;
    if (*(char *)(iVar3 + 0xfea380) == '\x01') {
      **param_2 = bVar1;
      (*param_2)[1] = 1;
      (*param_2)[2] = **(byte **)(iVar3 + 0xfea384);
      *(undefined2 *)(param_2 + 2) = 3;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    if (*(char *)(iVar3 + 0xfea380) == '\x02') {
      **param_2 = bVar1;
      (*param_2)[1] = 1;
      (*param_2)[2] = **(byte **)(iVar3 + 0xfea384);
      (*param_2)[3] = *(byte *)(*(int *)(iVar3 + 0xfea384) + 1);
      *(undefined2 *)(param_2 + 2) = 4;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    **param_2 = 0x12;
  }
  else {
    **param_2 = 0x10;
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
                    /* WARNING: Read-only address (ram,0x003f9b6c) is written */
                    /* WARNING: Read-only address (ram,0x003f9b6d) is written */
                    /* WARNING: Read-only address (ram,0x003f9b6e) is written */
                    /* WARNING: Read-only address (ram,0x003fbe95) is written */
  return;
}

