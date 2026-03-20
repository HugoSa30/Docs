/*
 * Program: n42.bin
 * Function: FUN_000d9d44
 * Entry: 000d9d44
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9d44(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = (double)_DAT_0001cb40;
  uVar3 = 0;
  if (0 < param_1) {
    dVar5 = (double)_DAT_0001cb44;
    dVar6 = (double)_DAT_0001cb40;
    do {
      uVar2 = 0;
      dVar4 = dVar6;
      if (0 < param_2) {
        do {
          fVar1 = (float)((double)CONCAT44(0x43300000,
                                           (uint)*(ushort *)(param_6 + uVar2 * 2) -
                                           (uint)*(ushort *)
                                                  (*(int *)(param_3 + uVar2 * 4) + uVar3 * 2) ^
                                           0x80000000) - (double)_DAT_0001cb48) /
                  (float)((double)CONCAT44(0x43300000,
                                           (uint)*(ushort *)
                                                  (*(int *)(param_4 + uVar2 * 4) + uVar3 * 2)) -
                         (double)_DAT_0001cb4c);
          while( true ) {
            dVar4 = (double)(float)((double)fVar1 * (double)fVar1 + dVar4);
            uVar2 = uVar2 + 1 & 0xff;
            if (param_2 <= (int)uVar2) goto LAB_000d9e9c;
            if (uVar2 < 2) break;
            fVar1 = (float)((double)CONCAT44(0x43300000,
                                             (uint)*(ushort *)(param_6 + uVar2 * 2) -
                                             (uint)*(byte *)(*(int *)(param_3 + uVar2 * 4) + uVar3)
                                             ^ 0x80000000) - (double)_DAT_0001cb48) /
                    (float)((double)CONCAT44(0x43300000,
                                             (uint)*(byte *)(*(int *)(param_4 + uVar2 * 4) + uVar3))
                           - (double)_DAT_0001cb4c);
          }
        } while( true );
      }
LAB_000d9e9c:
      dVar4 = (double)FUN_000a8740((double)-(float)((double)(float)dVar4 * dVar5),&DAT_001c2838);
      *(float *)(param_5 + uVar3 * 4) = (float)dVar4;
      dVar7 = (double)(float)(dVar7 + dVar4);
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < param_1);
  }
  if (((float)dVar7 != _DAT_0001cb40) && (uVar3 = 0, 0 < param_1)) {
    do {
      *(float *)(param_5 + uVar3 * 4) = (float)((double)*(float *)(param_5 + uVar3 * 4) / dVar7);
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < param_1);
  }
  return;
}

