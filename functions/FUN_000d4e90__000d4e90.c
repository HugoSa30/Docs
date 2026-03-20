/*
 * Program: n42.bin
 * Function: FUN_000d4e90
 * Entry: 000d4e90
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d4e90(void)

{
  undefined uVar1;
  char cVar2;
  char cVar3;
  
  if (B_read_active != '\0') {
    if (DAT_005bb738 == '\x02') {
      _DAT_003fe95c = _DAT_003fb818;
      _DAT_003fe960 = _DAT_003fb818;
      _DAT_003fe964 = _DAT_003fb818;
      B_read_active = '\0';
      EwsNvBits = EwsNvBits | 10;
    }
    else if (DAT_005bb744 == '\x02') {
      _DAT_003fe95c = _DAT_003fb81e;
      _DAT_003fe960 = _DAT_003fb81e;
      _DAT_003fe964 = _DAT_003fb81e;
      B_read_active = '\0';
      EwsNvBits = EwsNvBits | 10;
    }
    else {
      DAT_003fb817 = DAT_003fb817 | 1;
    }
    goto LAB_000d518c;
  }
  if (((EwsNvBits >> 1 & 1) == 0) || (DAT_003fe976 == -0x3d)) goto LAB_000d518c;
  if (DAT_003fb816 == '\0') {
    _ttimout = _ttimout + -1;
    uVar1 = func_0x00fb80b4();
    cVar2 = func_0x00fb8140(uVar1);
    if (cVar2 == '\0') {
      cVar3 = func_0x00fb81ec();
      cVar2 = '\x01';
      if (cVar3 == '\0') {
        cVar2 = '\0';
        if (pty_fctr != 0) {
          pty_fctr = pty_fctr - 1;
          if (pty_fctr != 0) goto LAB_000d4fc0;
        }
        B_ptyerr = 0;
      }
      else {
        pty_fctr = pty_fctr + 1;
        if (2 < pty_fctr) {
          B_ptyerr = 1;
        }
      }
LAB_000d4fc0:
      if (cVar2 == '\0') {
        DAT_003fb817 = DAT_003fb817 | 2;
        func_0x00fb830c();
        cVar2 = '\x01';
        if (B_inistw == '\0') {
          if (B_resstw == '\0') {
            _DAT_003fb810 = _DAT_003fe95c;
            uVar1 = func_0x00fb8408();
            cVar2 = func_0x00fb850c(uVar1);
          }
          else {
            func_0x00fb8880();
            EwsNvBits = EwsNvBits & 0xfd;
            DAT_003fe976 = '<';
          }
        }
        else {
          func_0x00fb8610();
          EwsNvBits = EwsNvBits & 0xfd;
          DAT_003fe976 = '<';
        }
      }
      goto LAB_000d5078;
    }
  }
  else {
    uVar1 = func_0x00fb8408();
    cVar2 = func_0x00fb850c(uVar1);
LAB_000d5078:
    if (cVar2 == '\0') {
      DAT_003fb817 = DAT_003fb817 | 4;
      DAT_003fe976 = -0x3d;
      EwsNvBits = EwsNvBits & 0xfd | 1;
      B_eculock = 0;
      goto LAB_000d518c;
    }
  }
  DAT_003fb817 = DAT_003fb817 | 1;
LAB_000d518c:
  if (((DAT_003fc19d == '\0') || ((EwsNvBits & 1) == 0)) || (B_zndaus != '\0')) {
    DAT_003fb7f8 = 7;
  }
  else {
    DAT_003fb7f8 = 0;
  }
  if ((DAT_003fb7f8 & 4) == 0) {
    FUN_000c3e20(1);
  }
  else {
    FUN_000c3da8(1);
  }
  return;
}

