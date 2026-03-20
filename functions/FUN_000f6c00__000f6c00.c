/*
 * Program: n42.bin
 * Function: FUN_000f6c00
 * Entry: 000f6c00
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_000f6c00(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  
  bVar1 = ((int)(uint)*(ushort *)(*param_1 + 0x20) >> (*(byte *)(param_1 + 2) & 0x3f) & 1U) != 0;
  if (bVar1) {
    DAT_003fc5bd = 1;
    *(ushort *)(*param_1 + 0x20) = ~(ushort)(1 << (*(byte *)(param_1 + 2) & 0x3f));
    *(undefined *)(param_2 + 0x61) = 1;
    uVar2 = (uint)(*(ushort *)param_1[1] >> 0xf);
    (**(code **)(param_2 + 0x2c))(param_2,param_3);
    uVar3 = (**(code **)(param_2 + 0x30))(param_1);
    *(undefined2 *)(param_2 + 0x4a) = uVar3;
    cVar4 = (**(code **)(param_2 + 0x34))(param_2,uVar2,param_3);
    *(char *)(param_2 + 0x6b) = cVar4;
    iVar5 = param_2 + uVar2 * 4;
    (**(code **)(iVar5 + 0x40))(param_1,param_2,uVar2,param_3,(int)cVar4);
    (**(code **)(iVar5 + 0x38))(param_1,param_2,uVar2,param_3,(int)cVar4);
    DAT_003fc5bd = 0;
  }
  return bVar1;
}

