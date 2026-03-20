/*
 * Program: n42.bin
 * Function: FUN_001e6f0c
 * Entry: 001e6f0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e6f0c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char cStack_121;
  char local_120 [128];
  undefined4 local_a0;
  char local_9c [144];
  
  *param_4 = 0x9e50c371;
  cVar2 = FUN_001e8da8(local_120,&local_a0,param_1,_DAT_00fe1778 >> 3,param_3,0xfe1774);
  if ((cVar2 != '\0') && ((_DAT_00fe1778 >> 3) - 0xb == local_a0)) {
    bVar1 = false;
    pcVar3 = (char *)((int)&local_a0 + 3);
    pcVar6 = (char *)(param_2 + -1);
    pcVar5 = &cStack_121;
    iVar4 = 0x75;
    do {
      pcVar6 = pcVar6 + 1;
      pcVar3 = pcVar3 + 1;
      *pcVar3 = *pcVar6;
      pcVar5 = pcVar5 + 1;
      if (*pcVar5 != *pcVar6) {
        bVar1 = true;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (!bVar1) {
      *param_4 = 0x61af3c8e;
    }
  }
  return;
}

