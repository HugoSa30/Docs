/*
 * Program: n42.bin
 * Function: FUN_001e8da8
 * Entry: 001e8da8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4
FUN_001e8da8(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,int *param_5,
            int param_6)

{
  uint uVar1;
  char cVar3;
  uint uVar2;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char local_a8 [128];
  uint local_28 [5];
  
  uVar6 = 0;
  uVar1 = *(int *)(param_6 + 4) + 7U >> 3;
  iVar5 = *param_5;
  *param_5 = iVar5 + 1;
  if (param_4 <= uVar1) {
    *param_5 = iVar5 + 2;
    cVar3 = FUN_001e8c70(local_a8,local_28,param_3,param_4,param_5);
    if (cVar3 != '\0') {
      iVar5 = *param_5;
      *param_5 = iVar5 + 1;
      if (((local_28[0] == uVar1) && (*param_5 = iVar5 + 2, local_a8[0] == '\0')) &&
         (local_a8[1] == '\x01')) {
        *param_5 = iVar5 + 3;
        uVar2 = 2;
        if ((2 < uVar1 - 1) && (local_a8[2] == -1)) {
          pcVar4 = local_a8 + 2;
          do {
            uVar2 = uVar2 + 1;
            if (uVar1 - 1 <= uVar2) break;
            pcVar4 = pcVar4 + 1;
          } while (*pcVar4 == -1);
        }
        if (local_a8[uVar2] == '\0') {
          *param_5 = iVar5 + 4;
          iVar5 = uVar1 - (uVar2 + 1);
          *param_2 = iVar5;
          if (iVar5 + 0xbU <= uVar1) {
            *param_5 = *param_5 + 1;
            FUN_001e8f28(param_1,local_a8 + uVar2 + 1,*param_2);
            FUN_001e8f08(local_a8,0,0x80);
            uVar6 = 1;
          }
        }
      }
    }
  }
  return uVar6;
}

