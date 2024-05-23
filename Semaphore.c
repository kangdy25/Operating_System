// 내부 동작
// RS = n;
Semaphore(n);

// 내부 동작
// if RS > 0 then RS = RS - 1;
// else block();
P(n);

// 임계구역

// 내부 동작
// RS = RS + 1;
// wake_up();
V(n);