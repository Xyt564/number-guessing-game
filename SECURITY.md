# Security Policy

## Supported Versions

| Version | Supported |
| -------- | --------- |
| Latest   | ✅ Yes |
| Older versions | ❌ No |

## Reporting a Vulnerability

If you believe you have found a genuine security vulnerability, please open a GitHub Security Advisory (if available) or contact the maintainer privately.

Please include:

- A description of the issue.
- Steps to reproduce it.
- The affected version.
- Any relevant logs or screenshots.

Reports will be reviewed as soon as possible.

## What Is Considered a Security Issue?

Examples include, but are not limited to:

- Memory corruption.
- Buffer overflows.
- Undefined behaviour that can be exploited.
- Crashes caused by malformed or unexpected input.
- Any issue that could result in arbitrary code execution.

## What Is Not Considered a Security Issue?

The following are not considered security vulnerabilities for this project:

- Use of `system("cls")` or `system("clear")` with hard-coded command strings at compile time.
- Platform-specific implementation details.
- Compiler warnings that do not affect correctness or security.
- Gameplay bugs or incorrect game logic.

## Project Scope

This is a local educational C++ console application.

The application:

- Does not communicate over a network.
- Does not process sensitive user data.
- Does not execute user-supplied commands.
- Does not require elevated privileges.

As a result, the attack surface is intentionally very small.
