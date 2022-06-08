#include <interception_macros.h>

namespace app::methods::System::ComponentModel::BackgroundWorker {
IL2CPP_REGISTER_METHOD(0x024A2970, void, __ctor, (BackgroundWorker * __this));
IL2CPP_REGISTER_METHOD(0x024A2C90, void, AsyncOperationCompleted, (BackgroundWorker * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x0478F9C0, BackgroundWorker_AsyncOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F5DF50, bool, get_CancellationPending, (BackgroundWorker * __this));
IL2CPP_REGISTER_METHOD(0x024A2D80, void, CancelAsync, (BackgroundWorker * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E668, BackgroundWorker_CancelAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A2E50, void, add_DoWork, (BackgroundWorker * __this, DoWorkEventHandler * value));
IL2CPP_REGISTER_METHOD(0x024A2F30, void, remove_DoWork, (BackgroundWorker * __this, DoWorkEventHandler * value));
IL2CPP_REGISTER_METHOD(0x024A3040, bool, get_IsBusy, (BackgroundWorker * __this));
IL2CPP_REGISTER_METHOD(0x024A3050, void, OnDoWork, (BackgroundWorker * __this, DoWorkEventArgs * e));
IL2CPP_REGISTER_METHOD(0x024A3160, void, OnRunWorkerCompleted, (BackgroundWorker * __this, RunWorkerCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x024A3280, void, OnProgressChanged, (BackgroundWorker * __this, ProgressChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x024A33A0, void, add_ProgressChanged, (BackgroundWorker * __this, ProgressChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x024A3480, void, remove_ProgressChanged, (BackgroundWorker * __this, ProgressChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x024A3590, void, ProgressReporter, (BackgroundWorker * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04737760, BackgroundWorker_ProgressReporter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A3680, void, ReportProgress, (BackgroundWorker * __this, int32_t percentProgress));
IL2CPP_REGISTER_METHOD(0x024A3690, void, ReportProgress, (BackgroundWorker * __this, int32_t percentProgress, Object * userState));
IL2CPP_REGISTER_METHODINFO(0x04780BA0, BackgroundWorker_ReportProgress_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A3870, void, RunWorkerAsync, (BackgroundWorker * __this));
IL2CPP_REGISTER_METHOD(0x024A3970, void, RunWorkerAsync, (BackgroundWorker * __this, Object * argument));
IL2CPP_REGISTER_METHODINFO(0x04791FD8, BackgroundWorker_RunWorkerAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A3A80, void, add_RunWorkerCompleted, (BackgroundWorker * __this, RunWorkerCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x024A3B60, void, remove_RunWorkerCompleted, (BackgroundWorker * __this, RunWorkerCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_WorkerReportsProgress, (BackgroundWorker * __this));
IL2CPP_REGISTER_METHOD(0x00F5DF40, void, set_WorkerReportsProgress, (BackgroundWorker * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_WorkerSupportsCancellation, (BackgroundWorker * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_WorkerSupportsCancellation, (BackgroundWorker * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024A3C70, void, WorkerThreadStart, (BackgroundWorker * __this, Object * argument));
IL2CPP_REGISTER_METHODINFO(0x0470EEA8, BackgroundWorker_WorkerThreadStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A3FC0, void, __cctor, ());
}
