/*
 * Program: n42.bin
 * Function: FUN_0013e92c
 * Entry: 0013e92c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013e92c(void)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ushort local_d0 [4];
  float local_c8 [4];
  undefined auStack_b8 [60];
  float local_7c [4];
  float local_6c [5];
  undefined4 local_58;
  uint uStack_54;
  
  local_7c[0] = _DAT_003f9b48;
  local_7c[1] = (float)_DAT_003f9b4c;
  local_7c[2] = (float)_DAT_003f9b50;
  local_7c[3] = (float)_DAT_003f9b54;
  local_6c[0] = _DAT_003f9b58;
  local_6c[1] = (float)_DAT_003f9b5c;
  local_6c[2] = (float)_DAT_003f9b60;
  local_6c[3] = (float)_DAT_003f9b64;
  dVar7 = (double)_DAT_0001cb40;
  uVar4 = 0;
  dVar6 = (double)_DAT_0001cb4c;
  if (DAT_001d14a5 != 0) {
    do {
      local_d0[0] = *(ushort *)(_DAT_003fb118 + uVar4 * 2);
      local_d0[1] = *(undefined2 *)(_DAT_003fb11c + uVar4 * 2);
      local_d0[2] = (ushort)*(byte *)(_DAT_003fb120 + uVar4);
      local_d0[3] = (ushort)*(byte *)(_DAT_003fb124 + uVar4);
      func_0xff249d44(DAT_001d14a5,DAT_001d14a4,&DAT_003fb118,&DAT_003fb128,auStack_b8,local_d0);
      uVar3 = 0;
      if (DAT_001d14a4 != 0) {
        do {
          local_58 = 0x43300000;
          uStack_54 = (uint)local_d0[uVar3];
          local_c8[uVar3] =
               (float)((double)CONCAT44(0x43300000,(uint)local_d0[uVar3]) - dVar6) * local_7c[uVar3]
               - local_6c[uVar3];
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < DAT_001d14a4);
      }
      dVar5 = (double)func_0xff249ca8(DAT_001d14a5,DAT_001d14a4,&DAT_003fb138,auStack_b8,local_c8);
      dVar7 = (double)(float)(dVar5 + dVar7);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < DAT_001d14a5);
  }
  local_58 = 0x43300000;
  uStack_54 = (uint)DAT_001d14a5;
  dVar6 = ((double)(float)dVar7 * _DAT_0001cb80) /
          (double)(float)((double)CONCAT44(0x43300000,uStack_54) - dVar6);
  fVar1 = (float)dVar6;
  if (fVar1 <= _DAT_0001cb74) {
    if (_DAT_0001cb40 <= fVar1) {
      DAT_003fc25e = (byte)(int)dVar6;
    }
    else {
      DAT_003fc25e = 0;
    }
  }
  else {
    DAT_003fc25e = 0xff;
  }
  bVar2 = func_0xff2187cc(&DAT_001d14c8,nmot);
  DAT_003fc07a = bVar2 < DAT_003fc25e;
  return;
}

