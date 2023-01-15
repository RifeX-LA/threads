#pragma once

#include <thread>

namespace flow { namespace threads {

    /**
     * @brief Returns the number of hardware thread contexts or 1 if this information is unavailable.
     */
    [[nodiscard]] unsigned int available() noexcept {
        return std::max(1u, std::thread::hardware_concurrency());
    }

    /**
     * @brief Returns the number of hardware thread contexts or 2 if this information is unavailable.
     */
    [[nodiscard]] unsigned int concurrent_available() noexcept {
        return std::max(2u, std::thread::hardware_concurrency());
    }

    /**
     * @brief Returns the optimal number of hardware thread contexts for task size of <b>n</b>.
     * Actually returns std::min(n, flow::threads::available()).
     */
    [[nodiscard]] unsigned int optimal(unsigned int n) noexcept {
        return std::min(n, flow::threads::available());
    }

    /**
     * @brief Returns the optimal number of hardware thread contexts for task size of <b>n</b>.
     * Actually returns std::min(n, flow::threads::concurrent_available()).
     */
    [[nodiscard]] unsigned int concurrent_optimal(unsigned int n) noexcept {
        return std::min(n, flow::threads::concurrent_available());
    }

}} //namespace flow::threads
