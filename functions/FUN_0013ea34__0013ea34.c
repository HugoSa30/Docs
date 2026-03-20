/*
 * Program: n42.bin
 * Function: FUN_0013ea34
 * Entry: 0013ea34
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013ea34(uint param_1,uint param_2,int *param_3,undefined4 param_4,undefined *param_5,
                 undefined4 *param_6)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  byte *unaff_r28;
  int *unaff_r29;
  uint unaff_r30;
  byte *unaff_r31;
  double dVar5;
  double in_f30;
  double in_f31;
  undefined2 param_11;
  undefined2 uStack00000012;
  ushort uStack00000014;
  ushort uStack00000016;
  
  while( true ) {
    func_0xff249d44(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar4 = 0;
    if (*unaff_r31 != 0) {
      do {
        iVar2 = uVar4 * 4;
        *(float *)(&stack0x00000018 + iVar2) =
             (float)((double)CONCAT44(unaff_r27,(uint)*(ushort *)((int)&stack0x00000010 + uVar4 * 2)
                                     ) - in_f30) * *(float *)(&stack0x00000064 + iVar2) -
             *(float *)(&stack0x00000074 + iVar2);
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < *unaff_r31);
    }
    dVar5 = (double)func_0xff249ca8(*unaff_r28,*unaff_r31,unaff_r25,&stack0x00000028,
                                    &stack0x00000018);
    dVar5 = dVar5 + in_f31;
    in_f31 = (double)(float)dVar5;
    unaff_r30 = unaff_r30 + 1 & 0xff;
    if (*unaff_r28 <= unaff_r30) break;
    param_11 = *(undefined2 *)(*unaff_r29 + unaff_r30 * 2);
    uStack00000012 = *(undefined2 *)(unaff_r29[1] + unaff_r30 * 2);
    uStack00000014 = (ushort)*(byte *)(unaff_r29[2] + unaff_r30);
    uStack00000016 = (ushort)*(byte *)(unaff_r29[3] + unaff_r30);
    param_1 = (uint)*unaff_r28;
    param_2 = (uint)*unaff_r31;
    param_5 = &stack0x00000028;
    param_6 = (undefined4 *)&stack0x00000010;
    param_3 = unaff_r29;
    param_4 = unaff_r26;
  }
  dVar5 = ((double)(float)dVar5 * _DAT_0001cb80) /
          (double)(float)((double)CONCAT44(unaff_r27,(uint)*unaff_r28) - in_f30);
  fVar1 = (float)dVar5;
  if (fVar1 <= _DAT_0001cb74) {
    if (_DAT_0001cb40 <= fVar1) {
      DAT_003fc25e = (byte)(int)dVar5;
    }
    else {
      DAT_003fc25e = 0;
    }
  }
  else {
    DAT_003fc25e = 0xff;
  }
  bVar3 = func_0xff2187cc(&DAT_001d14c8,nmot);
  DAT_003fc07a = bVar3 < DAT_003fc25e;
  return;
}

