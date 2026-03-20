/*
 * Program: n42.bin
 * Function: FUN_0012052c
 * Entry: 0012052c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0012052c(undefined4 param_1,byte **param_2)

{
  char cVar1;
  byte *pbVar2;
  
  if (*(short *)((int)param_2 + 6) != 2) {
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined *)((int)param_2 + 10) = 3;
    return;
  }
  (*param_2)[2] = 0;
  (*param_2)[3] = 0;
  (*param_2)[4] = 0;
  (*param_2)[5] = 0;
  pbVar2 = *param_2;
  if (*pbVar2 != 0) {
    if (pbVar2[1] != 0) {
      *(undefined2 *)(param_2 + 2) = 0;
      *(undefined *)((int)param_2 + 10) = 3;
      return;
    }
    DAT_003fb227 = DAT_003fb227 & 0xfc;
    cVar1 = func_0xff250a2c(ffzdfp,&DAT_003fb228);
    if (cVar1 == '\0') {
      if (B_xff != '\x01') {
        *(undefined2 *)(param_2 + 2) = 0;
        *(undefined *)((int)param_2 + 10) = 3;
        return;
      }
      DAT_003fb227 = DAT_003fb227 | 2;
    }
    else {
      DAT_003fb227 = DAT_003fb227 | 1;
    }
    if (0xd < **param_2) {
      *(undefined2 *)(param_2 + 2) = 0;
      *(undefined *)((int)param_2 + 10) = 3;
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x001206c8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)**param_2 * 4 + 0xf206d4))();
    return;
  }
  if (pbVar2[1] == 0) {
    if (B_xff == '\0') {
      cVar1 = func_0xff250a2c(ffzdfp,&DAT_003fb228);
      if (cVar1 == '\0') goto LAB_001205fc;
      (*param_2)[2] = 0x7f;
    }
    else {
      pbVar2[2] = 0x3f;
    }
    (*param_2)[3] = 0x98;
    (*param_2)[4] = 0;
    (*param_2)[5] = 0;
  }
LAB_001205fc:
  *(undefined2 *)(param_2 + 2) = 6;
  *(undefined *)((int)param_2 + 10) = 1;
  return;
}

