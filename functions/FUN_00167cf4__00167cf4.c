/*
 * Program: n42.bin
 * Function: FUN_00167cf4
 * Entry: 00167cf4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00167cf4(void)

{
  ushort uVar1;
  uint uVar2;
  ushort local_48;
  ushort local_44 [2];
  ushort local_40;
  ushort local_3c [2];
  ushort *local_38;
  ushort local_34 [2];
  uint local_30;
  ushort *local_2c;
  ushort local_28 [2];
  ushort *local_24;
  
  uVar1 = _B_npels;
  if (DAT_001c1d7b == '\0') {
    local_48 = _B_npels & 0xd0fc | 0x2002;
    local_44[0] = local_48;
    local_38 = local_44;
    local_3c[0] = local_48;
    func_0xff222958(0x47,local_3c);
    return;
  }
  if (B_desee == '\0') {
    return;
  }
  if (B_ebl == '\0') {
LAB_00167df0:
    if (((byte)DAT_005bb788 & 8) != 0) {
      DAT_005bb788._3_1_ = (byte)DAT_005bb788 & 0xf7 | 4;
      B_calcelse = 0;
      DAT_005bb788._2_1_ = 0;
    }
  }
  else if (((byte)DAT_005bb788 & 8) == 0) {
    DAT_005bb788._3_1_ = (byte)DAT_005bb788 & 0xfb | 8;
  }
  else if (B_ebl == '\0') goto LAB_00167df0;
  if (((byte)DAT_005bb788 & 4) == 0) {
    if ((DAT_005bb788._2_1_ == 0) || (DAT_001c1d7c <= DAT_005bb788._2_1_)) {
      B_calcelse = B_calcelse;
    }
    else {
      DAT_005bb788._2_1_ = DAT_005bb788._2_1_ + 1;
      DAT_003fab3c = 0;
      DAT_003fab3d = 0;
      DAT_003fab3e = 0;
      if (DAT_001c1d7b != '\0') {
        FUN_001aa708(0xb);
      }
    }
  }
  else if (DAT_005bb788._2_1_ < DAT_001c1d7c) {
    DAT_005bb788._2_1_ = DAT_005bb788._2_1_ + 1;
    DAT_003fab3c = 0;
    DAT_003fab3d = 0;
    DAT_003fab3e = 0;
    if (DAT_001c1d7b != '\0') {
      FUN_001aa708(0xb);
    }
  }
  else {
    B_calcelse = B_calcelse;
  }
  if (B_calcelse == 0) {
    return;
  }
  local_44[0] = uVar1;
  local_2c = local_44;
  local_34[0] = uVar1;
  uVar2 = FUN_00125cc0(&DAT_003fab3c,local_34,0xb,2,10);
  local_30._0_2_ = (ushort)(uVar2 >> 0x10);
  local_40 = local_30._0_2_;
  if ((DAT_003fdef1 >> 1 & 1) == 0) {
    if (B_ebl == '\0') {
      DAT_005bb788._0_1_ = 0;
      if (DAT_005bb788._1_1_ < 5) {
        DAT_005bb788._1_1_ = DAT_005bb788._1_1_ + 1;
      }
      else {
        DAT_005bb788._3_1_ = (byte)DAT_005bb788 | 2;
      }
    }
    else {
      DAT_005bb788._1_1_ = 0;
      if (DAT_005bb788._0_1_ < 5) {
        DAT_005bb788._0_1_ = DAT_005bb788._0_1_ + 1;
      }
      else {
        DAT_005bb788._3_1_ = (byte)DAT_005bb788 | 1;
      }
    }
    if ((((byte)DAT_005bb788 & 1) != 0) && (((byte)DAT_005bb788 & 2) != 0)) goto LAB_0016801c;
  }
  if (((_B_npels & 1) == 0) && ((uVar2 & 0x10000) == 0)) {
    return;
  }
LAB_0016801c:
  local_44[0] = local_30._0_2_;
  local_24 = local_44;
  local_28[0] = local_30._0_2_;
  local_30 = uVar2;
  func_0xff222958(0x47,local_28);
                    /* WARNING: Read-only address (ram,0x003fdef0) is written */
  return;
}

