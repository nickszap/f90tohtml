c
c $Id: comctl.h,v 1.1.1.1 1995/02/09 23:26:41 ccm2 Exp $
c $Author: ccm2 $
c
C
C Model control variables
C
      common/comctl/itsst   ,nsrest  ,iradsw  ,iradlw  ,iradae  ,
     $              anncyc  ,nlend   ,nlres   ,nlhst   ,lbrnch  ,
     $              ldebug  ,aeres   ,ozncyc  ,sstcyc  ,dodiavg ,
     $              aeregen ,cpuchek
      integer
     $     itsst,   ! Sea surf. temp. update freq. (iters)
     $     nsrest,  ! Restart flag
     $     iradsw,  ! Iteration frequency for shortwave radiation computation
     $     iradlw,  ! Iteration frequency for longwave radiation computation
     $     iradae   ! Iteration freq. for absorptivity/emissivity comp
      logical
     $     anncyc,  ! Do annual cycle (otherwise perpetual)
     $     nlend,   ! Flag for end of run
     $     nlres,   ! If true, continuation run
     $     nlhst,   ! If true, regeneration run
     $     lbrnch,  ! If true, branch run
     $     ldebug,  ! If in debug mode, link output files to /usr/tmp
C                   !    before mswrite, and remove all but last file
     $     aeres,   ! If true, a/e data will be stored on restart file
     $     ozncyc,  ! If true, cycle ozone dataset
     $     sstcyc,  ! If true, cycle sst dataset
     $     dodiavg, ! true => diurnal averaging
     $     aeregen, ! true => absor/emis part of regeneration data
     $     cpuchek  ! If true, check remaining cpu time at each writeup
C
#ifdef LOGENTRY 
$Log: comctl.h,v $
 * Revision 1.1.1.1  1995/02/09  23:26:41  ccm2
 * Start Omega Model. Split into spectral/sld modules
 *
 * Revision 1.2  1994/09/16  21:07:47  rosinski
 * This is the first part of plx23.
 * 
#endif
