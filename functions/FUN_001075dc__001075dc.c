/*
 * Program: n42.bin
 * Function: FUN_001075dc
 * Entry: 001075dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001075dc(void)

{
  int iVar1;
  ushort uVar3;
  uint uVar2;
  undefined4 *puVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  uVar7 = 0x86;
  switch(DAT_003fb962) {
  case 5:
    if (_DAT_003fb970 != 0) {
      FUN_00107104();
      return 0x11;
    }
    _DAT_003fb95c = 1;
    _DAT_003fb958 = (uint)DAT_005b8068;
    DAT_005b8088._0_2_ = 0;
    FUN_00107024();
    DAT_003fb962 = 6;
    break;
  case 6:
    break;
  case 7:
    _DAT_003fb97c = 0;
    _DAT_003fb970 = _DAT_003fb96c;
    _DAT_003fb974 = (uint *)(_DAT_003fb964 + DAT_005b8008);
    DAT_003fb980 = DAT_003fb961;
    DAT_003fb962 = 8;
    goto LAB_00107a2c;
  case 8:
LAB_00107a2c:
    uVar3 = 0;
    do {
      if ((_DAT_003fb970 & 0x80000000) != 0) {
        if ((*_DAT_003fb974 | _DAT_003fb974[0xf]) == 0) {
          uVar3 = uVar3 + 1;
          if (0xff < uVar3) break;
          if (((((_DAT_003fb974[1] == 0) && (_DAT_003fb974[2] == 0)) && (_DAT_003fb974[3] == 0)) &&
              ((((_DAT_003fb974[4] == 0 && (_DAT_003fb974[5] == 0)) &&
                ((_DAT_003fb974[6] == 0 && ((_DAT_003fb974[7] == 0 && (_DAT_003fb974[8] == 0))))))
               && (_DAT_003fb974[9] == 0)))) &&
             ((((_DAT_003fb974[10] == 0 && (_DAT_003fb974[0xb] == 0)) && (_DAT_003fb974[0xc] == 0))
              && ((_DAT_003fb974[0xd] == 0 && (_DAT_003fb974[0xe] == 0)))))) goto LAB_00107b4c;
        }
        _DAT_003fb97c = _DAT_003fb97c | 0x80000000U >> (DAT_003fb961 & 0x3f);
      }
LAB_00107b4c:
      _DAT_003fb974 = _DAT_003fb974 + 0x2000;
      _DAT_003fb97c = _DAT_003fb97c * 2;
      _DAT_003fb970 = _DAT_003fb970 * 2;
      DAT_003fb980 = DAT_003fb980 - 1;
    } while (DAT_003fb980 != 0);
    if (DAT_003fb980 != 0) {
      return 0x11;
    }
    _DAT_003fb96c = _DAT_003fb97c;
    if (_DAT_003fb97c != 0) {
      if (DAT_005b8054 <= DAT_005b8088._0_2_) {
        uVar7 = 0x88;
LAB_00107bd0:
        DAT_003fb962 = 0;
        _DAT_003fb96c = _DAT_003fb97c;
        FUN_001071cc();
        return uVar7;
      }
LAB_00107bb8:
      _DAT_003fb96c = _DAT_003fb97c;
      FUN_00107024();
      DAT_003fb962 = 6;
      return 0x10;
    }
    DAT_003fb962 = 0xc;
    goto LAB_00107be8;
  case 9:
    if (DAT_003fb960 < 4) {
      if ((_DAT_003fb96c & 0x80800000) == 0) {
        DAT_003fb981 = '\0';
      }
      else {
        DAT_003fb981 = '\x01';
        FUN_00106ca4();
      }
    }
    goto LAB_0010775c;
  case 10:
LAB_0010775c:
    if (DAT_003fb981 == '\0') {
      DAT_003fb980 = DAT_003fb961;
      _DAT_003fb970 = _DAT_003fb96c;
    }
    else {
      _DAT_003fb970 = _DAT_003fb96c & 0x80800000;
      DAT_003fb980 = 9;
    }
    _DAT_003fb97c = 0;
    _DAT_003fb974 = (uint *)(_DAT_003fb964 + DAT_005b8008);
    DAT_003fb962 = 0xb;
LAB_001077e0:
    uVar3 = 0;
    do {
      if ((_DAT_003fb970 & 0x80000000) != 0) {
        uVar3 = uVar3 + 1;
        if (0xff < uVar3) break;
        iVar1 = 0x10;
        puVar5 = _DAT_003fb974 + -1;
        do {
          puVar5 = puVar5 + 1;
          if (*puVar5 != 0xffffffff) {
            if (DAT_003fb981 == '\0') {
              _DAT_003fb97c = _DAT_003fb97c | 0x80000000U >> (DAT_003fb961 & 0x3f);
            }
            else {
              _DAT_003fb97c = _DAT_003fb97c | 0x400000;
            }
            break;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      _DAT_003fb974 = _DAT_003fb974 + 0x2000;
      _DAT_003fb97c = _DAT_003fb97c * 2;
      _DAT_003fb970 = _DAT_003fb970 * 2;
      DAT_003fb980 = DAT_003fb980 - 1;
    } while (DAT_003fb980 != 0);
    if (DAT_003fb980 != 0) {
      return 0x11;
    }
    puVar5 = (uint *)&DAT_003fb96c;
    _DAT_003fb96c = _DAT_003fb97c;
    if (_DAT_003fb97c == 0) {
      puVar6 = &DAT_003fb981;
      if (DAT_003fb981 == '\0') {
        uVar2 = 0x7fc0;
      }
      else {
        uVar2 = 0xc0;
      }
      puVar4 = (undefined4 *)&DAT_003fb964;
      if (_DAT_003fb964 < uVar2) {
        _DAT_003fb964 = _DAT_003fb964 + 0x40;
        _DAT_003fb96c = _DAT_003fb968;
        DAT_003fb962 = 10;
      }
      else {
        if (DAT_003fb981 != '\0') {
          FUN_00106cf8();
          *puVar6 = 0;
          DAT_003fb962 = 10;
          *puVar4 = 0;
          *puVar5 = _DAT_003fb968;
          return 0x11;
        }
        if (DAT_003fb95f == '\x01') {
          DAT_003fb95f = '\x02';
          if (DAT_005b8056 <= DAT_005b8088._0_2_) {
            DAT_003fb962 = 0;
            FUN_001071cc();
            return 0x89;
          }
          goto LAB_00107bb8;
        }
        DAT_003fb962 = 0xc;
      }
      return 0x11;
    }
    if (DAT_005b8056 <= DAT_005b8088._0_2_) {
      uVar7 = 0x89;
      goto LAB_00107bd0;
    }
    goto LAB_00107bb8;
  case 0xb:
    goto LAB_001077e0;
  case 0xc:
    FUN_00106d9c();
    uVar7 = 0;
    if (DAT_003fb960 < 2) {
      DAT_003fb962 = 2;
    }
    else if (DAT_003fb960 == 2) {
      DAT_003fb962 = 1;
    }
    else {
      DAT_003fb962 = 3;
    }
  default:
    goto switchD_00077620_caseD_8;
  }
  iVar1 = FUN_00106d4c();
  if (iVar1 == 0) {
    uVar7 = 0x10;
  }
  else if (DAT_003fb960 < 2) {
    uVar7 = 0x11;
    DAT_003fb962 = 7;
  }
  else if (DAT_003fb95e == '\0') {
    DAT_003fb962 = 9;
LAB_00107be8:
    uVar7 = 0x11;
  }
  else if (DAT_005b8088._0_2_ < DAT_005b8056) {
    FUN_00107024();
    uVar7 = 0x10;
  }
  else {
    DAT_003fb962 = 0;
    _DAT_003fb954 = 0x12345678;
    uVar7 = 0x89;
  }
switchD_00077620_caseD_8:
                    /* WARNING: Read-only address (ram,0x005b8054) is written */
                    /* WARNING: Read-only address (ram,0x005b8056) is written */
                    /* WARNING: Read-only address (ram,0x005b8068) is written */
  return uVar7;
}

