/*
 * Program: n42.bin
 * Function: FUN_000a5b14
 * Entry: 000a5b14
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a5b14(undefined4 param_1,undefined param_2,uint param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  byte bVar1;
  uint uVar2;
  uint unaff_r31;
  undefined4 local_28;
  uint local_24 [4];
  
  if (param_6 == 0xff) {
    unaff_r31 = 7;
    if (0xbf < (int)param_3) {
      do {
        unaff_r31 = unaff_r31 + 1;
      } while ((1 << (unaff_r31 & 0x3f)) + (1 << ((unaff_r31 & 0xff) - 1 & 0x3f)) + -1 <
               (int)param_3);
    }
  }
  else {
    FUN_000a615c(param_2,param_6);
  }
  if ((unaff_r31 & 0xff) < 0xb) {
    uVar2 = unaff_r31 & 0xff;
    if ((uVar2 == 7) || (uVar2 == 8)) {
      param_3 = 0x7f;
      unaff_r31 = 0xf;
    }
    else if ((uVar2 == 9) || (uVar2 == 10)) {
      param_3 = 0x1ff;
      unaff_r31 = 0xe;
    }
  }
  else {
    param_3 = (1 << (unaff_r31 & 0x3f)) + 0xffffU & 0xffff;
    unaff_r31 = 0x18 - unaff_r31;
  }
  uVar2 = (int)(param_4 * param_3) / 10000;
  local_28._2_2_ = (ushort)uVar2;
  if ((uVar2 & 0xffff) == param_3) {
    local_28._2_2_ = 0xffff;
  }
  local_28 = (uint)local_28._2_2_;
  bVar1 = FUN_000a6204(param_2);
  if (bVar1 < 8) {
    FUN_000a5dd8(param_2,0);
    local_24[0] = local_28;
    FUN_000a612c(param_2,unaff_r31 & 0xff,local_24);
    FUN_000a5dd8(param_2,param_5);
    FUN_000a5d64(param_2);
  }
  else {
    local_24[0] = local_28;
    FUN_000a612c(param_2,unaff_r31 & 0xff,local_24);
  }
  return;
}

