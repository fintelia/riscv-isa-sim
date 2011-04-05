/* Automatically generated by parse-opcodes */
switch((insn.bits >> 0x0) & 0x7f)
{
  case 0x0:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xffffffff) == 0x0)
        {
          #include "insns/unimp.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x3:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/lb.h"
        break;
      }
      case 0x1:
      {
        #include "insns/lh.h"
        break;
      }
      case 0x2:
      {
        #include "insns/lw.h"
        break;
      }
      case 0x3:
      {
        #include "insns/ld.h"
        break;
      }
      case 0x4:
      {
        #include "insns/lbu.h"
        break;
      }
      case 0x5:
      {
        #include "insns/lhu.h"
        break;
      }
      case 0x6:
      {
        #include "insns/lwu.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x7:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x2:
      {
        #include "insns/flw.h"
        break;
      }
      case 0x3:
      {
        #include "insns/fld.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0xb:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0x1ffff) == 0x280b)
        {
          #include "insns/sbseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x100b)
        {
          #include "insns/lbst_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x180b)
        {
          #include "insns/sbst_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0xb)
        {
          #include "insns/lb_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x200b)
        {
          #include "insns/lbseg_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x1000b)
        {
          #include "insns/mov_vv.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x1800b)
        {
          #include "insns/fmov_vv.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x80b)
        {
          #include "insns/sb_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0x1ffff) == 0x208b)
        {
          #include "insns/lhseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x108b)
        {
          #include "insns/lhst_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x1008b)
        {
          #include "insns/mov_sv.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x1808b)
        {
          #include "insns/fmov_sv.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x8b)
        {
          #include "insns/lh_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x88b)
        {
          #include "insns/sh_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x288b)
        {
          #include "insns/shseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x188b)
        {
          #include "insns/shst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0x3fffff) == 0x10b)
        {
          #include "insns/lw_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1810b)
        {
          #include "insns/fmov_su.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x290b)
        {
          #include "insns/swseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1010b)
        {
          #include "insns/mov_su.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1d0b)
        {
          #include "insns/fswst_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x190b)
        {
          #include "insns/swst_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0xd0b)
        {
          #include "insns/fsw_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x250b)
        {
          #include "insns/flwseg_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x50b)
        {
          #include "insns/flw_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x90b)
        {
          #include "insns/sw_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x150b)
        {
          #include "insns/flwst_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x210b)
        {
          #include "insns/lwseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x2d0b)
        {
          #include "insns/fswseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x110b)
        {
          #include "insns/lwst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0x1ffff) == 0x218b)
        {
          #include "insns/ldseg_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x58b)
        {
          #include "insns/fld_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x18b)
        {
          #include "insns/ld_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0xd8b)
        {
          #include "insns/fsd_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x2d8b)
        {
          #include "insns/fsdseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1d8b)
        {
          #include "insns/fsdst_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x118b)
        {
          #include "insns/ldst_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x258b)
        {
          #include "insns/fldseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1018b)
        {
          #include "insns/mov_us.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x158b)
        {
          #include "insns/fldst_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x298b)
        {
          #include "insns/sdseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1818b)
        {
          #include "insns/fmov_us.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x98b)
        {
          #include "insns/sd_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x198b)
        {
          #include "insns/sdst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0x3fffff) == 0x20b)
        {
          #include "insns/lbu_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x220b)
        {
          #include "insns/lbuseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x120b)
        {
          #include "insns/lbust_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0x1ffff) == 0x228b)
        {
          #include "insns/lhuseg_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x128b)
        {
          #include "insns/lhust_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x28b)
        {
          #include "insns/lhu_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0x1ffff) == 0x230b)
        {
          #include "insns/lwuseg_v.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x30b)
        {
          #include "insns/lwu_v.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x130b)
        {
          #include "insns/lwust_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0xf:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfff) == 0x80f)
        {
          #include "insns/sbsegst_v.h"
          break;
        }
        if((insn.bits & 0xfff) == 0xf)
        {
          #include "insns/lbsegst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xfff) == 0x88f)
        {
          #include "insns/shsegst_v.h"
          break;
        }
        if((insn.bits & 0xfff) == 0x8f)
        {
          #include "insns/lhsegst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0xfff) == 0xd0f)
        {
          #include "insns/fswsegst_v.h"
          break;
        }
        if((insn.bits & 0xfff) == 0x50f)
        {
          #include "insns/flwsegst_v.h"
          break;
        }
        if((insn.bits & 0xfff) == 0x10f)
        {
          #include "insns/lwsegst_v.h"
          break;
        }
        if((insn.bits & 0xfff) == 0x90f)
        {
          #include "insns/swsegst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0xfff) == 0x18f)
        {
          #include "insns/ldsegst_v.h"
          break;
        }
        if((insn.bits & 0xfff) == 0x98f)
        {
          #include "insns/sdsegst_v.h"
          break;
        }
        if((insn.bits & 0xfff) == 0x58f)
        {
          #include "insns/fldsegst_v.h"
          break;
        }
        if((insn.bits & 0xfff) == 0xd8f)
        {
          #include "insns/fsdsegst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xfff) == 0x20f)
        {
          #include "insns/lbusegst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xfff) == 0x28f)
        {
          #include "insns/lhusegst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfff) == 0x30f)
        {
          #include "insns/lwusegst_v.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x13:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/addi.h"
        break;
      }
      case 0x1:
      {
        if((insn.bits & 0x3f03ff) == 0x93)
        {
          #include "insns/slli.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        #include "insns/slti.h"
        break;
      }
      case 0x3:
      {
        #include "insns/sltiu.h"
        break;
      }
      case 0x4:
      {
        #include "insns/xori.h"
        break;
      }
      case 0x5:
      {
        if((insn.bits & 0x3f03ff) == 0x293)
        {
          #include "insns/srli.h"
          break;
        }
        if((insn.bits & 0x3f03ff) == 0x10293)
        {
          #include "insns/srai.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        #include "insns/ori.h"
        break;
      }
      case 0x7:
      {
        #include "insns/andi.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x1b:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/addiw.h"
        break;
      }
      case 0x1:
      {
        if((insn.bits & 0x3f83ff) == 0x9b)
        {
          #include "insns/slliw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0x3f83ff) == 0x29b)
        {
          #include "insns/srliw.h"
          break;
        }
        if((insn.bits & 0x3f83ff) == 0x1029b)
        {
          #include "insns/sraiw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x23:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/sb.h"
        break;
      }
      case 0x1:
      {
        #include "insns/sh.h"
        break;
      }
      case 0x2:
      {
        #include "insns/sw.h"
        break;
      }
      case 0x3:
      {
        #include "insns/sd.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x27:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x2:
      {
        #include "insns/fsw.h"
        break;
      }
      case 0x3:
      {
        #include "insns/fsd.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x2b:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x2:
      {
        if((insn.bits & 0x1ffff) == 0x192b)
        {
          #include "insns/amominu_w.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x92b)
        {
          #include "insns/amoand_w.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1d2b)
        {
          #include "insns/amomaxu_w.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x152b)
        {
          #include "insns/amomax_w.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x12b)
        {
          #include "insns/amoadd_w.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0xd2b)
        {
          #include "insns/amoor_w.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x112b)
        {
          #include "insns/amomin_w.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x52b)
        {
          #include "insns/amoswap_w.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0x1ffff) == 0x19ab)
        {
          #include "insns/amominu_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x9ab)
        {
          #include "insns/amoand_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1dab)
        {
          #include "insns/amomaxu_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1ab)
        {
          #include "insns/amoadd_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x15ab)
        {
          #include "insns/amomax_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0xdab)
        {
          #include "insns/amoor_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x5ab)
        {
          #include "insns/amoswap_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x11ab)
        {
          #include "insns/amomin_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x2f:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x1:
      {
        #include "insns/fence_i.h"
        break;
      }
      case 0x2:
      {
        #include "insns/fence.h"
        break;
      }
      case 0x4:
      {
        #include "insns/fence_l_v.h"
        break;
      }
      case 0x5:
      {
        #include "insns/fence_g_v.h"
        break;
      }
      case 0x6:
      {
        #include "insns/fence_l_cv.h"
        break;
      }
      case 0x7:
      {
        #include "insns/fence_g_cv.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x33:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0x1ffff) == 0x33)
        {
          #include "insns/add.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x433)
        {
          #include "insns/mul.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x10033)
        {
          #include "insns/sub.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0x1ffff) == 0xb3)
        {
          #include "insns/sll.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x4b3)
        {
          #include "insns/mulh.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0x1ffff) == 0x533)
        {
          #include "insns/mulhsu.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x133)
        {
          #include "insns/slt.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0x1ffff) == 0x1b3)
        {
          #include "insns/sltu.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x5b3)
        {
          #include "insns/mulhu.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0x1ffff) == 0x633)
        {
          #include "insns/div.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x233)
        {
          #include "insns/xor.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0x1ffff) == 0x102b3)
        {
          #include "insns/sra.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x2b3)
        {
          #include "insns/srl.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x6b3)
        {
          #include "insns/divu.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0x1ffff) == 0x733)
        {
          #include "insns/rem.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x333)
        {
          #include "insns/or.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x7:
      {
        if((insn.bits & 0x1ffff) == 0x7b3)
        {
          #include "insns/remu.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x3b3)
        {
          #include "insns/and.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x37:
  {
    #include "insns/lui.h"
    break;
  }
  case 0x3b:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0x1ffff) == 0x43b)
        {
          #include "insns/mulw.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x3b)
        {
          #include "insns/addw.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x1003b)
        {
          #include "insns/subw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0x1ffff) == 0xbb)
        {
          #include "insns/sllw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0x1ffff) == 0x63b)
        {
          #include "insns/divw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0x1ffff) == 0x6bb)
        {
          #include "insns/divuw.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x2bb)
        {
          #include "insns/srlw.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x102bb)
        {
          #include "insns/sraw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0x1ffff) == 0x73b)
        {
          #include "insns/remw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x7:
      {
        if((insn.bits & 0x1ffff) == 0x7bb)
        {
          #include "insns/remuw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x43:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/fmadd_s.h"
        break;
      }
      case 0x1:
      {
        #include "insns/fmadd_d.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x47:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/fmsub_s.h"
        break;
      }
      case 0x1:
      {
        #include "insns/fmsub_d.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x4b:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/fnmsub_s.h"
        break;
      }
      case 0x1:
      {
        #include "insns/fnmsub_d.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x4f:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/fnmadd_s.h"
        break;
      }
      case 0x1:
      {
        #include "insns/fnmadd_d.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x53:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0x3ff1ff) == 0x9053)
        {
          #include "insns/fcvt_lu_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x18053)
        {
          #include "insns/fmin_s.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0x11053)
        {
          #include "insns/fcvt_s_d.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xe053)
        {
          #include "insns/fcvt_s_w.h"
          break;
        }
        if((insn.bits & 0x7c1ffff) == 0x1c053)
        {
          #include "insns/mftx_s.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0x8053)
        {
          #include "insns/fcvt_l_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x17053)
        {
          #include "insns/fle_s.h"
          break;
        }
        if((insn.bits & 0x7ffffff) == 0x1d053)
        {
          #include "insns/mffsr.h"
          break;
        }
        if((insn.bits & 0x1f1ff) == 0x3053)
        {
          #include "insns/fdiv_s.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x1f053)
        {
          #include "insns/mtfsr.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xd053)
        {
          #include "insns/fcvt_s_lu.h"
          break;
        }
        if((insn.bits & 0x1f1ff) == 0x2053)
        {
          #include "insns/fmul_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x16053)
        {
          #include "insns/flt_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x15053)
        {
          #include "insns/feq_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x7053)
        {
          #include "insns/fsgnjx_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x19053)
        {
          #include "insns/fmax_s.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xb053)
        {
          #include "insns/fcvt_wu_s.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xa053)
        {
          #include "insns/fcvt_w_s.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x1e053)
        {
          #include "insns/mxtf_s.h"
          break;
        }
        if((insn.bits & 0x1f1ff) == 0x1053)
        {
          #include "insns/fsub_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x5053)
        {
          #include "insns/fsgnj_s.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xf053)
        {
          #include "insns/fcvt_s_wu.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xc053)
        {
          #include "insns/fcvt_s_l.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0x4053)
        {
          #include "insns/fsqrt_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x6053)
        {
          #include "insns/fsgnjn_s.h"
          break;
        }
        if((insn.bits & 0x1f1ff) == 0x53)
        {
          #include "insns/fadd_s.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0x1ffff) == 0x180d3)
        {
          #include "insns/fmin_d.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xc0d3)
        {
          #include "insns/fcvt_d_l.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0xe0d3)
        {
          #include "insns/fcvt_d_w.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x100d3)
        {
          #include "insns/fcvt_d_s.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x190d3)
        {
          #include "insns/fmax_d.h"
          break;
        }
        if((insn.bits & 0x7c1ffff) == 0x1c0d3)
        {
          #include "insns/mftx_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x170d3)
        {
          #include "insns/fle_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x160d3)
        {
          #include "insns/flt_d.h"
          break;
        }
        if((insn.bits & 0x1f1ff) == 0x20d3)
        {
          #include "insns/fmul_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x70d3)
        {
          #include "insns/fsgnjx_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x150d3)
        {
          #include "insns/feq_d.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0xf0d3)
        {
          #include "insns/fcvt_d_wu.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xb0d3)
        {
          #include "insns/fcvt_wu_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x60d3)
        {
          #include "insns/fsgnjn_d.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xd0d3)
        {
          #include "insns/fcvt_d_lu.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0xa0d3)
        {
          #include "insns/fcvt_w_d.h"
          break;
        }
        if((insn.bits & 0x3fffff) == 0x1e0d3)
        {
          #include "insns/mxtf_d.h"
          break;
        }
        if((insn.bits & 0x1ffff) == 0x50d3)
        {
          #include "insns/fsgnj_d.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0x80d3)
        {
          #include "insns/fcvt_l_d.h"
          break;
        }
        if((insn.bits & 0x1f1ff) == 0xd3)
        {
          #include "insns/fadd_d.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0x90d3)
        {
          #include "insns/fcvt_lu_d.h"
          break;
        }
        if((insn.bits & 0x1f1ff) == 0x10d3)
        {
          #include "insns/fsub_d.h"
          break;
        }
        if((insn.bits & 0x3ff1ff) == 0x40d3)
        {
          #include "insns/fsqrt_d.h"
          break;
        }
        if((insn.bits & 0x1f1ff) == 0x30d3)
        {
          #include "insns/fdiv_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x63:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/beq.h"
        break;
      }
      case 0x1:
      {
        #include "insns/bne.h"
        break;
      }
      case 0x4:
      {
        #include "insns/blt.h"
        break;
      }
      case 0x5:
      {
        #include "insns/bge.h"
        break;
      }
      case 0x6:
      {
        #include "insns/bltu.h"
        break;
      }
      case 0x7:
      {
        #include "insns/bgeu.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x67:
  {
    #include "insns/j.h"
    break;
  }
  case 0x6b:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/jalr_c.h"
        break;
      }
      case 0x1:
      {
        #include "insns/jalr_r.h"
        break;
      }
      case 0x2:
      {
        #include "insns/jalr_j.h"
        break;
      }
      case 0x4:
      {
        if((insn.bits & 0x7ffffff) == 0x26b)
        {
          #include "insns/rdnpc.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x6f:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x73:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        #include "insns/vcfgivl.h"
        break;
      }
      case 0x1:
      {
        if((insn.bits & 0x3fffff) == 0xf3)
        {
          #include "insns/setvl.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0xf80003ff) == 0x173)
        {
          #include "insns/vf.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x77:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xffffffff) == 0x77)
        {
          #include "insns/syscall.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xffffffff) == 0xf7)
        {
          #include "insns/break.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0xffffffff) == 0x177)
        {
          #include "insns/stop.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0xffffffff) == 0x1f7)
        {
          #include "insns/utidx.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x7b:
  {
    switch((insn.bits >> 0x7) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0x7ffffff) == 0x7b)
        {
          #include "insns/ei.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0x7ffffff) == 0xfb)
        {
          #include "insns/di.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0x7c1ffff) == 0x17b)
        {
          #include "insns/mfpcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0xf801ffff) == 0x1fb)
        {
          #include "insns/mtpcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xffffffff) == 0x27b)
        {
          #include "insns/eret.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  default:
  {
    #include "insns/unimp.h"
  }
}
