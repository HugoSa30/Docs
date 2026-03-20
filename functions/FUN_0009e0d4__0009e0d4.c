/*
 * Program: n42.bin
 * Function: FUN_0009e0d4
 * Entry: 0009e0d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009e0d4(int param_1,uint param_2,undefined2 *param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  ushort uVar6;
  short local_20 [2];
  
  if (param_2 < *(uint *)(param_4 + 4)) {
    uVar1 = 0;
  }
  else {
    uVar6 = *(ushort *)(param_1 * 4 + 0xec00);
    if (*(uint *)(param_4 + 0xc) < param_2 + 8 + (uint)(uVar6 >> 1) * 2) {
      uVar1 = 0;
    }
    else {
      iVar5 = param_2 + 2;
      local_20[0] = (ushort)*(byte *)(param_1 * 4 + 0xec03) + (short)(((int)(uint)uVar6 >> 5) << 8);
      psVar3 = local_20;
      sVar4 = 0;
      do {
        cVar2 = FUN_000b126c(iVar5,*psVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        iVar5 = iVar5 + 2;
        psVar3 = psVar3 + 1;
        sVar4 = sVar4 + 1;
      } while (sVar4 == 0);
      iVar5 = param_2 + 8;
      if (param_3 == (undefined2 *)0x0) {
        for (uVar6 = *(ushort *)(param_1 * 4 + 0xec00) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
          cVar2 = FUN_000b126c(iVar5,0);
          if (cVar2 == '\0') {
            return 0;
          }
          iVar5 = iVar5 + 2;
        }
      }
      else {
        for (uVar6 = *(ushort *)(param_1 * 4 + 0xec00) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
          cVar2 = FUN_000b126c(iVar5,*param_3);
          if (cVar2 == '\0') {
            return 0;
          }
          iVar5 = iVar5 + 2;
          param_3 = param_3 + 1;
        }
      }
      iVar5 = param_2 + 6;
      local_20[1] = FUN_0009d6e4(param_1,param_2 + 8);
      psVar3 = local_20;
      sVar4 = 0;
      do {
        psVar3 = psVar3 + 1;
        cVar2 = FUN_000b126c(iVar5,*psVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        iVar5 = iVar5 + 2;
        sVar4 = sVar4 + 1;
      } while (sVar4 == 0);
      iVar5 = param_2 + 4;
      local_20[0] = (short)param_1 + ~(*(short *)(param_2 + 2) + *(short *)(param_2 + 6));
      psVar3 = local_20;
      sVar4 = 0;
      do {
        cVar2 = FUN_000b126c(iVar5,*psVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        iVar5 = iVar5 + 2;
        psVar3 = psVar3 + 1;
        sVar4 = sVar4 + 1;
      } while (sVar4 == 0);
      uVar1 = 1;
    }
  }
  return uVar1;
}

