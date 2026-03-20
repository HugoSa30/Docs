/*
 * Program: n42.bin
 * Function: FUN_00135684
 * Entry: 00135684
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00135684(void)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bStack_5d;
  char local_5c;
  byte local_5b;
  byte local_5a;
  undefined2 local_38 [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  if (0xb < fcmEnd) {
    FUN_00135ca4();
  }
  DAT_003fd7fb = DAT_003fd7fb + 1;
  if (0xc1 < DAT_003fd7fb) {
    DAT_003fd7fb = 1;
  }
  uVar10 = (uint)DAT_003fd7fb;
  iVar7 = uVar10 * 2;
  if (((&UNK_003fde63)[iVar7] & 1) == 1) {
    if ((&CLAAAA)[uVar10] != '\0') {
      uVar11 = 0;
      while (iVar9 = uVar11 * 0x28, (byte)(&UNK_003fcf4c)[iVar9] != uVar10) {
        if ((uVar11 == fcmEnd) || (uVar11 = uVar11 + 1 & 0xff, fcmEnd < uVar11)) goto LAB_001357b4;
      }
      if ((*(ushort *)(&UNK_003fcf4e + iVar9) & 1) != 1) {
        *(ushort *)(&UNK_003fcf4e + iVar9) = *(ushort *)(&UNK_003fcf4e + iVar9) & 0xfffe | 1;
        iVar9 = uVar10 * 2;
        local_38[0] = *(undefined2 *)(&UNK_003fde62 + iVar9);
        FUN_0015646c(uVar10,local_38);
        (&UNK_003fde63)[iVar9] = (&UNK_003fde63)[iVar9] & 0xfe;
      }
    }
  }
  else {
    local_38[0] = *(undefined2 *)(&UNK_003fde62 + iVar7);
    FUN_0015646c(uVar10,local_38);
  }
LAB_001357b4:
  if (((byte)(&UNK_003fde62)[iVar7] >> 4 & 1) == 1) {
    if ((&CLAAAA)[uVar10] == '\0') {
      (&UNK_003fde62)[iVar7] = (&UNK_003fde62)[iVar7] & 0xef;
    }
    else {
      uVar11 = 0;
      do {
        if ((byte)(&UNK_003fcf4c)[uVar11 * 0x28] == uVar10) break;
        if (uVar11 == fcmEnd) {
          (&UNK_003fde62)[uVar10 * 2] = (&UNK_003fde62)[uVar10 * 2] & 0xef;
          break;
        }
        uVar11 = uVar11 + 1 & 0xff;
      } while (uVar11 <= fcmEnd);
    }
  }
  else if ((&CLAAAA)[uVar10] != '\0') {
    uVar11 = 0;
    if (fcmEnd == 0) goto LAB_00135b10;
    do {
      if ((byte)(&UNK_003fcf4c)[uVar11 * 0x28] == uVar10) {
        (&UNK_003fde62)[uVar10 * 2] = (&UNK_003fde62)[uVar10 * 2] & 0xef | 0x10;
        break;
      }
      uVar11 = uVar11 + 1 & 0xff;
    } while (uVar11 < fcmEnd);
  }
  uVar10 = (uint)fcmEnd;
  if (uVar10 != 0) {
    DAT_003fd7f9 = DAT_003fd7f9 + 1;
    if (uVar10 <= DAT_003fd7f9) {
      DAT_003fd7f9 = 0;
    }
    uVar2 = (uint)DAT_003fd7f9;
    uVar4 = *(uint *)(&UNK_003fcf4c + uVar2 * 0x28);
    uVar6 = *(uint *)(&UNK_003fcf50 + uVar2 * 0x28);
    uVar11 = uVar4 >> 0x18;
    if (uVar11 == 0) {
      if (uVar10 - 1 == uVar2) {
        fcmEnd = fcmEnd - 1;
      }
      else {
        uVar10 = uVar2 + 1 & 0xff;
        FUN_00155d4c(uVar10);
        bVar8 = 0;
        puVar3 = &UNK_003fcf4b + uVar10 * 0x28;
        do {
          puVar3 = puVar3 + 1;
          *puVar3 = 0;
          bVar8 = bVar8 + 1;
        } while (bVar8 < 0x28);
      }
    }
    else {
      while (uVar2 = uVar2 + 1 & 0xff, uVar2 < uVar10) {
        if ((byte)(&UNK_003fcf4c)[uVar2 * 0x28] == uVar11) {
          bVar8 = 0;
          puVar3 = &UNK_003fcf4b + uVar2 * 0x28;
          do {
            puVar3 = puVar3 + 1;
            *puVar3 = 0;
            bVar8 = bVar8 + 1;
          } while (bVar8 < 0x28);
        }
      }
      local_5c = (char)(uVar6 >> 0x18);
      if (local_5c == (&CLAAAA)[uVar11]) {
        iVar7 = (uint)(byte)(&CLAAAA)[uVar11] * 0xd;
        uVar5 = *(undefined4 *)(&DAT_001d44b0 + iVar7);
        uVar10 = *(uint *)(&DAT_001d44b4 + iVar7);
        uStack_2c = *(undefined4 *)(&DAT_001d44b8 + iVar7);
        uStack_28 = *(uint *)(&DAT_001d44bc + iVar7) & 0xff000000;
        local_5b = (byte)(uVar6 >> 0x10);
        local_34._0_1_ = (char)((uint)uVar5 >> 0x18);
        local_34 = uVar5;
        local_30 = uVar10;
        if (((local_5b >> 3 & 1) == 1) && (local_34._0_1_ == '\0')) {
          func_0xff250900(uVar11);
        }
        else if (((local_5b >> 4 & 1) == 1) && (local_34._0_1_ != '\x02')) {
          func_0xff250900(uVar11);
        }
        else if (((local_5b >> 2 & 1) == 1) &&
                (local_30._1_1_ = (char)(uVar10 >> 0x10), local_30._1_1_ == '\0')) {
          func_0xff250900(uVar11);
        }
        else {
          bStack_5d = (byte)uVar4;
          if ((bStack_5d >> 1 & 1) == ((byte)(&UNK_003fde63)[uVar11 * 2] >> 1 & 1)) {
            local_5a = (byte)(uVar6 >> 8);
            local_34._2_1_ = (byte)((uint)uVar5 >> 8);
            if (local_34._2_1_ < local_5a) {
              func_0xff250900(uVar11);
            }
            else if (uVar10 >> 0x18 < (uVar6 & 0xff)) {
              func_0xff250900(uVar11);
            }
          }
          else {
            func_0xff250900(uVar11);
          }
        }
      }
      else {
        func_0xff250900(uVar11);
      }
    }
  }
LAB_00135b10:
  DAT_003fd7fa = DAT_003fd7fa + 1;
  if ((10 < DAT_003fd7fa) || (DAT_003fd7fa < fcmEnd)) {
    DAT_003fd7fa = fcmEnd;
  }
  if (DAT_003fd7fa < 0xb) {
    bVar8 = 0;
    puVar3 = &UNK_003fcf4b + (uint)DAT_003fd7fa * 0x28;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      bVar8 = bVar8 + 1;
    } while (bVar8 < 0x28);
  }
  if (DAT_003fa674 == '\0') {
    bVar1 = 0x13 < DAT_003fa677;
    DAT_003fa677 = DAT_003fa677 + 1;
    if (bVar1) {
      DAT_003fa674 = '\x01';
      DAT_003fa677 = '\0';
    }
  }
  else {
    DAT_003fa677 = '\0';
  }
  if (~_DAT_003fa684 == _DAT_003fa680) {
    if (DAT_003fa675 == _DAT_003fa680) {
      bVar1 = 0x13 < DAT_003fa678;
      DAT_003fa678 = DAT_003fa678 + 1;
      if (bVar1) {
        _DAT_003fa680 = 0;
        _DAT_003fa684 = 0xffffffff;
        DAT_003fa678 = '\0';
        DAT_003fa675 = 0;
      }
    }
    else {
      DAT_003fa675 = (byte)_DAT_003fa680;
      DAT_003fa678 = '\0';
    }
  }
  else {
    _DAT_003fa680 = 0;
    _DAT_003fa684 = 0xffffffff;
    DAT_003fa678 = '\0';
    DAT_003fa675 = 0;
  }
  DAT_003fd7f4 = 0xff;
  return;
}

