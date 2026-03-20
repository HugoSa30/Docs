/*
 * Program: n42.bin
 * Function: FUN_00177554
 * Entry: 00177554
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00177554(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ushort local_80;
  ushort local_7e;
  ushort local_7c;
  ushort local_7a;
  byte local_78 [4];
  ushort local_74 [2];
  ushort local_70 [2];
  ushort *local_6c;
  ushort local_68 [2];
  ushort *local_64;
  ushort local_60 [2];
  ushort *local_5c;
  ushort local_58 [2];
  ushort *local_54;
  ushort local_50 [2];
  ushort *local_4c;
  ushort local_48 [2];
  ushort *local_44;
  ushort local_40 [2];
  ushort *local_3c;
  ushort local_38 [2];
  ushort *local_34;
  
  uVar6 = 0;
  do {
    local_78[uVar6] = 0;
    (&DAT_005b89a4)[uVar6] = 1;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  uVar6 = 0;
  do {
    (&rkrn_w)[uVar6] =
         (ushort)(byte)(&DAT_005b9154)[uVar6] << (6 - (byte)(&DAT_005b9160)[uVar6] & 0x3f);
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  if (((((B_nopg >> 1 & 1) != 0) && ((DAT_003fdf39 & 1) == 0)) && ((DAT_003fdf3b & 1) == 0)) &&
     ((((DAT_003fdf3d & 1) == 0 && (B_tmkr != '\0')) && ((B_krldy == '\0' && (B_krndy == '\0'))))))
  {
    if (DAT_001c7f28 < nmot) {
      if (DAT_001d149c == '\0') {
        DAT_005b89a4 = 0;
      }
      if (DAT_001d149d == '\0') {
        DAT_005b89a5 = 0;
      }
      if (DAT_001d149e == '\0') {
        DAT_005b89a6 = 0;
      }
      if (DAT_001d149f == '\0') {
        DAT_005b89a7 = 0;
      }
      uVar6 = 0;
      do {
        (&DAT_003fb110)[uVar6] = 0;
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 4);
      uVar6 = 0;
      do {
        uVar4 = func_0xff2189bc(&DAT_001c7ea4,nmot);
        if (uVar4 < (&rkrn_w)[uVar6]) {
          (&DAT_003fb110)[(byte)(&SENZZYL)[uVar6]] = 1;
        }
        uVar3 = _DAT_003fdf44;
        uVar2 = _DAT_003fdf42;
        uVar1 = _DAT_003fdf40;
        uVar4 = _DAT_003fdf3e;
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 4);
      local_80 = _DAT_003fdf3e;
      local_7e = _DAT_003fdf40;
      local_7c = _DAT_003fdf42;
      local_7a = _DAT_003fdf44;
      local_80._0_1_ = (byte)(_DAT_003fdf3e >> 8);
      uVar6 = ((uint)(byte)(((local_80._0_1_ & 0xf) == 1) << 1) << 8) >> 9;
      local_78[0] = (byte)uVar6;
      local_7e._0_1_ = (byte)(_DAT_003fdf40 >> 8);
      local_78[1] = (byte)(((uint)(byte)(((local_7e._0_1_ & 0xf) == 1) << 1) << 8) >> 9);
      local_7c._0_1_ = (byte)(_DAT_003fdf42 >> 8);
      local_78[2] = (byte)(((uint)(byte)(((local_7c._0_1_ & 0xf) == 1) << 1) << 8) >> 9);
      local_7a._0_1_ = (byte)(_DAT_003fdf44 >> 8);
      local_78[3] = (byte)(((uint)(byte)(((local_7a._0_1_ & 0xf) == 1) << 1) << 8) >> 9);
      uVar7 = 0;
      do {
        if ((&DAT_005b89a4)[uVar7] == '\0') {
          local_78[uVar7] = 0;
          (&DAT_003fb10c)[uVar7] = 1;
        }
        else if ((&DAT_003fb110)[uVar7] == local_78[uVar7]) {
          (&xzsen)[uVar7] = KRFHKS;
        }
        else {
          (&xzsen)[uVar7] = (&xzsen)[uVar7] - 1;
          if ((&xzsen)[uVar7] == 0) {
            (&xzsen)[uVar7] = KRFHKS;
            if ((&DAT_003fb110)[uVar7] == 0) {
              local_78[uVar7] = 0;
            }
            else {
              local_78[uVar7] = 1;
            }
            (&DAT_003fb10c)[uVar7] = 1;
            (&xzkrzs)[uVar7] = 0;
          }
        }
        if (((&DAT_003fb10c)[uVar7] == '\0') &&
           ((&xzkrzs)[uVar7] = (&xzkrzs)[uVar7] - 1, (&xzkrzs)[uVar7] == 0)) {
          (&DAT_003fb10c)[uVar7] = 1;
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < 4);
      local_80 = uVar4;
      if (uVar6 != local_78[0]) {
        if (local_78[0] == 0) {
          local_80 = uVar4 & 0xf0fe;
        }
        else {
          local_80 = uVar4 & 0xf0fe | 0x101;
        }
      }
      if (DAT_003fb10c != '\0') {
        local_80 = local_80 & 0xdffd | 0x2002;
      }
      local_74[0] = local_80;
      local_6c = local_74;
      local_70[0] = local_80;
      func_0xff222958(0x6e,local_70);
      bVar5 = local_7e._0_1_ & 0xf;
      local_7e = uVar1;
      if (((uint)(byte)((bVar5 == 1) << 1) << 8) >> 9 != (uint)local_78[1]) {
        if (local_78[1] == 0) {
          local_7e = uVar1 & 0xf0fe;
        }
        else {
          local_7e = uVar1 & 0xf0fe | 0x101;
        }
      }
      if (DAT_003fb10d != '\0') {
        local_7e = local_7e & 0xdffd | 0x2002;
      }
      local_74[0] = local_7e;
      local_64 = local_74;
      local_68[0] = local_7e;
      func_0xff222958(0x6f,local_68);
      bVar5 = local_7c._0_1_ & 0xf;
      local_7c = uVar2;
      if (((uint)(byte)((bVar5 == 1) << 1) << 8) >> 9 != (uint)local_78[2]) {
        if (local_78[2] == 0) {
          local_7c = uVar2 & 0xf0fe;
        }
        else {
          local_7c = uVar2 & 0xf0fe | 0x101;
        }
      }
      if (DAT_003fb10e != '\0') {
        local_7c = local_7c & 0xdffd | 0x2002;
      }
      local_74[0] = local_7c;
      local_5c = local_74;
      local_60[0] = local_7c;
      func_0xff222958(0x70,local_60);
      bVar5 = local_7a._0_1_ & 0xf;
      local_7a = uVar3;
      if (((uint)(byte)((bVar5 == 1) << 1) << 8) >> 9 != (uint)local_78[3]) {
        if (local_78[3] == 0) {
          local_7a = uVar3 & 0xf0fe;
        }
        else {
          local_7a = uVar3 & 0xf0fe | 0x101;
        }
      }
      if (DAT_003fb10f != '\0') {
        local_7a = local_7a & 0xdffd | 0x2002;
      }
      local_74[0] = local_7a;
      local_54 = local_74;
      local_58[0] = local_7a;
      func_0xff222958(0x71,local_58);
    }
    if (DAT_001c7f29 < nmot) {
      if (DAT_001d149c == '\0') {
        DAT_005b89a4 = 0;
      }
      if (DAT_001d149d == '\0') {
        DAT_005b89a5 = 0;
      }
      if (DAT_001d149e == '\0') {
        DAT_005b89a6 = 0;
      }
      if (DAT_001d149f == '\0') {
        DAT_005b89a7 = 0;
      }
      uVar6 = 0;
      do {
        (&DAT_003fb110)[uVar6] = 0;
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 4);
      uVar6 = 0;
      do {
        uVar4 = func_0xff2189bc(0x1c7ee6,nmot);
        if ((&rkrn_w)[uVar6] < uVar4) {
          (&DAT_003fb110)[(byte)(&SENZZYL)[uVar6]] = 1;
        }
        uVar3 = _DAT_003fdf44;
        uVar2 = _DAT_003fdf42;
        uVar1 = _DAT_003fdf40;
        uVar4 = _DAT_003fdf3e;
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 4);
      local_80 = _DAT_003fdf3e;
      local_7e = _DAT_003fdf40;
      local_7c = _DAT_003fdf42;
      local_7a = _DAT_003fdf44;
      local_80._0_1_ = (byte)(_DAT_003fdf3e >> 8);
      uVar6 = ((uint)(byte)(((local_80._0_1_ & 0xf) == 2) << 1) << 8) >> 9;
      local_78[0] = (byte)uVar6;
      local_7e._0_1_ = (byte)(_DAT_003fdf40 >> 8);
      local_78[1] = (byte)(((uint)(byte)(((local_7e._0_1_ & 0xf) == 2) << 1) << 8) >> 9);
      local_7c._0_1_ = (byte)(_DAT_003fdf42 >> 8);
      local_78[2] = (byte)(((uint)(byte)(((local_7c._0_1_ & 0xf) == 2) << 1) << 8) >> 9);
      local_7a._0_1_ = (byte)(_DAT_003fdf44 >> 8);
      local_78[3] = (byte)(((uint)(byte)(((local_7a._0_1_ & 0xf) == 2) << 1) << 8) >> 9);
      uVar7 = 0;
      do {
        if ((&DAT_005b89a4)[uVar7] == '\0') {
          local_78[uVar7] = 0;
          (&DAT_003fb10c)[uVar7] = 1;
        }
        else if ((&DAT_003fb110)[uVar7] == local_78[uVar7]) {
          (&xzsen2)[uVar7] = KRFHKS;
        }
        else {
          (&xzsen2)[uVar7] = (&xzsen2)[uVar7] - 1;
          if ((&xzsen2)[uVar7] == 0) {
            (&xzsen2)[uVar7] = KRFHKS;
            if ((&DAT_003fb110)[uVar7] == 0) {
              local_78[uVar7] = 0;
            }
            else {
              local_78[uVar7] = 1;
            }
            (&DAT_003fb10c)[uVar7] = 1;
            (&xzkrzs2)[uVar7] = 0;
          }
        }
        if (((&DAT_003fb10c)[uVar7] == '\0') &&
           ((&xzkrzs2)[uVar7] = (&xzkrzs2)[uVar7] - 1, (&xzkrzs2)[uVar7] == 0)) {
          (&DAT_003fb10c)[uVar7] = 1;
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < 4);
      local_80 = uVar4;
      if (uVar6 != local_78[0]) {
        if (local_78[0] == 0) {
          local_80 = uVar4 & 0xf0fe;
        }
        else {
          local_80 = uVar4 & 0xf0fe | 0x201;
        }
      }
      if (DAT_003fb10c != '\0') {
        local_80 = local_80 & 0xdffd | 0x2002;
      }
      local_74[0] = local_80;
      local_4c = local_74;
      local_50[0] = local_80;
      func_0xff222958(0x6e,local_50);
      bVar5 = local_7e._0_1_ & 0xf;
      local_7e = uVar1;
      if (((uint)(byte)((bVar5 == 2) << 1) << 8) >> 9 != (uint)local_78[1]) {
        if (local_78[1] == 0) {
          local_7e = uVar1 & 0xf0fe;
        }
        else {
          local_7e = uVar1 & 0xf0fe | 0x201;
        }
      }
      if (DAT_003fb10d != '\0') {
        local_7e = local_7e & 0xdffd | 0x2002;
      }
      local_74[0] = local_7e;
      local_44 = local_74;
      local_48[0] = local_7e;
      func_0xff222958(0x6f,local_48);
      bVar5 = local_7c._0_1_ & 0xf;
      local_7c = uVar2;
      if (((uint)(byte)((bVar5 == 2) << 1) << 8) >> 9 != (uint)local_78[2]) {
        if (local_78[2] == 0) {
          local_7c = uVar2 & 0xf0fe;
        }
        else {
          local_7c = uVar2 & 0xf0fe | 0x201;
        }
      }
      if (DAT_003fb10e != '\0') {
        local_7c = local_7c & 0xdffd | 0x2002;
      }
      local_74[0] = local_7c;
      local_3c = local_74;
      local_40[0] = local_7c;
      func_0xff222958(0x70,local_40);
      bVar5 = local_7a._0_1_ & 0xf;
      local_7a = uVar3;
      if (((uint)(byte)((bVar5 == 2) << 1) << 8) >> 9 != (uint)local_78[3]) {
        if (local_78[3] == 0) {
          local_7a = uVar3 & 0xf0fe;
        }
        else {
          local_7a = uVar3 & 0xf0fe | 0x201;
        }
      }
      if (DAT_003fb10f != '\0') {
        local_7a = local_7a & 0xdffd | 0x2002;
      }
      local_74[0] = local_7a;
      local_34 = local_74;
      local_38[0] = local_7a;
      func_0xff222958(0x71,local_38);
    }
  }
  if (((((_DAT_003fdf3e & 1) == 0) || ((_DAT_003fdf40 & 1) == 0)) &&
      ((KSZA != 1 || ((_DAT_003fdf3e & 1) == 0)))) &&
     (((((DAT_003fdf39 & 1) == 0 && ((DAT_003fdf3b & 1) == 0)) && ((DAT_003fdf3d & 1) == 0)) &&
      (((B_nopg >> 1 & 1) != 0 || (KSZA < 2)))))) {
    B_krdws = 0;
  }
  else {
    B_krdws = 1;
  }
  return;
}

