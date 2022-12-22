ARG VARIANT=ubuntu-20.04
FROM mcr.microsoft.com/devcontainers/cpp:0-${VARIANT}

RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get -y install --no-install-recommends \
    python3-pip \
    clang-format \
    && rm -rf /var/lib/apt/lists/*

RUN pip3 --disable-pip-version-check --no-cache-dir install \
    online-judge-tools \
    atcoder-tools \
    markupsafe==2.0.1 \
    && rm -rf /tmp/pip-tmp

# markupsafe==2.0.1
# https://github.com/kyuridenamida/atcoder-tools/issues/263
